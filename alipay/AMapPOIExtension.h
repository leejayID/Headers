//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapPOIExtension : AMapSearchObject
{
    double _rating;
    double _cost;
    NSString *_openTime;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *openTime; // @synthesize openTime=_openTime;
@property(nonatomic) double cost; // @synthesize cost=_cost;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void).cxx_destruct;

@end
