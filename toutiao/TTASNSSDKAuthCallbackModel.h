//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAUserModel.h"

@class NSString;

@interface TTASNSSDKAuthCallbackModel : TTAUserModel
{
    NSString *_auth_token;
    NSString *_dialog_tips;
}

+ (id)tta_modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *dialog_tips; // @synthesize dialog_tips=_dialog_tips;
@property(copy, nonatomic) NSString *auth_token; // @synthesize auth_token=_auth_token;
- (void).cxx_destruct;

@end

