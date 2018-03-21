//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface TBLiveMessageQueue : NSObject
{
    _Bool _isSaveMsg;
    NSMutableArray *_cacheList;
    NSRecursiveLock *_listLock;
}

+ (void)clear;
+ (void)setSaveMsg:(_Bool)arg1;
+ (id)read;
+ (void)saveMsg:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool isSaveMsg; // @synthesize isSaveMsg=_isSaveMsg;
@property(retain, nonatomic) NSRecursiveLock *listLock; // @synthesize listLock=_listLock;
@property(retain, nonatomic) NSMutableArray *cacheList; // @synthesize cacheList=_cacheList;
- (void).cxx_destruct;

@end
