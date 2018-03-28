//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESVideoPlayerDelegate-Protocol.h"

@class HTSVideoTimingTracker, NSDictionary, NSMutableArray, NSString, SSThemedImageView, TTShortVideoModel, UIImageView, UILabel;
@protocol AWEVideoPlayViewDelegate, IESVideoPlayerProtocol;

@interface AWEVideoPlayView : UIView <IESVideoPlayerDelegate>
{
    _Bool _isPlaying;
    _Bool _autoAdjustViewFrame;
    _Bool _isVideoDeleted;
    _Bool _isFirstInit;
    _Bool _usingFirstFrameCover;
    TTShortVideoModel *_model;
    NSDictionary *_commonTrackingParameter;
    double _videoDuration;
    id <AWEVideoPlayViewDelegate> _delegate;
    id <IESVideoPlayerProtocol> _playerController;
    SSThemedImageView *_backgroundView;
    SSThemedImageView *_backdropImageView;
    UIImageView *_loadingIndicatorView;
    UILabel *_flowStatisticsLabel;
    HTSVideoTimingTracker *_timingTracker;
    NSMutableArray *_observerArray;
    long long _videoStalledCount;
}

@property(nonatomic) _Bool usingFirstFrameCover; // @synthesize usingFirstFrameCover=_usingFirstFrameCover;
@property(nonatomic) long long videoStalledCount; // @synthesize videoStalledCount=_videoStalledCount;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) HTSVideoTimingTracker *timingTracker; // @synthesize timingTracker=_timingTracker;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(nonatomic) _Bool isVideoDeleted; // @synthesize isVideoDeleted=_isVideoDeleted;
@property(retain, nonatomic) UILabel *flowStatisticsLabel; // @synthesize flowStatisticsLabel=_flowStatisticsLabel;
@property(retain, nonatomic) UIImageView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) SSThemedImageView *backdropImageView; // @synthesize backdropImageView=_backdropImageView;
@property(retain, nonatomic) SSThemedImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> playerController; // @synthesize playerController=_playerController;
@property(nonatomic) _Bool autoAdjustViewFrame; // @synthesize autoAdjustViewFrame=_autoAdjustViewFrame;
@property(nonatomic) __weak id <AWEVideoPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSDictionary *commonTrackingParameter; // @synthesize commonTrackingParameter=_commonTrackingParameter;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) TTShortVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)player:(id)arg1 didChangeStallState:(long long)arg2;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)player:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)player:(id)arg1 didChangePlaybackStateWithAction:(long long)arg2;
- (void)playerWillLoopPlaying:(id)arg1;
- (void)_showLoadingIndicator:(_Bool)arg1;
- (void)_showLoadingIndicator;
- (void)_updateFrame;
- (void)_loadView;
- (void)_didPlayFailedWithError:(id)arg1;
- (void)_didStartDisplayFrames;
- (void)_doStop;
- (void)_doPlay;
- (void)_removeObservers;
- (void)_addObservers;
- (void)stop;
- (void)pause;
- (void)play;
- (void)resetVideoPlayAddress;
- (void)prepareToPlay;
- (void)updateWithModel:(id)arg1 usingFirstFrameCover:(_Bool)arg2;
- (void)setContentMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
