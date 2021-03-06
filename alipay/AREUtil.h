//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AREUtil : NSObject
{
}

+ (void)logPageEndWithSpmId:(id)arg1 index:(id)arg2;
+ (void)logPageStartWithSpmId:(id)arg1 index:(id)arg2;
+ (void)uploadImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)exposureLogReportWithSeed:(id)arg1 ucId:(id)arg2 extParamAry:(id)arg3;
+ (void)logReportWithActionId:(id)arg1 ext:(id)arg2 seedId:(id)arg3;
+ (void)clickLogReportWithSpmId:(id)arg1;
+ (float)screenScale;
+ (void)writeFirstCreateEnvelope;
+ (_Bool)isFirstCreateEnvelope;
+ (id)falconAnimatePathFor:(id)arg1;
+ (id)summaryString:(id)arg1 maxLength:(long long)arg2;
+ (_Bool)isShareEnabled;
+ (_Bool)isColaShareEnable;
+ (_Bool)isCreateAREnvelopeShareEnable;
+ (_Bool)isOpenAREnvelopeShareEnable;
+ (void)openAppSettingURL;
+ (void)startLocationWithCompletion:(CDUnknownBlockType)arg1;
+ (id)bufferImageWithBlur:(id)arg1 withSize:(struct CGSize)arg2;
+ (long long)blurRadiusConfigValue;
+ (id)convertImage:(id)arg1 withTintColor:(id)arg2;
+ (struct MACoordinateBounds)coordinateBoundsForFakeMapWithUserLocation:(id)arg1 region:(struct MACoordinateRegion)arg2;
+ (_Bool)isLocation:(struct CLLocationCoordinate2D)arg1 inRegion:(struct MACoordinateRegion)arg2;
+ (id)rightTopLocationForUserLocation:(id)arg1 region:(struct MACoordinateRegion)arg2;
+ (id)leftBottomLocationForUserLocation:(id)arg1 region:(struct MACoordinateRegion)arg2;
+ (struct CLLocationCoordinate2D)rightTopCoordinateForUserLocation:(id)arg1 radius:(double)arg2;
+ (struct CLLocationCoordinate2D)leftBottomCoordinateForUserLocation:(id)arg1 radius:(double)arg2;
+ (double)radiusForUserLocation:(id)arg1 region:(struct MACoordinateRegion)arg2;
+ (struct CLLocationCoordinate2D)rightTopCoordinateForRegion:(struct MACoordinateRegion)arg1;
+ (struct CLLocationCoordinate2D)leftBottomCoordinateForRegion:(struct MACoordinateRegion)arg1;
+ (id)locationForCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)lastLocation;
+ (void)setLastLocation:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isCounterClockwiseForPointA:(struct CGPoint)arg1 centerPoint:(struct CGPoint)arg2 pointC:(struct CGPoint)arg3;
+ (double)degressAForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 pointC:(struct CGPoint)arg3;
+ (double)distanceFromPointA:(struct CGPoint)arg1 toPointB:(struct CGPoint)arg2;

@end

