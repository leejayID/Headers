//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APDynamicDeploymentConfig : NSObject
{
    NSString *_productId;
    NSString *_productVersion;
    NSString *_releaseVersion;
    NSString *_utdid;
    NSString *_clientId;
    NSString *_phoneBrand;
    NSString *_phoneModel;
    NSString *_osVersion;
    NSString *_userId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(retain, nonatomic) NSString *phoneBrand; // @synthesize phoneBrand=_phoneBrand;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)stringValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;

@end

