//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBSearchUtility : NSObject
{
}

+ (int)getLayoutStyleInteger:(long long)arg1;
+ (_Bool)isIphoneX;
+ (void)cacheImage;
+ (_Bool)disableConfigSematic;
+ (id)getTItemTypeDict:(id)arg1;
+ (_Bool)srp_checkSelectedWithParamsArray:(id)arg1 andSearchService:(id)arg2;
+ (_Bool)srp_checkSelectedWithParamsModel:(id)arg1 andSearchService:(id)arg2;
+ (_Bool)srp_checkSelectedWithParamsModelArray:(id)arg1 andSearchService:(id)arg2;
+ (id)toParamsDictFromModelArray:(id)arg1;
+ (id)toParamsModelArray:(id)arg1;
+ (_Bool)checkSelectedWithParamsArray:(id)arg1 andSearchService:(id)arg2;
+ (_Bool)checkSelectedWithParamsModel:(id)arg1 andSearchService:(id)arg2;
+ (_Bool)checkSelectedWithParamsModelArray:(id)arg1 andSearchService:(id)arg2;
+ (_Bool)comparedWithOneParams:(id)arg1 andTwoParams:(id)arg2;
+ (id)processedGlobalParam:(id)arg1;
+ (_Bool)checkGlobalParam:(id)arg1;
+ (id)getEditionCode;
+ (id)buildQueryString:(id)arg1 enableEncoding:(_Bool)arg2;
+ (id)parseStr:(id)arg1;
+ (id)needle:(id)arg1 haystack:(id)arg2;
+ (id)getEveryVersion:(id)arg1 versionAllowCount:(long long)arg2;
+ (long long)compareVersionA:(id)arg1 versionB:(id)arg2 versionAllowCount:(long long)arg3;
+ (void)dataBoardSetSpmView:(id)arg1 Spm:(id)arg2;
+ (id)getSVersion;
+ (_Bool)isIOS7;
+ (void)setImageNormalIconWithURL:(id)arg1 imageView:(id)arg2;
+ (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 cutType:(long long)arg3 imageView:(id)arg4;
+ (_Bool)isBetaVersion;
+ (id)getAppVersion;
+ (void)configureTTTAttibutedLabel:(id)arg1 withText:(id)arg2 withColor:(id)arg3 highlightText:(id)arg4;
+ (double)ceilPixelValue:(double)arg1;
+ (double)roundPixelValue:(double)arg1;
+ (id)imageWithColor:(id)arg1;
+ (void)doPoplayerWithURL:(id)arg1 isSIUrl:(_Bool)arg2 viewController:(id)arg3;
+ (void)sendClickTrace:(id)arg1 withParams:(id)arg2;
+ (void)searchToDetail:(id)arg1 andIndex:(long long)arg2 andController:(id)arg3 andParams:(id)arg4;
+ (void)startChiTu;
+ (void)clearPerformanceUserTrack;
+ (void)endPerformanceUserTrack:(id)arg1;
+ (void)startPerformanceUserTrack;
+ (void)addPerformancePhaseEnd:(id)arg1;
+ (void)addPerformancePhaseBegin:(id)arg1 userInfo:(id)arg2;
+ (void)addPerformancePhaseBegin:(id)arg1;
+ (id)getDeviceInfo;
+ (id)getNetWorkStatus;
+ (id)getDeviceModel;
+ (id)getInfoStatus;
+ (id)getCachedLocationData;
+ (_Bool)isIpString:(id)arg1;
+ (id)getDateStringByTimeInterval:(id)arg1;
+ (id)getDateString;
+ (id)convertDateString:(id)arg1;
+ (id)gradeNameWithSection:(long long)arg1 Offset:(long long)arg2;
+ (id)gradeUrlWithSection:(long long)arg1 Offset:(long long)arg2;
+ (id)processLoc:(id)arg1;
+ (id)processSold:(id)arg1;
+ (id)processApproximatePrice:(id)arg1;
+ (id)processPrice:(id)arg1;
+ (id)rtrim:(id)arg1 By:(id)arg2;

@end

