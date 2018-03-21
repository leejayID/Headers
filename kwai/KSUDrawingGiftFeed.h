//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "KSLiveGiftFeed-Protocol.h"

@class KSUUserInfo, NSMutableArray, NSString;

@interface KSUDrawingGiftFeed : GPBMessage <KSLiveGiftFeed>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) unsigned int batchSize;
@property(readonly, nonatomic) unsigned int comboCount;
@property(copy, nonatomic) NSString *mergeKey;

// Remaining properties
@property(nonatomic) unsigned long long clientTimestamp; // @dynamic clientTimestamp;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long expireDuration; // @dynamic expireDuration;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int liveAssistantType; // @dynamic liveAssistantType;
@property(retain, nonatomic) NSMutableArray *pointsArray; // @dynamic pointsArray;
@property(readonly, nonatomic) unsigned long long pointsArray_Count; // @dynamic pointsArray_Count;
@property(nonatomic) unsigned int rank; // @dynamic rank;
@property(nonatomic) unsigned long long slotDisplayDuration; // @dynamic slotDisplayDuration;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long time; // @dynamic time;
@property(retain, nonatomic) KSUUserInfo *user; // @dynamic user;
@property(nonatomic) unsigned int width; // @dynamic width;

@end
