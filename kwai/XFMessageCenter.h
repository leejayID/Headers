//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XFMessageReceiverDelegate-Protocol.h"
#import "XFMessageSenderDelegate-Protocol.h"

@class NSString, XFMulticastDelegate;
@protocol OS_dispatch_queue, XFMessageCenterDelegate, XFMessageReceiverProtocol, XFMessageResourceProtocol, XFMessageSenderProtocol, XFMessageStorageProtocol;

@interface XFMessageCenter : NSObject <XFMessageReceiverDelegate, XFMessageSenderDelegate>
{
    XFMulticastDelegate<XFMessageCenterDelegate> *_multiDelegate;
    id <XFMessageReceiverProtocol> _receiver;
    id <XFMessageSenderProtocol> _sender;
    id <XFMessageStorageProtocol> _storage;
    id <XFMessageResourceProtocol> _resourceHandler;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <XFMessageResourceProtocol> resourceHandler; // @synthesize resourceHandler=_resourceHandler;
@property(readonly, nonatomic) id <XFMessageStorageProtocol> storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) id <XFMessageSenderProtocol> sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) id <XFMessageReceiverProtocol> receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) XFMulticastDelegate<XFMessageCenterDelegate> *multiDelegate; // @synthesize multiDelegate=_multiDelegate;
- (void).cxx_destruct;
- (_Bool)deleteMessageWhere:(id)arg1 threadID:(id)arg2;
- (void)fetchMessageWithDescription:(id)arg1 threadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)receiver:(id)arg1 didReceiveMessages:(id)arg2 forThead:(id)arg3;
- (void)sender:(id)arg1 didFailedToSendMessage:(id)arg2 withError:(id)arg3;
- (void)sender:(id)arg1 didSuccedToSendMessage:(id)arg2 userInfo:(id)arg3;
- (_Bool)receiveMessages:(id)arg1 forThead:(id)arg2;
- (_Bool)failedToSendMessage:(id)arg1 error:(id)arg2;
- (_Bool)successedToSendMessage:(id)arg1 userInfo:(id)arg2;
- (_Bool)beginSendingMessage:(id)arg1;
- (_Bool)endUploadingResource:(id)arg1 error:(id)arg2;
- (_Bool)beginUploadingResource:(id)arg1;
- (_Bool)willSendMessage:(id)arg1;
- (void)saveMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

