//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TribeList : NSObject
{
    short _atFlag;
    short _enableAtAll;
    NSString *_avatar;
    long long _recvFlag;
    NSString *_tribeId;
    long long _tribeType;
    NSString *_tribeName;
    NSString *_tribeSign;
    NSString *_bulletin;
    NSString *_sortKey;
    long long _checkMode;
    long long _memberCount;
    long long _myRoleFlag;
    long long _memberDisplayNameMode;
    NSString *_masterId;
    NSString *_extendProperties;
}

@property(copy, nonatomic) NSString *extendProperties; // @synthesize extendProperties=_extendProperties;
@property(copy, nonatomic) NSString *masterId; // @synthesize masterId=_masterId;
@property(nonatomic) short enableAtAll; // @synthesize enableAtAll=_enableAtAll;
@property(nonatomic) long long memberDisplayNameMode; // @synthesize memberDisplayNameMode=_memberDisplayNameMode;
@property(nonatomic) long long myRoleFlag; // @synthesize myRoleFlag=_myRoleFlag;
@property(nonatomic) short atFlag; // @synthesize atFlag=_atFlag;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) long long checkMode; // @synthesize checkMode=_checkMode;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(copy, nonatomic) NSString *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *tribeSign; // @synthesize tribeSign=_tribeSign;
@property(copy, nonatomic) NSString *tribeName; // @synthesize tribeName=_tribeName;
@property(nonatomic) long long tribeType; // @synthesize tribeType=_tribeType;
@property(copy, nonatomic) NSString *tribeId; // @synthesize tribeId=_tribeId;
@property(nonatomic) long long recvFlag; // @synthesize recvFlag=_recvFlag;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (id)init;

@end

