//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSUHTTPTaskManagerDelegate-Protocol.h"

@class CLLocation, CLPlacemark, KSPhotoMovieEncodeConfig, KSShareBaseURLs, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSTimer;

@interface KSAppEnvironment : NSObject <KSUHTTPTaskManagerDelegate>
{
    _Bool _isCheckintInfo;
    int _currentPlayingStatus;
    NSString *_channel;
    NSString *_locationString;
    CLLocation *_location;
    long long _launchCount;
    NSData *_pushToken;
    NSString *_giuid;
    NSString *_open_type;
    KSShareBaseURLs *_shareBaseURLs;
    NSString *_defaultWeixinShareURL;
    NSString *_defaultQZoneShareURL;
    NSString *_defaultCopyShareURL;
    NSDate *_lastActiveDate;
    NSNumber *_sessionTimeoutDuration;
    NSString *_qqFriendsUrl;
    NSArray *_friendSources;
    KSPhotoMovieEncodeConfig *_photoMovieEncodeConfig;
    double _videoDownloadSpeed;
    NSDictionary *_urlParams;
    NSString *_deviceMode;
    NSString *_connectInfo;
    CLPlacemark *_placemark;
    NSTimer *_otherAppCheckTimer;
    NSTimer *_deviceCheckTimer;
}

+ (id)environment;
@property(nonatomic) _Bool isCheckintInfo; // @synthesize isCheckintInfo=_isCheckintInfo;
@property(retain, nonatomic) NSTimer *deviceCheckTimer; // @synthesize deviceCheckTimer=_deviceCheckTimer;
@property(retain, nonatomic) NSTimer *otherAppCheckTimer; // @synthesize otherAppCheckTimer=_otherAppCheckTimer;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) NSString *connectInfo; // @synthesize connectInfo=_connectInfo;
@property(retain, nonatomic) NSString *deviceMode; // @synthesize deviceMode=_deviceMode;
@property(copy, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
@property(nonatomic) double videoDownloadSpeed; // @synthesize videoDownloadSpeed=_videoDownloadSpeed;
@property(retain, nonatomic) KSPhotoMovieEncodeConfig *photoMovieEncodeConfig; // @synthesize photoMovieEncodeConfig=_photoMovieEncodeConfig;
@property(retain, nonatomic) NSArray *friendSources; // @synthesize friendSources=_friendSources;
@property(retain, nonatomic) NSString *qqFriendsUrl; // @synthesize qqFriendsUrl=_qqFriendsUrl;
@property(retain, nonatomic) NSNumber *sessionTimeoutDuration; // @synthesize sessionTimeoutDuration=_sessionTimeoutDuration;
@property(retain, nonatomic) NSDate *lastActiveDate; // @synthesize lastActiveDate=_lastActiveDate;
@property(retain, nonatomic) NSString *defaultCopyShareURL; // @synthesize defaultCopyShareURL=_defaultCopyShareURL;
@property(retain, nonatomic) NSString *defaultQZoneShareURL; // @synthesize defaultQZoneShareURL=_defaultQZoneShareURL;
@property(retain, nonatomic) NSString *defaultWeixinShareURL; // @synthesize defaultWeixinShareURL=_defaultWeixinShareURL;
@property(retain, nonatomic) KSShareBaseURLs *shareBaseURLs; // @synthesize shareBaseURLs=_shareBaseURLs;
@property(nonatomic) int currentPlayingStatus; // @synthesize currentPlayingStatus=_currentPlayingStatus;
@property(retain, nonatomic) NSString *open_type; // @synthesize open_type=_open_type;
@property(retain, nonatomic) NSString *giuid; // @synthesize giuid=_giuid;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) long long launchCount; // @synthesize launchCount=_launchCount;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(readonly, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)didReceiveUserDidLogin:(id)arg1;
- (void)_bindPushToken:(id)arg1;
- (void)bindPushToken:(id)arg1;
- (id)cookiesCommonParams;
- (void)_logRemoteNotification:(id)arg1;
- (void)logRemoteNotification:(id)arg1;
- (void)otherAppCheckOnFinish:(CDUnknownBlockType)arg1;
- (id)additionCommonParams;
- (void)checkAndSendStatInfo;
@property(retain, nonatomic) NSNumber *videoMillisShort;
@property(retain, nonatomic) NSNumber *bitRate;
@property(retain, nonatomic) NSNumber *midBitrateDuration;
@property(retain, nonatomic) NSNumber *minBitRate;
@property(retain, nonatomic) NSNumber *maxBitRate;
@property(retain, nonatomic) NSNumber *canLog;
@property(retain, nonatomic) NSNumber *iapTimeoutThreshold;
@property(retain, nonatomic) NSNumber *bufferTimeMax;
@property(retain, nonatomic) NSNumber *supportForeignPay;
@property(retain, nonatomic) NSArray *qqPermissions;
- (void)deviceCheck;
- (void)otherAppCheck;
- (void)didReceiveApplicationDidEnterBackground:(id)arg1;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (void)didReceiveApplicationWillEnterForeground:(id)arg1;
- (void)didReceiveApplicationDidFinishLaunching:(id)arg1;
- (void)refreshCommonInfo;
- (void)reverseGeocodeLocation:(id)arg1;
- (void)removeCommonParam:(id)arg1;
- (void)addCommonURLParams:(id)arg1;
- (id)getURLParams;
- (void)addCommonURLParams_:(id)arg1 bodyParams:(id)arg2 hasLocation:(_Bool)arg3;
- (void)addCommonURLParams_:(id)arg1 bodyParams:(id)arg2;
- (id)addCommonURLParams:(id)arg1 bodyParams:(id)arg2 hasLocation:(_Bool)arg3;
- (id)addCommonURLParams:(id)arg1 bodyParams:(id)arg2;
- (id)init;
- (void)dealloc;
- (_Bool)taskManager:(id)arg1 shouldHandleError:(id)arg2 originCompletionHandler:(CDUnknownBlockType)arg3;
- (void)taskManager:(id)arg1 willSendRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
