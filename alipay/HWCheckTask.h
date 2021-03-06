//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IBioAuthTask-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class APBTaskContext, NSMutableDictionary, NSString, UIViewController;

@interface HWCheckTask : NSObject <UIAlertViewDelegate, IBioAuthTask>
{
    NSString *_taskName;
    APBTaskContext *_context;
    NSMutableDictionary *_pipeInfo;
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSMutableDictionary *pipeInfo; // @synthesize pipeInfo=_pipeInfo;
@property(retain, nonatomic) APBTaskContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void).cxx_destruct;
- (void)reset;
- (id)getConfig;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)exitWithResult:(int)arg1 failReason:(id)arg2;
- (void)invokeWithPipeInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

