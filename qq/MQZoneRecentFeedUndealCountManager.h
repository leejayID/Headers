//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimer;

@interface MQZoneRecentFeedUndealCountManager : NSObject
{
    NSTimer *_timer;
    NSDate *_updateTime;
    long long _requestID;
    unsigned long long _nextTimeOut;
    _Bool _enable;
    NSString *_sTransParam;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)onApplicationDidEnterBackgroundNotify:(id)arg1;
- (void)onApplicationWillEnterForegroundNotify:(id)arg1;
- (long long)onGetUnreadCountNotify:(id)arg1;
- (void)handleUndealCountResult:(id)arg1 jumpType:(long long)arg2;
- (_Bool)isGettingUndealCount;
- (void)stopGetUndealCount;
- (void)getUndealCount;
- (void)onTimer:(id)arg1;
- (void)stopTimmer;
- (void)stopGetUndealCountTimer;
- (void)startGetUndealCountTimer:(_Bool)arg1;
- (id)init;

@end
