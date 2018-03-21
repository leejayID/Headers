//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;
@protocol KSEExportTask;

@protocol KSEExportTaskDelegate <NSObject>
- (void)exportTaskDidCancelled:(id <KSEExportTask>)arg1;
- (void)exportTask:(id <KSEExportTask>)arg1 updateProgress:(double)arg2;
- (void)exportTask:(id <KSEExportTask>)arg1 didFailWithError:(NSError *)arg2;
- (void)exportTaskDidFinish:(id <KSEExportTask>)arg1 assetRenderRanges:(NSArray *)arg2;
@end
