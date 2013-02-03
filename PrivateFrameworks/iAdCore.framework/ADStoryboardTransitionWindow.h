/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class UIImageView, UIView, ADBannerData, <ADStoryboardTransitionWindowDelegate>, UIWebView, ADStoryboardController;

@interface ADStoryboardTransitionWindow : UIWindow {
    <ADStoryboardTransitionWindowDelegate> *_adDelegate;
    UIImageView *_adImageView;
    BOOL _adReady;
    int _authoredTransitionState;
    ADBannerData *_bannerData;
    UIWebView *_bannerWebView;
    UIView *_containerView;
    BOOL _revealTransitionStillRunning;
    struct CGImage { } *_screenBeforeTransitionIn;
    ADStoryboardController *_storyboard;
}

@property <ADStoryboardTransitionWindowDelegate> * adDelegate;
@property(retain) UIImageView * adImageView;
@property BOOL adReady;
@property int authoredTransitionState;
@property(retain) ADBannerData * bannerData;
@property(retain) UIWebView * bannerWebView;
@property(retain) UIView * containerView;
@property BOOL revealTransitionStillRunning;
@property struct CGImage { }* screenBeforeTransitionIn;
@property(retain) ADStoryboardController * storyboard;

+ (void)_calculateOffsetForTaskSwitcherInOrientation:(int)arg1;
+ (void)_setOwnerWindow:(id)arg1;
+ (void)hideAppSwitcher;
+ (void)showAppSwitcher;

- (int)_adOrientation;
- (void)_dispatchDOMEventToBannerView:(id)arg1;
- (void)_doBeginAuthored;
- (void)_doBeginReveal;
- (void)_doCompleteReveal;
- (void)_doSlide;
- (void)_doTransitionBegin;
- (void)_doTransitionCompleted;
- (void)_helper:(id)arg1;
- (int)_hostOrientation;
- (void)_revealLayoutWithOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_sizeForAdOrientation;
- (void)_slideLayout;
- (int)_slideTransitionOrientation;
- (id)_transitionAdImage;
- (id)_transitionImage;
- (struct CGPoint { float x1; float x2; })_transitionOffset;
- (int)_transitionType;
- (void)_undoReveal;
- (void)_undoSlide;
- (void)_undoTransitionBegin;
- (void)_undoTransitionCompleted;
- (id)adDelegate;
- (id)adImageView;
- (void)adIsReady;
- (BOOL)adReady;
- (void)authoredTransitionInComplete;
- (int)authoredTransitionState;
- (id)bannerData;
- (id)bannerWebView;
- (id)containerView;
- (void)dealloc;
- (void)dismissAd;
- (void)dismissRemoteSheet;
- (id)initWithBannerData:(id)arg1 delegate:(id)arg2;
- (void)mainContentSignalsReady;
- (void)prepareRemoteSheet;
- (void)presentAd;
- (void)readyForAuthoredTransitionIn;
- (BOOL)revealTransitionStillRunning;
- (struct CGImage { }*)screenBeforeTransitionIn;
- (void)setAdDelegate:(id)arg1;
- (void)setAdImageView:(id)arg1;
- (void)setAdReady:(BOOL)arg1;
- (void)setAuthoredTransitionState:(int)arg1;
- (void)setBannerData:(id)arg1;
- (void)setBannerWebView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setRevealTransitionStillRunning:(BOOL)arg1;
- (void)setScreenBeforeTransitionIn:(struct CGImage { }*)arg1;
- (void)setStoryboard:(id)arg1;
- (id)storyboard;

@end