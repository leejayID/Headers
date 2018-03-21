//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, CLPlacemark, NSMutableArray, NSString, NSTimer;

@interface KSLocationCenter : NSObject <CLLocationManagerDelegate>
{
    double _locationAccuracy;
    double _timeout;
    double _timeAccuracyInterval;
    CLLocation *_location;
    CLPlacemark *_placemark;
    CLLocationManager *_locationManager;
    NSMutableArray *_completions;
    NSTimer *_timer;
    CLLocation *_lastAvailableLocation;
}

+ (id)defaultCenter;
@property(retain, nonatomic) CLLocation *lastAvailableLocation; // @synthesize lastAvailableLocation=_lastAvailableLocation;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) double timeAccuracyInterval; // @synthesize timeAccuracyInterval=_timeAccuracyInterval;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)callCompletionsWithError:(id)arg1;
- (void)locatingTimeout;
- (void)updateLocation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool locating;
- (void)p_reverseGeocodeLocation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
