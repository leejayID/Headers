//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVPlayerContext-Protocol.h"

@class NSMutableArray, NSString, TTVPlayerStateStore;

@interface TTVPlayerCacheProgressController : NSObject <TTVPlayerContext>
{
    TTVPlayerStateStore *_playerStateStore;
    long long _maxCacheCount;
    NSMutableArray *_cacheQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(nonatomic) long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
- (void).cxx_destruct;
- (double)progressForVideoID:(id)arg1;
- (double)playTimeForVideoID:(id)arg1;
- (id)progressObjectForVideoID:(id)arg1;
- (id)objectWithVideoID:(id)arg1;
- (void)cacheProgress:(double)arg1 currentTime:(double)arg2 VideoID:(id)arg3;
- (void)removeCacheForVideoID:(id)arg1;
- (void)sendContinuePlayTrack:(id)arg1;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
