//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface mobilelbsWifiInfoPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool autoJoined; // @dynamic autoJoined;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(nonatomic) _Bool connected; // @dynamic connected;
@property(readonly) _Bool hasAutoJoined; // @dynamic hasAutoJoined;
@property(readonly) _Bool hasBssid; // @dynamic hasBssid;
@property(readonly) _Bool hasConnected; // @dynamic hasConnected;
@property(readonly) _Bool hasPwd; // @dynamic hasPwd;
@property(readonly) _Bool hasSecure; // @dynamic hasSecure;
@property(readonly) _Bool hasSignalStrength; // @dynamic hasSignalStrength;
@property(readonly) _Bool hasSsid; // @dynamic hasSsid;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(nonatomic) _Bool secure; // @dynamic secure;
@property(nonatomic) double signalStrength; // @dynamic signalStrength;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;

@end

