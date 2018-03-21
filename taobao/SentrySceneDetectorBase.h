//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSRecursiveLock;

@interface SentrySceneDetectorBase : NSObject
{
    NSCountedSet *_sensorSet;
    CDUnknownBlockType _blockSceneData;
    NSRecursiveLock *_recursiveLock;
}

@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(copy, nonatomic) CDUnknownBlockType blockSceneData; // @synthesize blockSceneData=_blockSceneData;
@property(retain, nonatomic) NSCountedSet *sensorSet; // @synthesize sensorSet=_sensorSet;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)stopAction:(id)arg1;
- (void)startAction:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
