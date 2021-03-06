//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoLargeVideoView.h"

@class UIImage, WBContentImageView;

@interface WBPageInfoLiveVideoView : WBPageInfoLargeVideoView
{
    WBContentImageView *_clipImageView;
    UIImage *_clipImage;
}

@property(retain, nonatomic) UIImage *clipImage; // @synthesize clipImage=_clipImage;
@property(retain, nonatomic) WBContentImageView *clipImageView; // @synthesize clipImageView=_clipImageView;
- (void).cxx_destruct;
- (void)sendStatistic:(long long)arg1;
- (void)didStopPlay:(id)arg1;
- (void)didStartPlay:(id)arg1;
- (void)updateClipImageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

