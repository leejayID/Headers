//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKApplyFreeDepositRequest : MBKMobikeRequest
{
    _Bool _needVerifyCode;
    NSString *_verifyCode;
    NSString *_phoneNo;
    NSString *_idCard;
    NSString *_paySource;
    NSString *_userName;
    NSString *_userId;
    double _latitude;
    double _longitude;
    NSString *_citycode;
}

@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool needVerifyCode; // @synthesize needVerifyCode=_needVerifyCode;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *paySource; // @synthesize paySource=_paySource;
@property(copy, nonatomic) NSString *idCard; // @synthesize idCard=_idCard;
@property(copy, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
- (void).cxx_destruct;
- (id)init;

@end

