//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface ReadInJoyHistoryOffsetManager : NSObject
{
    struct CGPoint _mainFeedsOffset;
    struct CGPoint _videoFeedsOffset;
    struct CGPoint _diandianFeedsOffset;
    unsigned long long _historyTabType;
    NSArray *_mainFeedsDataSource;
    NSArray *_videoFeedsDataSource;
    NSArray *_subcribeDataSource;
}

+ (id)instance;
@property(copy, nonatomic) NSArray *subcribeDataSource; // @synthesize subcribeDataSource=_subcribeDataSource;
@property(copy, nonatomic) NSArray *videoFeedsDataSource; // @synthesize videoFeedsDataSource=_videoFeedsDataSource;
@property(copy, nonatomic) NSArray *mainFeedsDataSource; // @synthesize mainFeedsDataSource=_mainFeedsDataSource;
- (void).cxx_destruct;
- (void)releaseDiandainDatasource;
- (void)releaseVideoDatasource;
- (void)releaseMainDatasource;
- (void)releaseAllDatasource;
- (void)cancelReleaseDataSource:(unsigned long long)arg1;
- (void)delayReleaseDataSource:(unsigned long long)arg1;
- (void)cleanAllOffsetAndHistoryTab;
- (unsigned long long)getHistoryTabType;
- (void)cleanHistoryTabType;
- (void)updateHistoryTabtype:(unsigned long long)arg1;
- (struct CGPoint)getOffsetWithType:(unsigned long long)arg1;
- (void)cleanOffsetWithType:(unsigned long long)arg1;
- (void)updateOffset:(struct CGPoint)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

