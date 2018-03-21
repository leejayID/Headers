//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"

@class NSString;

@interface MBKBookingInfo : NSObject <MBKJsonModelObject>
{
    double _latitude;
    double _longitude;
    NSString *_bikeid;
    long long _biketype;
    long long _active;
    NSString *_duration;
}

@property(nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(nonatomic) long long active; // @synthesize active=_active;
@property(nonatomic) long long biketype; // @synthesize biketype=_biketype;
@property(copy, nonatomic) NSString *bikeid; // @synthesize bikeid=_bikeid;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
