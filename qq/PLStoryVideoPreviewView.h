//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerItem, AVPlayerLayer, NSString, TBPlayer, TBRichMediaVideoInfo, TBSwipeableFilterView;
@protocol PLStoryVideoPreviewViewDelegate;

@interface PLStoryVideoPreviewView : UIView
{
    TBPlayer *_player;
    AVPlayerItem *_playItem;
    id _timerObserver;
    AVPlayerLayer *_playerLayer;
    unsigned long long _mediaType;
    float _videoRate;
    id <PLStoryVideoPreviewViewDelegate> _delegate;
    NSString *_videoGravity;
    TBSwipeableFilterView *_preView;
    TBRichMediaVideoInfo *_videoInfo;
    id _periodTimerObserver;
}

@property(retain, nonatomic) id periodTimerObserver; // @synthesize periodTimerObserver=_periodTimerObserver;
@property(retain, nonatomic) TBRichMediaVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(readonly, nonatomic) float videoRate; // @synthesize videoRate=_videoRate;
@property(retain, nonatomic) TBSwipeableFilterView *preView; // @synthesize preView=_preView;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) __weak id <PLStoryVideoPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

