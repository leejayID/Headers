//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

#import "WBFAVPlayerItem-Protocol.h"

@class NSArray, NSError, NSString;
@protocol WBFAVAsset;

@interface AVPlayerItem (WBFAdditions) <WBFAVPlayerItem>
+ (id)playbackDidReachEndTimeNotificationName;
+ (id)playbackStalledNotificationName;
@property(readonly) CDStruct_1b6d18a9 loadedTimeDuration;
@property(readonly, nonatomic) double startupTime;
@property(readonly, nonatomic) _Bool cacheModuleActive;

// Remaining properties
@property(readonly, nonatomic) id <WBFAVAsset> asset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp;
@property(readonly, nonatomic) struct CGSize presentationSize;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;
@end

