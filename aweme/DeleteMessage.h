//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DeleteMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasMessageId; // @dynamic hasMessageId;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) long long messageId; // @dynamic messageId;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) long long userId; // @dynamic userId;

@end
