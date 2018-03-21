//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APGUtils : NSObject
{
}

+ (id)storeHistoryTarget;
+ (id)getLaunchOptions;
+ (id)launchOptions_delegate;
+ (id)launchOptions_groups;
+ (id)launchOptions_hasMore;
+ (id)launchOptions_target;
+ (_Bool)isUnifiedSearch;
+ (_Bool)launchOptions_showVoiceSearch;
+ (id)launchOptions_serviceType;
+ (_Bool)isNotSupportHanziInputMode;
+ (_Bool)isShouldDelaySearch:(id)arg1;
+ (long long)timeForDelaySearch;
+ (long long)integerValueFromConfig:(id)arg1 withDefault:(long long)arg2;
+ (id)categoryActionSourceBycategoryId:(id)arg1;
+ (id)categoryNameBycategoryId:(id)arg1;
+ (id)LocalizedStringForKey:(id)arg1 withDefalutValue:(id)arg2;
+ (id)currentUserId;
+ (void)specialProcess:(id)arg1 group:(id)arg2;
+ (void)checkAppUpgrade:(CDUnknownBlockType)arg1;
+ (id)toHashString:(id)arg1;
+ (id)relativePath:(id)arg1;
+ (id)dbNameInPath:(id)arg1;
+ (id)indexPath;
+ (id)getLocalUserInfos:(id)arg1;
+ (id)addUserInfos:(id)arg1 contactInfos:(id)arg2;
+ (id)checkAppInfoByInverseResult:(id)arg1 remoteGroup:(id)arg2;
+ (id)inverseRemoteGroups:(id)arg1;
+ (id)cellDataFromRemoteGroupRecord:(id)arg1 bucketId:(id)arg2 localCellData:(id)arg3 sectionIndex:(unsigned long long)arg4;
+ (id)cellDataFromRemoteGroupRecord:(id)arg1 bucketId:(id)arg2 sectionIndex:(unsigned long long)arg3;
+ (id)cellDataFromLocalGroupRecord:(id)arg1 sectionIndex:(unsigned long long)arg2;
+ (id)trim:(id)arg1;
+ (id)filterSpecialCharWithString:(id)arg1;
+ (id)obj2InfoForGlobalSearch:(id)arg1 config:(id)arg2 keyword:(id)arg3;
+ (void)runAfterDelay:(double)arg1 inGlobal:(CDUnknownBlockType)arg2;
+ (void)runInGlobalAsync:(CDUnknownBlockType)arg1;
+ (void)runInGlobal:(CDUnknownBlockType)arg1;
+ (void)runInMain:(CDUnknownBlockType)arg1;

@end
