//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface CA_Network : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *carrierCountrycode; // @dynamic carrierCountrycode;
@property(copy, nonatomic) NSString *carrierMobileCountryCode; // @dynamic carrierMobileCountryCode;
@property(copy, nonatomic) NSString *carrierMobileNetworkCode; // @dynamic carrierMobileNetworkCode;
@property(copy, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(copy, nonatomic) NSString *ip; // @dynamic ip;
@property(copy, nonatomic) NSString *netProvider; // @dynamic netProvider;
@property(copy, nonatomic) NSString *networkName; // @dynamic networkName;
@property(nonatomic) int networkType; // @dynamic networkType;

@end

