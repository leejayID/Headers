//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber;

@interface TTGetCertificationDataUserAuditInfoResponseModel : TTResponseModel
{
    NSNumber *_is_auditing;
    NSNumber *_can_modify_auth_info;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSNumber *can_modify_auth_info; // @synthesize can_modify_auth_info=_can_modify_auth_info;
@property(retain, nonatomic) NSNumber *is_auditing; // @synthesize is_auditing=_is_auditing;
- (void).cxx_destruct;

@end

