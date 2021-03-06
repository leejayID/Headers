//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GrowingEvent;
@protocol GrowingAddEventContext, GrowingNode;

@protocol GrowingEventManagerObserver <NSObject>

@optional
- (void)growingEventManagerWillAddEvent:(GrowingEvent *)arg1 thisNode:(id <GrowingNode>)arg2 triggerNode:(id <GrowingNode>)arg3 withContext:(id <GrowingAddEventContext>)arg4;
- (_Bool)growingEventManagerShouldAddEvent:(GrowingEvent *)arg1 thisNode:(id <GrowingNode>)arg2 triggerNode:(id <GrowingNode>)arg3 withContext:(id <GrowingAddEventContext>)arg4;
- (void)growingEventManagerWillTriggerNode:(id <GrowingNode>)arg1 eventType:(long long)arg2 withChild:(_Bool)arg3;
- (_Bool)growingEventManagerShouldTriggerNode:(id <GrowingNode>)arg1 eventType:(long long)arg2 withChild:(_Bool)arg3;
@end

