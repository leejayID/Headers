//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSTimer, QZFeedLiveAnimationManager, QzoneFeedModel, UIImageView, UILabel, UIView;

@interface QzoneFeedLiveView : UIControl
{
    UIImageView *_liveStatusView;
    UILabel *_liveTipLabel;
    UILabel *_liveUserCountLabel;
    UIImageView *_liveUserIcon;
    UIImageView *_liveLikeIcon;
    UILabel *_liveLikeLabel;
    UIImageView *_liveTimeIcon;
    UILabel *_liveTimeLable;
    UIImageView *_livePlayIcon;
    UIImageView *_coverImageView;
    QzoneFeedModel *_feedModel;
    long long _roomStatus;
    UIView *_bubbleView;
    _Bool _shouldShowTime;
    UIView *_blinkView;
    UILabel *_userAndLikeLabel;
    UIImageView *_dotsImageView;
    UIView *_audienceMaskView;
    _Bool _isQzoneLive;
    UIImageView *_topGraientView;
    UIImageView *_buttomGradientView;
    QZFeedLiveAnimationManager *_animationManager;
    NSTimer *_blinkTimer;
}

+ (id)bubbleFactory:(id)arg1 anchorUin:(long long)arg2 maxWidth:(double)arg3;
@property(nonatomic) __weak NSTimer *blinkTimer; // @synthesize blinkTimer=_blinkTimer;
- (void).cxx_destruct;
- (void)showViewsForQzoneLive;
- (void)hideViewsForQzoneLive;
- (void)showViewsForNow;
- (void)hideViewsForNow;
- (void)playerViewStartPlay;
- (void)playerViewStopPlay;
- (void)playerViewEnd;
- (void)playerViewPausePlay;
- (void)layoutDotsImageView:(id)arg1;
- (void)checkToChangeLayout;
- (id)addGradientViewInY:(double)arg1;
- (void)initUserAndLikeCount;
- (void)layoutByUserCount:(id)arg1 andLikeNumb:(id)arg2;
- (void)showAudiences:(id)arg1;
- (void)stopBlinkingView;
- (void)viewBlink;
- (void)startBlinkingView;
- (void)initBlinkView;
- (void)layoutBubbleView:(id)arg1;
- (void)setLiveInfoViewsHidden:(_Bool)arg1;
- (void)setMessageViewsHidden:(_Bool)arg1;
- (void)layoutPlayIcon;
- (id)strFromInt:(long long)arg1;
- (id)strFormatWithInt:(long long)arg1;
- (void)layoutLikeNum:(id)arg1;
- (void)layoutUserCount:(id)arg1;
- (void)layoutLiveTime:(id)arg1;
- (void)layoutLiveViews;
- (void)changeRoomStatus:(long long)arg1;
- (id)checkStatusImgForRoomStatus:(long long)arg1;
- (void)updateRoomStatusView:(long long)arg1;
- (void)updateQZDrawItem:(id)arg1 withFeedModel:(id)arg2;
- (id)initWithQZDrawItem:(id)arg1 withFeedModel:(id)arg2;

@end
