//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTConfigModel;
@protocol Optional;

@interface TTAppLogConfigResponseModel : JSONModel
{
    NSString<Optional> *_magicTag;
    NSString<Optional> *_installID;
    NSString<Optional> *_deviceID;
    NSNumber<Optional> *_serverTime;
    TTConfigModel<Optional> *_config;
}

+ (id)keyMapper;
@property(retain, nonatomic) TTConfigModel<Optional> *config; // @synthesize config=_config;
@property(retain, nonatomic) NSNumber<Optional> *serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSString<Optional> *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString<Optional> *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString<Optional> *magicTag; // @synthesize magicTag=_magicTag;
- (void).cxx_destruct;

@end
