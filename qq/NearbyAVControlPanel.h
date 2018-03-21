//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>

@class NSString, NSTimer, NearbyAVCountDownView, NearbyAVFunChatBar, NearbyAVTopControlbar, NearbyFriendCellTag, NearbyVideoChatFilterButton, NearbyVideoChatFilterLogic, NearbyVideoChatGoldBeanButton, NearbyVideoChatStartChatButton, NearbyVideoCountTimeLogic, TriRectStyleView, UIButton, UIImageView, UILabel;
@protocol NearbyAVControlPanelDelegate, QQTouchHook;

@interface NearbyAVControlPanel : UIView <QUIAlertViewDelegate>
{
    UIButton *_closeButt;
    NearbyVideoChatFilterButton *_filterButton;
    NearbyVideoChatGoldBeanButton *_goldBeanButton;
    NearbyVideoChatFilterLogic *_filterLogic;
    _Bool _isSelfHide;
    NSTimer *_selfHideTimer;
    UIImageView *_backGroundView;
    _Bool _hasGetVideoChatAuthority;
    _Bool _hasGetCameraAuthority;
    NearbyAVCountDownView *_countDownView;
    NearbyFriendCellTag *_countUpTag;
    UILabel *_topTipsLable;
    TriRectStyleView *_countDowntTipView;
    UIButton *_personalCenterBtn;
    _Bool _isBottomControlBarDisplay;
    _Bool _isCameraAvailable;
    _Bool _isHiddenState;
    _Bool _isFirstClickActionSheetItem;
    _Bool _isFirstClickGodnessItem;
    id <NearbyAVControlPanelDelegate> _delegate;
    NearbyAVTopControlbar *_topControlBar;
    NearbyAVFunChatBar *_avFunChatBar;
    NearbyVideoCountTimeLogic *_countTimeLogic;
    id <QQTouchHook> _touchHook;
    id <QQTouchHook> _touchHookAVFunDrawing;
    UILabel *_tipsLabel;
    NearbyVideoChatStartChatButton *_startChatButton;
}

@property(nonatomic) _Bool isFirstClickGodnessItem; // @synthesize isFirstClickGodnessItem=_isFirstClickGodnessItem;
@property(nonatomic) _Bool isFirstClickActionSheetItem; // @synthesize isFirstClickActionSheetItem=_isFirstClickActionSheetItem;
@property(nonatomic) _Bool isHiddenState; // @synthesize isHiddenState=_isHiddenState;
@property(nonatomic) _Bool isCameraAvailable; // @synthesize isCameraAvailable=_isCameraAvailable;
@property(retain, nonatomic) NearbyVideoChatStartChatButton *startChatButton; // @synthesize startChatButton=_startChatButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id <QQTouchHook> touchHookAVFunDrawing; // @synthesize touchHookAVFunDrawing=_touchHookAVFunDrawing;
@property(nonatomic) __weak id <QQTouchHook> touchHook; // @synthesize touchHook=_touchHook;
@property(readonly) NearbyVideoCountTimeLogic *countTimeLogic; // @synthesize countTimeLogic=_countTimeLogic;
@property(readonly) NearbyAVFunChatBar *avFunChatBar; // @synthesize avFunChatBar=_avFunChatBar;
@property(retain, nonatomic) NearbyAVTopControlbar *topControlBar; // @synthesize topControlBar=_topControlBar;
@property(nonatomic) _Bool isBottomControlBarDisplay; // @synthesize isBottomControlBarDisplay=_isBottomControlBarDisplay;
@property(nonatomic) __weak id <NearbyAVControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)startChatButtonClickAnimation;
- (void)openRechargeGoldBeanWebView:(unsigned long long)arg1;
- (void)onPersonalCenterBtnClick;
- (void)onGoldBeanButtonClick;
- (void)onFilterButtonClick:(id)arg1;
- (void)startVideoChat;
- (void)onStartChatButtonClick;
- (void)onCloseButtClick:(id)arg1;
- (void)selfHide;
- (void)stopHideTimer;
- (void)startHideTimer;
- (void)hiddenPanelWithAnimate:(_Bool)arg1;
- (void)showPanelWithAnimate:(_Bool)arg1;
- (void)changeHideState;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setAVFunDrawingState:(_Bool)arg1;
- (void)setFunChatBarShow:(_Bool)arg1;
- (void)setTopTipsText:(unsigned long long)arg1;
- (void)setFilterButtonText:(unsigned long long)arg1;
- (void)showVideoChatToast;
- (void)refreshControlPanel;
- (void)onNearbyVideoConfigFetchedNotify:(id)arg1;
- (void)onReceveVideoChatGoldBeanAndHeart:(id)arg1;
- (void)onReceveVideoChatAuthority;
- (void)registerNotification;
- (void)setupIsFirstClickGodnessItem;
- (void)setupIsFirstClickActionSheetItem;
- (void)showDefaultView;
- (void)hiddenDefaultView;
- (void)showChatButton;
- (void)loadCountTimeModule;
- (void)loadFunChatBar;
- (void)loadDefaultView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
