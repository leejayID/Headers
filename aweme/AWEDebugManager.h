//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AWEDebugManager : NSObject
{
    _Bool _webIntercept;
    _Bool _crashOnLaunch;
    _Bool _musicListShowID;
    _Bool _disableSSLPinning;
    _Bool _isCommentBeta;
    _Bool _isFollowBeta;
    _Bool _isLongVideoEnaled;
    _Bool _localABSettingEnabled;
    _Bool _isTrackDebugerEnabled;
    _Bool _isDynamicRateEnabled;
    _Bool _useChromeNetwork;
    _Bool _enableHashtag;
    _Bool _enableVirtualPhoneNumber;
    _Bool _fantasyTestEnv;
    NSString *_fixedVideoQuality;
    NSArray *_fixedVideoQualityList;
    NSString *_fakeCountryCode;
}

+ (id)sharedInstance;
@property(nonatomic) NSString *fakeCountryCode; // @synthesize fakeCountryCode=_fakeCountryCode;
@property(nonatomic) _Bool fantasyTestEnv; // @synthesize fantasyTestEnv=_fantasyTestEnv;
@property(nonatomic) _Bool enableVirtualPhoneNumber; // @synthesize enableVirtualPhoneNumber=_enableVirtualPhoneNumber;
@property(nonatomic) _Bool enableHashtag; // @synthesize enableHashtag=_enableHashtag;
@property(nonatomic) _Bool useChromeNetwork; // @synthesize useChromeNetwork=_useChromeNetwork;
@property(nonatomic) _Bool isDynamicRateEnabled; // @synthesize isDynamicRateEnabled=_isDynamicRateEnabled;
@property(nonatomic) _Bool isTrackDebugerEnabled; // @synthesize isTrackDebugerEnabled=_isTrackDebugerEnabled;
@property(nonatomic) _Bool localABSettingEnabled; // @synthesize localABSettingEnabled=_localABSettingEnabled;
@property(nonatomic) _Bool isLongVideoEnaled; // @synthesize isLongVideoEnaled=_isLongVideoEnaled;
@property(retain, nonatomic) NSArray *fixedVideoQualityList; // @synthesize fixedVideoQualityList=_fixedVideoQualityList;
@property(nonatomic) NSString *fixedVideoQuality; // @synthesize fixedVideoQuality=_fixedVideoQuality;
@property(nonatomic) _Bool isFollowBeta; // @synthesize isFollowBeta=_isFollowBeta;
@property(nonatomic) _Bool isCommentBeta; // @synthesize isCommentBeta=_isCommentBeta;
@property(nonatomic) _Bool disableSSLPinning; // @synthesize disableSSLPinning=_disableSSLPinning;
@property(nonatomic) _Bool musicListShowID; // @synthesize musicListShowID=_musicListShowID;
@property(nonatomic) _Bool crashOnLaunch; // @synthesize crashOnLaunch=_crashOnLaunch;
@property(nonatomic) _Bool webIntercept; // @synthesize webIntercept=_webIntercept;
- (void).cxx_destruct;
- (id)init;

@end

