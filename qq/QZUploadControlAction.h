//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZUploadEventAction.h>

@class NSDictionary, NSString;

@interface QZUploadControlAction : QZUploadEventAction
{
    _Bool _controlSended;
    NSDictionary *_packetDict;
    NSString *_currentIpKey;
    double _controlStart;
    double _totalStart;
    long long _batchRetryCount;
}

@property(nonatomic) long long batchRetryCount; // @synthesize batchRetryCount=_batchRetryCount;
@property(nonatomic) double totalStart; // @synthesize totalStart=_totalStart;
@property(nonatomic) double controlStart; // @synthesize controlStart=_controlStart;
@property(retain, nonatomic) NSString *currentIpKey; // @synthesize currentIpKey=_currentIpKey;
@property(retain, nonatomic) NSDictionary *packetDict; // @synthesize packetDict=_packetDict;
@property(nonatomic) _Bool controlSended; // @synthesize controlSended=_controlSended;
- (void).cxx_destruct;
- (void)startConnectionOfRequest:(id)arg1;
- (void)finishActionWithError:(id)arg1 request:(id)arg2;
- (long long)type;
- (void)handleFileCanceledWithRequest:(id)arg1 param:(id)arg2;
- (void)handleNetChangeWithRequest:(id)arg1 netStatus:(unsigned long long)arg2;
- (void)handleSocketDisconnectWithRequest:(id)arg1 error:(id)arg2 connection:(id)arg3;
- (void)restartBatchControlOfRequest:(id)arg1 connection:(id)arg2;
- (void)didBatControlError:(id)arg1 request:(id)arg2 connection:(id)arg3;
- (void)handleControlReadWithRequest:(id)arg1 andData:(id)arg2 connection:(id)arg3;
- (void)handleControlReadyToWriteWithRequest:(id)arg1 connection:(id)arg2;
- (void)handleControlStartWithRequest:(id)arg1;
- (void)doActionWithRequest:(id)arg1 event:(long long)arg2 param:(id)arg3;

@end
