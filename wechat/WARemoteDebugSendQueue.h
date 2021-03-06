//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WARemoteDebugSendQueueDelegate;

@interface WARemoteDebugSendQueue : NSObject
{
    _Bool _sendoutImmediately;
    id <WARemoteDebugSendQueueDelegate> _delegate;
}

+ (id)generateUUID;
@property(nonatomic) _Bool sendoutImmediately; // @synthesize sendoutImmediately=_sendoutImmediately;
@property(nonatomic) __weak id <WARemoteDebugSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)getIntervalSendCount;
- (void)resendTryAgain;
- (void)handleQueue;
- (void)handleSendDebugMsgResp:(id)arg1 uuid:(id)arg2;
- (void)sendDebugMsgList:(id)arg1;

@end

