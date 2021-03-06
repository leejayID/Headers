//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKTaxiCreateOrderRequest : MBKMobikeRequest
{
    long long _bizType;
    double _startLat;
    double _startLng;
    double _endLat;
    double _endLng;
    long long _bookTime;
    NSString *_originName;
    NSString *_destinationName;
    NSString *_comment;
    long long _payForPickUp;
    long long _thanksFee;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long thanksFee; // @synthesize thanksFee=_thanksFee;
@property(nonatomic) long long payForPickUp; // @synthesize payForPickUp=_payForPickUp;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(copy, nonatomic) NSString *originName; // @synthesize originName=_originName;
@property(nonatomic) long long bookTime; // @synthesize bookTime=_bookTime;
@property(nonatomic) double endLng; // @synthesize endLng=_endLng;
@property(nonatomic) double endLat; // @synthesize endLat=_endLat;
@property(nonatomic) double startLng; // @synthesize startLng=_startLng;
@property(nonatomic) double startLat; // @synthesize startLat=_startLat;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)init;

@end

