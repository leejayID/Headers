//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol HybridMonitorProtcol;

@interface MtopWVStatisticsImpl : NSObject
{
    id <HybridMonitorProtcol> _hybridMonitor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HybridMonitorProtcol> hybridMonitor; // @synthesize hybridMonitor=_hybridMonitor;
- (void).cxx_destruct;
- (void)statistics:(id)arg1 apiVerion:(id)arg2 ret:(id)arg3 responseStatusCode:(id)arg4 retCode:(id)arg5;
- (void)registerHyBridMonitorTable:(Class)arg1;
- (id)init;

@end
