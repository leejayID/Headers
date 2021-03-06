//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTCTUInfo : NSObject
{
    _Bool _jailbreaked;
    float _screenWidth;
    float _screenHigh;
    NSString *_wifiMac;
    NSString *_wifiNodeName;
    NSString *_lacId;
    NSString *_cellId;
    NSString *_apDid;
    NSString *_tid;
    NSString *_clientPostion;
    NSString *_systemType;
    NSString *_userAgent;
    NSString *_imsi;
    NSString *_imei;
}

+ (id)deviceVersion;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) float screenHigh; // @synthesize screenHigh=_screenHigh;
@property(nonatomic) float screenWidth; // @synthesize screenWidth=_screenWidth;
@property(copy, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(copy, nonatomic) NSString *clientPostion; // @synthesize clientPostion=_clientPostion;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *apDid; // @synthesize apDid=_apDid;
@property(nonatomic, getter=isJailbreaked) _Bool jailbreaked; // @synthesize jailbreaked=_jailbreaked;
@property(copy, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(copy, nonatomic) NSString *lacId; // @synthesize lacId=_lacId;
@property(copy, nonatomic) NSString *wifiNodeName; // @synthesize wifiNodeName=_wifiNodeName;
@property(copy, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
- (void).cxx_destruct;
- (void)markAsDone;
- (id)dictionaryOfDeference;
- (id)copy;
- (void)setDTWirelessInfo:(id)arg1;
- (id)init;

@end

