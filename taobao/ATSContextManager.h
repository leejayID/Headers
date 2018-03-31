//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ATSContextManager : NSObject
{
    NSMutableArray *_contextArray;
    unsigned long long _sourceType;
    NSString *_clientName;
    long long _contextIndex;
}

+ (void)setProcessorDelegate:(id)arg1;
+ (id)control;
+ (id)pageMeta;
+ (_Bool)isPreLoadOpen;
+ (long long)totalCount;
+ (_Bool)isEndPage;
+ (id)landingGlobal;
+ (id)outputs;
+ (void)checkAll:(_Bool)arg1 withClient:(id)arg2;
+ (void)checkAll:(_Bool)arg1;
+ (_Bool)isCheckAll;
+ (void)checkShareItem:(id)arg1 withChecked:(_Bool)arg2;
+ (long long)maxShareCount;
+ (id)allItems;
+ (id)footer;
+ (id)createdShare;
+ (id)validItems;
+ (id)invalidItems;
+ (void)setSearchKeyword:(id)arg1 sourceType:(unsigned long long)arg2;
+ (id)searchKeyword:(unsigned long long)arg1;
+ (id)currentSourceSelectedItems;
+ (id)distinctSelectedItems:(unsigned long long)arg1;
+ (id)selectedItems:(unsigned long long)arg1;
+ (id)distinctSelectedItems;
+ (id)allSourceSelectedItems;
+ (_Bool)hasCheckedComponent:(id)arg1;
+ (long long)currentPage;
+ (_Bool)isGzip;
+ (void)free;
+ (void)parseCreateShareResponse:(id)arg1 withClient:(id)arg2;
+ (void)parseLandingResponse:(id)arg1 withClient:(id)arg2;
+ (void)parseResponse:(id)arg1 withClient:(id)arg2 isFirst:(_Bool)arg3;
+ (id)generateSelectedItemsParamData:(id)arg1;
+ (CDUnknownBlockType)succssBlockWithAction:(unsigned long long)arg1 withClient:(id)arg2;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (CDUnknownBlockType)failedBlockWithAction:(unsigned long long)arg1 withClient:(id)arg2;
+ (void)registerFailedBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (unsigned long long)currentSourceType;
+ (void)switchSourceType:(unsigned long long)arg1;
+ (id)currentClient;
+ (void)switchClient:(id)arg1;
+ (void)pageAppear:(long long)arg1;
+ (long long)pushPage;
+ (void)popPage:(long long)arg1;
+ (id)contextWithName:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long contextIndex; // @synthesize contextIndex=_contextIndex;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSMutableArray *contextArray; // @synthesize contextArray=_contextArray;
- (void).cxx_destruct;
- (id)init;

@end
