//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeTemplateDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBOrderTemplate;
@protocol TBOrderSDKDataTrackDelegate, TBOrderServiceMockDelegate;

@interface TBOrderService : NSObject <TBTradeTemplateDelegate>
{
    CDUnknownBlockType _templateCallBack;
    NSMutableDictionary *_callbacks;
    TBOrderTemplate *_orderTemplate;
    TBOrderTemplate *_orderTemplateBackup;
    id <TBOrderServiceMockDelegate> _orderServiceMockDelegate;
    id <TBOrderSDKDataTrackDelegate> _orderTemplateDelegate;
}

+ (void)free:(id)arg1;
+ (void)free;
+ (void)updateTemplateWithNewData:(id)arg1;
+ (void)queryOrderData:(id)arg1;
+ (void)queryTemplateWithOperation:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)orderTemplate;
+ (void)startOperation:(id)arg1 eventType:(int)arg2;
+ (void)startOperation:(id)arg1;
+ (void)paddingDataWithUnit:(id)arg1 event:(id)arg2 cause:(id)arg3;
+ (void)callbackWithEventType:(int)arg1 target:(id)arg2 result:(id)arg3;
+ (CDUnknownBlockType)getCallbackWithEventType:(int)arg1 target:(id)arg2;
+ (void)registerCallback:(CDUnknownBlockType)arg1 forEventType:(int)arg2 target:(id)arg3;
+ (id)sharedInstance;
@property(nonatomic) __weak id <TBOrderSDKDataTrackDelegate> orderTemplateDelegate; // @synthesize orderTemplateDelegate=_orderTemplateDelegate;
@property(retain, nonatomic) id <TBOrderServiceMockDelegate> orderServiceMockDelegate; // @synthesize orderServiceMockDelegate=_orderServiceMockDelegate;
@property(retain, nonatomic) TBOrderTemplate *orderTemplateBackup; // @synthesize orderTemplateBackup=_orderTemplateBackup;
@property(retain, nonatomic) TBOrderTemplate *orderTemplate; // @synthesize orderTemplate=_orderTemplate;
@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(copy, nonatomic) CDUnknownBlockType templateCallBack; // @synthesize templateCallBack=_templateCallBack;
- (void).cxx_destruct;
- (void)free:(id)arg1;
- (void)free;
- (void)registerDataTrackDelegate:(id)arg1;
- (void)registerServiceMock:(id)arg1;
- (void)callbackWithEventType:(int)arg1 target:(id)arg2 result:(id)arg3;
- (id)actionNameWithEventType:(int)arg1;
- (CDUnknownBlockType)getCallbackWithEventType:(int)arg1 target:(id)arg2;
- (id)callbacksWithTarget:(id)arg1;
- (void)registerCallback:(CDUnknownBlockType)arg1 forEventType:(int)arg2 target:(id)arg3;
- (void)addDynamicParameters:(id)arg1;
- (unsigned long long)envTypeForMakingTemplateUrl;
- (void)updateTemplateWithNewData:(id)arg1;
- (id)dataWithPath:(id)arg1;
- (id)valueWithParam:(id)arg1 unit:(id)arg2 event:(id)arg3 cause:(id)arg4;
- (void)processEventURLWithUnit:(id)arg1 event:(id)arg2 cause:(id)arg3;
- (void)paddingDataWithUnit:(id)arg1 event:(id)arg2 cause:(id)arg3;
- (id)dataFromFile;
- (void)operationInvalid:(id)arg1;
- (void)queryTemplateWithOperation:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (_Bool)isQueryOrderList:(id)arg1;
- (void)parseOrderData:(id)arg1 withOperation:(id)arg2;
- (void)parseTemplate:(id)arg1 withOperation:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)paddingOrderDefaultParamWithOperation:(id)arg1 forRequest:(id)arg2;
- (id)createOrderRequestWithOperation:(id)arg1;
- (void)queryOrderData:(id)arg1;
- (void)paddingDefaultParamWithOperation:(id)arg1 forRequest:(id)arg2;
- (id)createRequestWithOperation:(id)arg1;
- (void)parseData:(id)arg1 withOperation:(id)arg2;
- (void)startMTOPServiceWithOperation:(id)arg1;
- (void)startOperation:(id)arg1 eventType:(int)arg2;
- (void)startNormalServiceWithOperation:(id)arg1;
- (void)startOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

