//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTABaseReqModel.h"

@class NSString;

@interface TTARegisterReqModel : TTABaseReqModel
{
    NSString *_phoneString;
    NSString *_passwordString;
    NSString *_captchaString;
    NSString *_SMSCodeString;
    long long _SMSCodeType;
}

@property(nonatomic) long long SMSCodeType; // @synthesize SMSCodeType=_SMSCodeType;
@property(copy, nonatomic) NSString *SMSCodeString; // @synthesize SMSCodeString=_SMSCodeString;
@property(copy, nonatomic) NSString *captchaString; // @synthesize captchaString=_captchaString;
@property(copy, nonatomic) NSString *passwordString; // @synthesize passwordString=_passwordString;
@property(copy, nonatomic) NSString *phoneString; // @synthesize phoneString=_phoneString;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

