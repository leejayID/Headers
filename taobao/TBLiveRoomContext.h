//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBLiveRoomContext : NSObject
{
    _Bool _isLandscape;
    long long _liveRoomType;
    unsigned long long _watchOrBroadcaster;
    unsigned long long _likeTotal;
    long long _onlineUserCount;
    long long _totalUserCount;
    NSString *_accountId;
    NSString *_liveId;
    NSString *_topic;
}

@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) long long totalUserCount; // @synthesize totalUserCount=_totalUserCount;
@property(nonatomic) long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) unsigned long long likeTotal; // @synthesize likeTotal=_likeTotal;
@property(nonatomic) unsigned long long watchOrBroadcaster; // @synthesize watchOrBroadcaster=_watchOrBroadcaster;
@property(nonatomic) long long liveRoomType; // @synthesize liveRoomType=_liveRoomType;
- (void).cxx_destruct;

@end
