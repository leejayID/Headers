//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, distinguishprodResScanQueryResponsePB;

@interface distinguishprodRouteResResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) PBMapStringString *bizVarMap; // @dynamic bizVarMap;
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(readonly) _Bool hasAppid; // @dynamic hasAppid;
@property(readonly) _Bool hasBizVarMap; // @dynamic hasBizVarMap;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasOpenAppId; // @dynamic hasOpenAppId;
@property(readonly) _Bool hasRedPacketRes; // @dynamic hasRedPacketRes;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *openAppId; // @dynamic openAppId;
@property(retain, nonatomic) NSArray *recObjs; // @dynamic recObjs;
@property(retain, nonatomic) distinguishprodResScanQueryResponsePB *redPacketRes; // @dynamic redPacketRes;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(retain, nonatomic) NSArray *routeResArray; // @dynamic routeResArray;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;

@end

