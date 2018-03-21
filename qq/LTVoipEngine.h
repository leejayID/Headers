//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface LTVoipEngine : NSObject <IEngineDispatchDelegate>
{
    NSTimer *_updateTimer;
    _Bool _disableConfigRequest;
    _Bool _disableBillRequest;
    NSMutableDictionary *_callbackHandlers;
    NSMutableDictionary *_userInfos;
    NSObject<OS_dispatch_queue> *_addressBookInsertRecord_queue;
}

+ (id)getInstance;
- (void)disabledBillRequest;
- (void)disableConfigRequest;
- (void)onHandlerResp:(int)arg1 errCode:(int)arg2 data:(id)arg3;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)addPhoneNum:(id)arg1 withFlag:(_Bool)arg2 toContactRecord:(void *)arg3;
- (void)copyPhoneNumsFrom:(void *)arg1 to:(void *)arg2 atIndex:(long long)arg3 withLabel:(struct __CFString *)arg4;
- (_Bool)phoneNum:(id)arg1 isInContactRecord:(void *)arg2;
- (_Bool)validateLightalkOfficialHomePage:(void *)arg1;
- (int)lightalkContactId:(void *)arg1 name:(id)arg2;
- (void)genLightalkOfficialContactRecord:(void *)arg1 name:(id)arg2;
- (void)addAddressBookRecordWithPhoneNum:(id)arg1 withFlag:(_Bool)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (id)entryTitle:(_Bool)arg1;
- (_Bool)checkNetWork;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkDiscussAlert;
- (void)checkC2CAlert;
- (void)updateBillInfo;
- (void)updateBillInfoSel;
- (void)storeGrayTipsForLTCoupon:(id)arg1;
- (void)handleLTCoupon:(id)arg1;
- (void)handleLTCouponChange:(id)arg1;
- (void)handleHangUpNotification;
- (void)handleCallBill:(id)arg1;
- (void)handleRechargeResult:(id)arg1;
- (_Bool)hasCallDuration;
- (_Bool)hasBeenLTVIP;
- (_Bool)hasPSTNTrialFlag;
- (_Bool)canTryPSTN:(_Bool)arg1;
- (void)gotoRechargeDetailPage:(id)arg1 pageType:(long long)arg2 recSource:(long long)arg3;
- (void)gotoRechargePage:(id)arg1 pageType:(long long)arg2 recSource:(long long)arg3;
- (id)getBillInfo:(_Bool)arg1;
- (void)requestBillInfo:(CDUnknownBlockType)arg1;
- (_Bool)multiTrialAuth;
- (_Bool)c2cTrialAuth;
- (_Bool)canCallPstn;
- (int)SendPacketWithMessage:(const void *)arg1 cmd:(id)arg2 userInfo:(id)arg3 respPraser:(CDUnknownBlockType)arg4;
- (int)SendPacketWithData:(id)arg1 cmd:(id)arg2 userInfo:(id)arg3 respPraser:(CDUnknownBlockType)arg4;
- (int)SendPacketWithBuffer:(const void *)arg1 dataLength:(int)arg2 cmd:(id)arg3 userInfo:(id)arg4 respPraser:(CDUnknownBlockType)arg5;
- (void)removeUserInfoForKey:(id)arg1;
- (void)setUserInfo:(id)arg1 forKey:(id)arg2;
- (id)userInfoForKey:(id)arg1;
- (void)removeHandlerForKey:(id)arg1;
- (void)setHandler:(id)arg1 forKey:(id)arg2;
- (id)handlerForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onConfigTimer;
- (void)stopUpdateConfigTimer;
- (void)startUpdateConfigTimer;
- (void)startUpdateConfig;
- (void)sendLTConfigReq;
- (void)onHandlerS2CMsg:(int)arg1 errCode:(int)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
