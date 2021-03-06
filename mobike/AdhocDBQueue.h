//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdhocDatabase, NSString;
@protocol OS_dispatch_queue;

@interface AdhocDBQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    AdhocDatabase *_db;
    int _openFlags;
}

+ (id)DBQueueWithPath:(id)arg1;
- (void).cxx_destruct;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1;

@end

