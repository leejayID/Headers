//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface TTABThread : NSThread
{
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
}

@property(readonly, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)cancel;
- (void)dealloc;

@end

