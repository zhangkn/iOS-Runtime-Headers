/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIStackedBar;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    SKUIStackedBar *_fromBar;
    float _split;
    SKUIStackedBar *_toBar;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) SKUIStackedBar * fromBar;
@property(readonly) unsigned int hash;
@property float split;
@property(readonly) Class superclass;
@property(retain) SKUIStackedBar * toBar;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)fromBar;
- (void)setFromBar:(id)arg1;
- (void)setSplit:(float)arg1;
- (void)setToBar:(id)arg1;
- (float)split;
- (id)toBar;
- (double)transitionDuration:(id)arg1;

@end