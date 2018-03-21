//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface QZoneCrashHelper : NSObject
{
    NSMutableDictionary *_filterFeedKeyInfoDic;
    NSRecursiveLock *_filterFeedKeyInfoDicLock;
    NSRecursiveLock *_savefilterFeedKeyInfoLock;
    NSString *_currentLayoutUGCKey;
    _Bool _isLayout;
    int _xo;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (_Bool)getFeedLayoutStatus;
- (void)addFeedLayoutStatus:(_Bool)arg1;
- (id)getCurrentLayoutUGCKey;
- (void)addCurrentLayoutUCGKey:(id)arg1;
- (void)deleteCrashFlagTmp;
- (id)pathForCrashFlagTmpFile;
- (void)minusCrashCount;
- (void)incCrashCount;
- (void)onCrashed;
- (_Bool)isCurrentInQzonePage;
- (_Bool)needClearCacheWhenLauch;
- (void)dealCrashCount;
- (void)qzoneRootExit:(id)arg1;
- (id)init;

@end
