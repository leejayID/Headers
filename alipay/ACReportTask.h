//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcAsyncCaller;
@protocol ACReportTaskDelegate;

@interface ACReportTask : NSObject
{
    id <ACReportTaskDelegate> _reportDelegate;
    DTRpcAsyncCaller *_reportAsyncCaller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *reportAsyncCaller; // @synthesize reportAsyncCaller=_reportAsyncCaller;
@property(nonatomic) __weak id <ACReportTaskDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void).cxx_destruct;
- (void)updateAppRank:(id)arg1 stageCode:(id)arg2 reportType:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)userRanksWithStageCodes:(id)arg1;
- (void)reportStages:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end
