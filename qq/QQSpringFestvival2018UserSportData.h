//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface QQSpringFestvival2018UserSportData : NSObject
{
    unsigned long long _sportDay;
    NSDate *_maxStepDate;
    unsigned long long _maxStepOneData;
    unsigned long long _avgStep;
    unsigned long long _rankInFriends;
}

+ (id)UserSportDataWithDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long rankInFriends; // @synthesize rankInFriends=_rankInFriends;
@property(readonly, nonatomic) unsigned long long avgStep; // @synthesize avgStep=_avgStep;
@property(readonly, nonatomic) unsigned long long maxStepOneData; // @synthesize maxStepOneData=_maxStepOneData;
@property(readonly, nonatomic) NSDate *maxStepDate; // @synthesize maxStepDate=_maxStepDate;
@property(readonly, nonatomic) unsigned long long sportDay; // @synthesize sportDay=_sportDay;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
