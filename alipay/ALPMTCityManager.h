//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALPMTDataEngine, NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ALPMTCityManager : NSObject
{
    NSString *_cacheFile;
    ALPMTDataEngine *_dataEngine;
    NSObject<OS_dispatch_semaphore> *_ioSemaphore;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSArray *_cityList;
    NSArray *_hotCityList;
    NSArray *_historyCityList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *historyCityList; // @synthesize historyCityList=_historyCityList;
- (void).cxx_destruct;
- (void)addHistoryCity:(id)arg1 cityCode:(id)arg2;
@property(retain, nonatomic) NSArray *hotCityList;
- (void)clean;
- (void)loadCityList;
- (id)cityListWithoutRequest;
@property(readonly, nonatomic) NSArray *cityList;
- (_Bool)cacheCityList:(id)arg1;
- (id)init;

@end
