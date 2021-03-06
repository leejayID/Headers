//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/WeiyunSDKContext-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WeiyunContext : NSObject <IEngineDispatchDelegate, WeiyunSDKContext>
{
    NSMutableDictionary *_context;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSMutableDictionary *_errorMsgDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *errorMsgDict; // @synthesize errorMsgDict=_errorMsgDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)errorMessgeForCode:(long long)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)sendRequest:(id)arg1 cmd:(id)arg2 response:(CDUnknownBlockType)arg3;
- (id)getDeviceName;
- (long long)getUin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

