//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTLPlayerView;

@protocol TTLPlayerViewDelegate <NSObject>

@optional
- (void)playerView:(TTLPlayerView *)arg1 didReceiveMetaInfo:(id)arg2;
- (void)playerView:(TTLPlayerView *)arg1 mediaSizeDidChange:(struct CGSize)arg2;
- (void)playerView:(TTLPlayerView *)arg1 playerItemStatusDidChange:(long long)arg2;
- (void)playerView:(TTLPlayerView *)arg1 playbackStateDidChange:(long long)arg2;
- (void)playerView:(TTLPlayerView *)arg1 loadStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
@end

