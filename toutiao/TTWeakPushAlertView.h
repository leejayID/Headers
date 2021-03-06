//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTPushAlertViewProtocol-Protocol.h"

@class NSString, NSTimer, SSThemedButton, SSThemedImageView, SSThemedLabel, TTPushAlertModel, UIPanGestureRecognizer;

@interface TTWeakPushAlertView : SSThemedView <TTPushAlertViewProtocol>
{
    long long _deviceOrientation;
    _Bool _shouldAutorotate;
    _Bool _containsIndicatorHome;
    TTPushAlertModel *_alertModel;
    CDUnknownBlockType _didTapHandler;
    CDUnknownBlockType _willHideHandler;
    CDUnknownBlockType _didHideHandler;
    long long _slipIntoDirection;
    SSThemedImageView *_attractedImageView;
    SSThemedButton *_closeButton;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_detailLabel;
    SSThemedButton *_tappedEventButton;
    UIPanGestureRecognizer *_dragViewPanGR;
    NSTimer *_timer;
    double _countdownTiming;
    long long _panBeginDirection;
    struct CGRect _selfFrameBeforeDragging;
}

+ (double)leftOrRightScreenMarign;
+ (double)topStatusBarHeight;
+ (double)defaultViewWidth;
+ (double)defaultViewHeight;
+ (_Bool)isShowing;
+ (void)hideMe;
+ (void)showMe;
+ (id)findSuperViewInVisibleWindow;
+ (id)showWithTitle:(id)arg1 content:(id)arg2 imageObject:(id)arg3;
+ (id)showWithAlertModel:(id)arg1 willHideBlock:(CDUnknownBlockType)arg2 didHideBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long panBeginDirection; // @synthesize panBeginDirection=_panBeginDirection;
@property(nonatomic) double countdownTiming; // @synthesize countdownTiming=_countdownTiming;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGRect selfFrameBeforeDragging; // @synthesize selfFrameBeforeDragging=_selfFrameBeforeDragging;
@property(retain, nonatomic) UIPanGestureRecognizer *dragViewPanGR; // @synthesize dragViewPanGR=_dragViewPanGR;
@property(retain, nonatomic) SSThemedButton *tappedEventButton; // @synthesize tappedEventButton=_tappedEventButton;
@property(retain, nonatomic) SSThemedLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedImageView *attractedImageView; // @synthesize attractedImageView=_attractedImageView;
@property(nonatomic) _Bool containsIndicatorHome; // @synthesize containsIndicatorHome=_containsIndicatorHome;
@property(nonatomic) long long slipIntoDirection; // @synthesize slipIntoDirection=_slipIntoDirection;
@property(copy, nonatomic) CDUnknownBlockType didHideHandler; // @synthesize didHideHandler=_didHideHandler;
@property(copy, nonatomic) CDUnknownBlockType willHideHandler; // @synthesize willHideHandler=_willHideHandler;
@property(copy, nonatomic) CDUnknownBlockType didTapHandler; // @synthesize didTapHandler=_didTapHandler;
@property(retain, nonatomic) TTPushAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer;
- (void)hideWithAnimated:(_Bool)arg1 reason:(long long)arg2 toFrame:(struct CGRect)arg3;
- (void)hideWithAnimated:(_Bool)arg1 reason:(long long)arg2;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)hide;
- (void)showInView:(id)arg1 withAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show;
- (struct CGRect)endFrameDidHideAnimation;
- (struct CGRect)endFrameDidShowAnimation;
- (struct CGRect)initialFrameWillShowAnimationInSuperView:(id)arg1;
- (double)iphoneXBottomOffset;
- (void)updateSelfWhenReleasePanGR:(id)arg1;
- (void)updateSelfFrameWithPanGesture:(id)arg1;
- (void)restoreFrameAnimationWhenPanFailed;
- (void)panOutAnimateWithDirection:(long long)arg1;
- (void)changePanDirectionWithTranslation:(struct CGPoint)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)actionForDidTapCloseButton:(id)arg1;
- (void)actionForDidTapContentButton:(id)arg1;
- (void)layoutSubviews;
- (void)didDeviceOrientationChangeWhenSuperViewDoesNotRotate;
- (void)handleOrientationDidReceiveDeviceRotateNotification:(id)arg1;
- (void)dealloc;
- (void)removeRotateObserver;
- (void)addRotateObserver;
- (void)setupCustomViews;
- (id)initWithTitle:(id)arg1 content:(id)arg2 imageObject:(id)arg3;
- (id)initWithAlertModel:(id)arg1 willHideBlock:(CDUnknownBlockType)arg2 didHideBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

