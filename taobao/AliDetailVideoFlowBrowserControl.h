//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailVideoBrowserControl.h"

@class AliDetailModel, AliDetailVideoBrowserBottomView, TBVideoFlowViewController, UIView, UIViewController;

@interface AliDetailVideoFlowBrowserControl : AliDetailVideoBrowserControl
{
    _Bool _browserPriceShowConfig;
    _Bool _successShowVideoFlow;
    _Bool _isMakeBottomViewAnimation;
    _Bool _isEnterFullScreen;
    UIViewController *_viewController;
    AliDetailModel *_detailModel;
    UIView *_videoFlowConatiner;
    AliDetailVideoBrowserBottomView *_bottomView;
    TBVideoFlowViewController *_videoFlowViewController;
    unsigned long long _bottomType;
    struct CGPoint _contentOffset;
}

@property(nonatomic) _Bool isEnterFullScreen; // @synthesize isEnterFullScreen=_isEnterFullScreen;
@property(nonatomic) unsigned long long bottomType; // @synthesize bottomType=_bottomType;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) TBVideoFlowViewController *videoFlowViewController; // @synthesize videoFlowViewController=_videoFlowViewController;
@property(nonatomic) _Bool isMakeBottomViewAnimation; // @synthesize isMakeBottomViewAnimation=_isMakeBottomViewAnimation;
@property(retain, nonatomic) AliDetailVideoBrowserBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool successShowVideoFlow; // @synthesize successShowVideoFlow=_successShowVideoFlow;
@property(retain, nonatomic) UIView *videoFlowConatiner; // @synthesize videoFlowConatiner=_videoFlowConatiner;
@property(nonatomic) _Bool browserPriceShowConfig; // @synthesize browserPriceShowConfig=_browserPriceShowConfig;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)bottomViewMoveTopToValue:(double)arg1 bottomType:(unsigned long long)arg2;
- (void)updateBottomViewLocation;
- (void)contentOffset:(struct CGPoint)arg1 bottomType:(unsigned long long)arg2 srollEnd:(_Bool)arg3;
- (void)getOrangeBrowserPriceShowConfig;
- (void)playerViewDidEnterFullScreen:(id)arg1;
- (void)playerViewWillLeaveFullscreen:(id)arg1;
- (void)playerViewTimeChanged:(id)arg1 time:(double)arg2;
- (void)playerViewDidTapToPause:(id)arg1;
- (unsigned long long)getPauseReasonDidTapToPause:(id)arg1;
- (void)playerViewDidEndPlaying:(id)arg1;
- (void)playerViewWillPlay:(id)arg1;
- (id)getComponentView;
- (void)subPageStateChange:(id)arg1;
- (void)customizeVideo;
- (void)enableVideosFunctions;
- (_Bool)getOnlyHasMainVideo;
- (struct CGPoint)getVideoFlowContentOffset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (id)init;

@end
