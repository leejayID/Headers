//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APAUTHToString.h"

@class APAUTHTid, NSString;

@interface APAUTHVerifyAuthCodeReq : APAUTHToString
{
    NSString *_phone;
    APAUTHTid *_tid;
    NSString *_loginId;
    NSString *_code;
    NSString *_businessMobileValidateStatus;
}

@property(retain, nonatomic) NSString *businessMobileValidateStatus; // @synthesize businessMobileValidateStatus=_businessMobileValidateStatus;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) APAUTHTid *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;

@end

