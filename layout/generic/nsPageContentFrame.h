/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef nsPageContentFrame_h___
#define nsPageContentFrame_h___

#include "mozilla/Attributes.h"
#include "nsViewportFrame.h"
class nsPageFrame;
class nsSharedPageData;

// Page frame class used by the simple page sequence frame
class nsPageContentFrame : public ViewportFrame {

public:
  NS_DECL_FRAMEARENA_HELPERS

  friend nsIFrame* NS_NewPageContentFrame(nsIPresShell* aPresShell, nsStyleContext* aContext);
  friend class nsPageFrame;

  // nsIFrame
  NS_IMETHOD  Reflow(nsPresContext*      aPresContext,
                     nsHTMLReflowMetrics& aDesiredSize,
                     const nsHTMLReflowState& aMaxSize,
                     nsReflowStatus&      aStatus) MOZ_OVERRIDE;

  virtual bool IsFrameOfType(uint32_t aFlags) const
  {
    return ViewportFrame::IsFrameOfType(aFlags &
             ~(nsIFrame::eCanContainOverflowContainers));
  }

  virtual void SetSharedPageData(nsSharedPageData* aPD) { mPD = aPD; }

  /**
   *  Computes page size based on shared page data; SetSharedPageData must be
   *  given valid data first.
   */
  virtual nsSize ComputeSize(nsRenderingContext *aRenderingContext,
                             nsSize aCBSize, nscoord aAvailableWidth,
                             nsSize aMargin, nsSize aBorder, nsSize aPadding,
                             uint32_t aFlags) MOZ_OVERRIDE;

  virtual bool HasTransformGetter() const MOZ_OVERRIDE { return true; }

  /**
   * Get the "type" of the frame
   *
   * @see nsGkAtoms::pageContentFrame
   */
  virtual nsIAtom* GetType() const MOZ_OVERRIDE;
  
#ifdef DEBUG
  // Debugging
  NS_IMETHOD  GetFrameName(nsAString& aResult) const MOZ_OVERRIDE;
#endif

protected:
  nsPageContentFrame(nsStyleContext* aContext) : ViewportFrame(aContext) {}

  nsSharedPageData*         mPD;
};

#endif /* nsPageContentFrame_h___ */

