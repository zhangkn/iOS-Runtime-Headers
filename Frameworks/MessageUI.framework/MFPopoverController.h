/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailPopoverManagerDelegate>;

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate> {
    BOOL _isRotating;
    id _mailDelegate;
    id _mailPopoverManager;
}

@property BOOL isRotating;
@property <MFMailPopoverManagerDelegate> * mailDelegate;
@property id mailPopoverManager;

- (void)dealloc;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)initWithContentViewController:(id)arg1;
- (BOOL)isRotating;
- (id)mailDelegate;
- (id)mailPopoverManager;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)setIsRotating:(BOOL)arg1;
- (void)setMailDelegate:(id)arg1;
- (void)setMailPopoverManager:(id)arg1;

@end