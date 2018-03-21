//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeProcessor-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBTradeProcessorWorker;

@interface TBBasicRenderProcessor : NSObject <TBTradeProcessor>
{
    NSMutableArray<TBTradeProcessorWorker> *_workers;
}

@property(retain, nonatomic) NSMutableArray<TBTradeProcessorWorker> *workers; // @synthesize workers=_workers;
- (void).cxx_destruct;
- (void)prepareForProcess:(id)arg1;
- (id)name;
- (void)afterReturning:(id)arg1;
- (void)startProcess:(id)arg1;
- (id)run:(id)arg1;
- (void)addWorker:(id)arg1;
- (void)registerWorkers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
