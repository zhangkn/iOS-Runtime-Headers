/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UINavigationBar, UIToolbar, UITransitionView, UIView;

@interface PLBackgroundView : UIView {
    NSInteger _barStyle;
    UITransitionView *_contentTransitionView;
    UIView *_currentContentView;
    id _delegate;
    UINavigationBar *_navBar;
    UIToolbar *_overlayButtonBar;
}

- (void)_setupButtonBars;
- (NSInteger)barStyle;
- (id)buttonBar;
- (id)buttonBarForItem:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 fullScreen:(BOOL)arg2;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)navigationBar:(id)arg1 poppedItem:(id)arg2;
- (void)navigationBar:(id)arg1 pushedItem:(id)arg2;
- (id)navigationBar;
- (void)playSlideshowClicked:(id)arg1;
- (void)popNavigationItem;
- (void)pushNavigationItem:(id)arg1;
- (void)setCurrentContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayingPhotoPicker:(BOOL)arg1;
- (void)statusBarHeightDidChange:(id)arg1;
- (id)topItem;
- (void)transitionViewDidComplete:(id)arg1;
- (void)updateStatusBar;

@end