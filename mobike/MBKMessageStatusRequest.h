//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKMessageStatusRequest : MBKMobikeRequest
{
    NSString *_types;
    NSString *_userId;
    NSString *_cityCode;
    NSString *_lang;
    NSString *_updateTime;
}

@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (void)startWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

