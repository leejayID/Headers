//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AwarenessTrigger.h"

@class AliFenceManager, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AwarenessNearRegion : AwarenessTrigger
{
    NSMutableDictionary *nearRegionDict;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_semaphore> *_lock2;
    _Bool _isListening;
    NSMutableArray *_enterArray;
    NSObject<OS_dispatch_queue> *_regionQueue;
    NSMutableDictionary *_models;
    AliFenceManager *_alifence;
}

+ (id)shareInstance;
@property(retain, nonatomic) AliFenceManager *alifence; // @synthesize alifence=_alifence;
@property(retain, nonatomic) NSMutableDictionary *models; // @synthesize models=_models;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *regionQueue; // @synthesize regionQueue=_regionQueue;
@property(retain, nonatomic) NSMutableArray *enterArray; // @synthesize enterArray=_enterArray;
- (void)setListening:(_Bool)arg1;
- (_Bool)listening;
- (void).cxx_destruct;
- (void)stopMonitors;
- (_Bool)startMonitors;
- (void)detectoerRegion:(id)arg1;
- (void)setTriggerParam:(id)arg1;
- (id)init;

@end
