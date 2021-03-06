/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef nsITextControlElement_h___
#define nsITextControlElement_h___

#include "nsISupports.h"
#include "nsCOMPtr.h"
class nsIContent;
class nsAString;
class nsIEditor;
class nsISelectionController;
class nsFrameSelection;
class nsTextControlFrame;

// IID for the nsITextControl interface
#define NS_ITEXTCONTROLELEMENT_IID    \
{ 0xe0a05008, 0xef02, 0x4fa2,    \
  { 0x93, 0xf2, 0x78, 0xe1, 0xec, 0xf7, 0x5b, 0x79 } }

/**
 * This interface is used for the text control frame to get the editor and
 * selection controller objects, and some helper properties.
 */
class nsITextControlElement : public nsISupports {
public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITEXTCONTROLELEMENT_IID)

  /**
   * Tell the control that value has been deliberately changed (or not).
   */
  NS_IMETHOD SetValueChanged(bool changed) = 0;

  /**
   * Find out whether this is a single line text control.  (text or password)
   * @return whether this is a single line text control
   */
  NS_IMETHOD_(bool) IsSingleLineTextControl() const = 0;

  /**
   * Find out whether this control is a textarea.
   * @return whether this is a textarea text control
   */
  NS_IMETHOD_(bool) IsTextArea() const = 0;

  /**
   * Find out whether this control edits plain text.  (Currently always true.)
   * @return whether this is a plain text control
   */
  NS_IMETHOD_(bool) IsPlainTextControl() const = 0;

  /**
   * Find out whether this is a password control (input type=password)
   * @return whether this is a password ontrol
   */
  NS_IMETHOD_(bool) IsPasswordTextControl() const = 0;

  /**
   * Get the cols attribute (if textarea) or a default
   * @return the number of columns to use
   */
  NS_IMETHOD_(int32_t) GetCols() = 0;

  /**
   * Get the column index to wrap at, or -1 if we shouldn't wrap
   */
  NS_IMETHOD_(int32_t) GetWrapCols() = 0;

  /**
   * Get the rows attribute (if textarea) or a default
   * @return the number of rows to use
   */
  NS_IMETHOD_(int32_t) GetRows() = 0;

  /**
   * Get the default value of the text control
   */
  NS_IMETHOD_(void) GetDefaultValueFromContent(nsAString& aValue) = 0;

  /**
   * Return true if the value of the control has been changed.
   */
  NS_IMETHOD_(bool) ValueChanged() const = 0;

  /**
   * Get the current value of the text editor.
   *
   * @param aValue the buffer to retrieve the value in
   * @param aIgnoreWrap whether to ignore the text wrapping behavior specified
   * for the element.
   */
  NS_IMETHOD_(void) GetTextEditorValue(nsAString& aValue, bool aIgnoreWrap) const = 0;

  /**
   * Get the editor object associated with the text editor.
   * The return value is null if the control does not support an editor
   * (for example, if it is a checkbox.)
   */
  NS_IMETHOD_(nsIEditor*) GetTextEditor() = 0;

  /**
   * Get the selection controller object associated with the text editor.
   * The return value is null if the control does not support an editor
   * (for example, if it is a checkbox.)
   */
  NS_IMETHOD_(nsISelectionController*) GetSelectionController() = 0;

  NS_IMETHOD_(nsFrameSelection*) GetConstFrameSelection() = 0;

  /**
   * Binds a frame to the text control.  This is performed when a frame
   * is created for the content node.
   */
  NS_IMETHOD BindToFrame(nsTextControlFrame* aFrame) = 0;

  /**
   * Unbinds a frame from the text control.  This is performed when a frame
   * belonging to a content node is destroyed.
   */
  NS_IMETHOD_(void) UnbindFromFrame(nsTextControlFrame* aFrame) = 0;

  /**
   * Creates an editor for the text control.  This should happen when
   * a frame has been created for the text control element, but the created
   * editor may outlive the frame itself.
   */
  NS_IMETHOD CreateEditor() = 0;

  /**
   * Get the anonymous root node for the text control.
   */
  NS_IMETHOD_(nsIContent*) GetRootEditorNode() = 0;

  /**
   * Create the placeholder anonymous node for the text control and returns it.
   */
  NS_IMETHOD_(nsIContent*) CreatePlaceholderNode() = 0;

  /**
   * Get the placeholder anonymous node for the text control.
   */
  NS_IMETHOD_(nsIContent*) GetPlaceholderNode() = 0;

  /**
   * Initialize the keyboard event listeners.
   */
  NS_IMETHOD_(void) InitializeKeyboardEventListeners() = 0;

  /**
   * Show/hide the placeholder for the control.
   */
  NS_IMETHOD_(void) SetPlaceholderClass(bool aVisible, bool aNotify) = 0;

  /**
   * Callback called whenever the value is changed.
   */
  NS_IMETHOD_(void) OnValueChanged(bool aNotify) = 0;

  static const int32_t DEFAULT_COLS = 20;
  static const int32_t DEFAULT_ROWS = 1;
  static const int32_t DEFAULT_ROWS_TEXTAREA = 2;
  static const int32_t DEFAULT_UNDO_CAP = 1000;

  // wrap can be one of these three values.  
  typedef enum {
    eHTMLTextWrap_Off     = 1,    // "off"
    eHTMLTextWrap_Hard    = 2,    // "hard"
    eHTMLTextWrap_Soft    = 3     // the default
  } nsHTMLTextWrap;

  static bool
  GetWrapPropertyEnum(nsIContent* aContent, nsHTMLTextWrap& aWrapProp);

  /**
   * Does the editor have a selection cache?
   *
   * Note that this function has the side effect of making the editor for input
   * elements be initialized eagerly.
   */
  NS_IMETHOD_(bool) HasCachedSelection() = 0;

  static already_AddRefed<nsITextControlElement>
  GetTextControlElementFromEditingHost(nsIContent* aHost);
};

NS_DEFINE_STATIC_IID_ACCESSOR(nsITextControlElement,
                              NS_ITEXTCONTROLELEMENT_IID)

#endif // nsITextControlElement_h___

