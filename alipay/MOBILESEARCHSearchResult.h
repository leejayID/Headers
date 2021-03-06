//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILESEARCHBaseResult.h"

@class NSArray, NSString;

@interface MOBILESEARCHSearchResult : MOBILESEARCHBaseResult
{
    NSString *_searchId;
    NSString *_sessionId;
    NSString *_bucketId;
    NSString *_sort;
    NSArray *_groupRecords;
    NSArray *_menuGroups;
    NSString *_searchParams;
    NSString *_tab;
    NSString *_query;
    NSString *_context;
    NSString *_dtLogMonitor;
    NSString *_requestId;
}

+ (Class)menuGroupsElementClass;
+ (Class)groupRecordsElementClass;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NSString *searchParams; // @synthesize searchParams=_searchParams;
@property(retain, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(retain, nonatomic) NSArray *groupRecords; // @synthesize groupRecords=_groupRecords;
@property(retain, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
- (void).cxx_destruct;

@end

