/* -*- Mode: Java; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- /
/* vim: set shiftwidth=2 tabstop=2 autoindent cindent expandtab: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

"use strict";

dump("###################################### forms.js loaded\n");

let Ci = Components.interfaces;
let Cc = Components.classes;
let Cu = Components.utils;

Cu.import("resource://gre/modules/Services.jsm");
Cu.import('resource://gre/modules/XPCOMUtils.jsm');
XPCOMUtils.defineLazyServiceGetter(Services, "fm",
                                   "@mozilla.org/focus-manager;1",
                                   "nsIFocusManager");

let HTMLInputElement = Ci.nsIDOMHTMLInputElement;
let HTMLTextAreaElement = Ci.nsIDOMHTMLTextAreaElement;
let HTMLSelectElement = Ci.nsIDOMHTMLSelectElement;
let HTMLOptGroupElement = Ci.nsIDOMHTMLOptGroupElement;
let HTMLOptionElement = Ci.nsIDOMHTMLOptionElement;

let FormAssistant = {
  init: function fa_init() {
    addEventListener("focus", this, true, false);
    addEventListener("blur", this, true, false);
    addEventListener("keypress", this, true, false);
    addEventListener("resize", this, true, false);
    addMessageListener("Forms:Select:Choice", this);
    addMessageListener("Forms:Input:Value", this);
    addMessageListener("Forms:Select:Blur", this);
    Services.obs.addObserver(this, "ime-enabled-state-changed", false);
    Services.obs.addObserver(this, "xpcom-shutdown", false);
  },

  isKeyboardOpened: false,
  selectionStart: 0,
  selectionEnd: 0,

  _focusedElement: null,

  get focusedElement() {
    if (this._focusedElement && Cu.isDeadWrapper(this._focusedElement))
      this._focusedElement = null;

    return this._focusedElement;
  },

  set focusedElement(val) {
    this._focusedElement = val;
  },

  setFocusedElement: function fa_setFocusedElement(element) {
    if (element === this.focusedElement)
      return;

    if (this.focusedElement) {
      this.focusedElement.removeEventListener('mousedown', this);
      this.focusedElement.removeEventListener('mouseup', this);
      if (!element) {
        this.focusedElement.blur();
      }
    }

    if (element) {
      element.addEventListener('mousedown', this);
      element.addEventListener('mouseup', this);
    }

    this.focusedElement = element;
  },

  handleEvent: function fa_handleEvent(evt) {
    let focusedElement = this.focusedElement;
    let target = evt.target;

    switch (evt.type) {
      case "focus":
        if (this.isKeyboardOpened)
          return;

        let ignore = {
          button: true,
          file: true,
          checkbox: true,
          radio: true,
          reset: true,
          submit: true,
          image: true
        };
    
        if (target instanceof HTMLSelectElement) { 
          content.setTimeout(function showIMEForSelect() {
            sendAsyncMessage("Forms:Input", getJSON(target));
          });
          this.setFocusedElement(target);
        } else if (target instanceof HTMLOptionElement &&
                   target.parentNode instanceof HTMLSelectElement) {
          target = target.parentNode;
          content.setTimeout(function showIMEForSelect() {
            sendAsyncMessage("Forms:Input", getJSON(target));
          });
          this.setFocusedElement(target);
        } else if ((target instanceof HTMLInputElement && !ignore[target.type]) ||
                    target instanceof HTMLTextAreaElement) {
          this.isKeyboardOpened = this.tryShowIme(target);
          this.setFocusedElement(target);
        }
        break;

      case "blur":
        if (this.focusedElement) {
          sendAsyncMessage("Forms:Input", { "type": "blur" });
          this.isKeyboardOpened = false;
          this.setFocusedElement(null);
        }
        break;

      case 'mousedown':
        // We only listen for this event on the currently focused element.
        // When the mouse goes down, note the cursor/selection position
        this.selectionStart = this.focusedElement.selectionStart;
        this.selectionEnd = this.focusedElement.selectionEnd;
        break;

      case 'mouseup':
        // We only listen for this event on the currently focused element.
        // When the mouse goes up, see if the cursor has moved (or the
        // selection changed) since the mouse went down. If it has, we
        // need to tell the keyboard about it
        if (this.focusedElement.selectionStart !== this.selectionStart ||
            this.focusedElement.selectionEnd !== this.selectionEnd) {
          this.tryShowIme(this.focusedElement);
        }
        break;

      case "resize":
        if (!this.isKeyboardOpened)
          return;

        if (this.focusedElement) {
          this.focusedElement.scrollIntoView(false);
        }
        break;

      case "keypress":
        if (evt.keyCode != evt.DOM_VK_ESCAPE || !this.isKeyboardOpened)
          return;

        sendAsyncMessage("Forms:Input", { "type": "blur" });
        this.isKeyboardOpened = false;

        evt.preventDefault();
        evt.stopPropagation();
        break;
    }
  },

  receiveMessage: function fa_receiveMessage(msg) {
    let target = this.focusedElement;
    if (!target) {
      return;
    }

    let json = msg.json;
    switch (msg.name) {
      case "Forms:Input:Value": {
        target.value = json.value;

        let event = content.document.createEvent('HTMLEvents');
        event.initEvent('input', true, false);
        target.dispatchEvent(event);
        break;
      }

      case "Forms:Select:Choice":
        let options = target.options;
        let valueChanged = false;
        if ("index" in json) {
          if (options.selectedIndex != json.index) {
            options.selectedIndex = json.index;
            valueChanged = true;
          }
        } else if ("indexes" in json) {
          for (let i = 0; i < options.length; i++) {
            let newValue = (json.indexes.indexOf(i) != -1);
            if (options.item(i).selected != newValue) {
              options.item(i).selected = newValue;
              valueChanged = true;
            }
          }
        }

        // only fire onchange event if any selected option is changed
        if (valueChanged) {
          let event = content.document.createEvent('HTMLEvents');
          event.initEvent('change', true, true);
          target.dispatchEvent(event);
        }
        break;

      case "Forms:Select:Blur": {
        this.setFocusedElement(null);
        break;
      }
    }
  },

  observe: function fa_observe(subject, topic, data) {
    switch (topic) {
      case "ime-enabled-state-changed":
        let isOpen = this.isKeyboardOpened;
        let shouldOpen = parseInt(data);
        if (shouldOpen && !isOpen) {
          let target = Services.fm.focusedElement;

          if (!target || !this.tryShowIme(target)) {
            this.setFocusedElement(null);
            return;
          } else {
            this.setFocusedElement(target);
          }
        } else if (!shouldOpen && isOpen) {
          sendAsyncMessage("Forms:Input", { "type": "blur" });
        }
        this.isKeyboardOpened = shouldOpen;
        break;

      case "xpcom-shutdown":
        Services.obs.removeObserver(this, "ime-enabled-state-changed", false);
        Services.obs.removeObserver(this, "xpcom-shutdown");
        removeMessageListener("Forms:Select:Choice", this);
        removeMessageListener("Forms:Input:Value", this);
        break;
    }
  },

  tryShowIme: function(element) {
    if (!element) {
      return;
    }

    // FIXME/bug 729623: work around apparent bug in the IME manager
    // in gecko.
    let readonly = element.getAttribute("readonly");
    if (readonly) {
      return false;
    }

    sendAsyncMessage("Forms:Input", getJSON(element));
    return true;
  }
};

FormAssistant.init();


function getJSON(element) {
  let type = element.type || "";

  // Until the input type=date/datetime/time have been implemented
  // let's return their real type even if the platform returns 'text'
  // Related to Bug 769352 - Implement <input type=date>
  // Related to Bug 777279 - Implement <input type=time>
  let attributeType = element.getAttribute("type") || "";

  if (attributeType) {
    var typeLowerCase = attributeType.toLowerCase(); 
    switch (typeLowerCase) {
      case "date":
      case "time":
      case "datetime":
      case "datetime-local":
        type = typeLowerCase;
        break;
    }
  }

  // Gecko supports the inputmode attribute on text fields (but not textareas).
  // But it doesn't recognize "verbatim" and other modes that we're interested
  // in in Gaia, and the inputmode property returns "auto" for any value
  // that gecko does not support. So we must query the inputmode attribute
  // with getAttribute() rather than just using the inputmode property here.
  // See https://bugzilla.mozilla.org/show_bug.cgi?id=746142
  let inputmode = element.getAttribute('inputmode');
  if (inputmode) {
    inputmode = inputmode.toLowerCase();
  } else {
    inputmode = '';
  }

  return {
    "type": type.toLowerCase(),
    "choices": getListForElement(element),
    "value": element.value,
    "inputmode": inputmode,
    "selectionStart": element.selectionStart,
    "selectionEnd": element.selectionEnd
  };
}

function getListForElement(element) {
  if (!(element instanceof HTMLSelectElement))
    return null;

  let optionIndex = 0;
  let result = {
    "multiple": element.multiple,
    "choices": []
  };

  // Build up a flat JSON array of the choices.
  // In HTML, it's possible for select element choices to be under a
  // group header (but not recursively). We distinguish between headers
  // and entries using the boolean "list.group".
  let children = element.children;
  for (let i = 0; i < children.length; i++) {
    let child = children[i];

    if (child instanceof HTMLOptGroupElement) {
      result.choices.push({
        "group": true,
        "text": child.label || child.firstChild.data,
        "disabled": child.disabled
      });

      let subchildren = child.children;
      for (let j = 0; j < subchildren.length; j++) {
        let subchild = subchildren[j];
        result.choices.push({
          "group": false,
          "inGroup": true,
          "text": subchild.text,
          "disabled": child.disabled || subchild.disabled,
          "selected": subchild.selected,
          "optionIndex": optionIndex++
        });
      }
    } else if (child instanceof HTMLOptionElement) {
      result.choices.push({
        "group": false,
        "inGroup": false,
        "text": child.text,
        "disabled": child.disabled,
        "selected": child.selected,
        "optionIndex": optionIndex++
      });
    }
  }

  return result;
};

