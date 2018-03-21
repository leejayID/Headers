//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSUHangup, KSUKickOff, KSUMakeCall, KSUStatusChanged, KSUUpdateParticipantList, NSString;

@interface KSUSignal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int biz; // @dynamic biz;
@property(copy, nonatomic) NSString *callId; // @dynamic callId;
@property(copy, nonatomic) NSString *calleeId; // @dynamic calleeId;
@property(copy, nonatomic) NSString *callerId; // @dynamic callerId;
@property(nonatomic) int from; // @dynamic from;
@property(retain, nonatomic) KSUHangup *hangup; // @dynamic hangup;
@property(nonatomic) _Bool hasHangup; // @dynamic hasHangup;
@property(nonatomic) _Bool hasKickOff; // @dynamic hasKickOff;
@property(nonatomic) _Bool hasMakeCall; // @dynamic hasMakeCall;
@property(nonatomic) _Bool hasParticipants; // @dynamic hasParticipants;
@property(nonatomic) _Bool hasStatusChanged; // @dynamic hasStatusChanged;
@property(retain, nonatomic) KSUKickOff *kickOff; // @dynamic kickOff;
@property(retain, nonatomic) KSUMakeCall *makeCall; // @dynamic makeCall;
@property(retain, nonatomic) KSUUpdateParticipantList *participants; // @dynamic participants;
@property(nonatomic) int signalType; // @dynamic signalType;
@property(retain, nonatomic) KSUStatusChanged *statusChanged; // @dynamic statusChanged;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) int to; // @dynamic to;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
