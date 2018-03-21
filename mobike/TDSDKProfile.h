//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDBaseModel.h"

@class NSString;

@interface TDSDKProfile : TDBaseModel
{
    int _version;
    int _minorVersion;
    int _build;
    NSString *_partner;
    NSString *_platform;
    NSString *_framework;
}

@property(retain, nonatomic) NSString *framework; // @synthesize framework=_framework;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(nonatomic) int build; // @synthesize build=_build;
@property(nonatomic) int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end
