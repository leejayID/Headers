//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class NSArray, NSTimer, QZHostInfo;

@interface QZDNSParseImplementation : QZoneModel
{
    NSTimer *_DNSParseSendTimer;
    struct __CFHost *_cfHostName;
    _Bool _isPrasing;
    QZHostInfo *_hostInfo;
    NSArray *_ipStrings;
    CDUnknownBlockType _finishBlock;
}

+ (id)pareseDNSOperationWithHostInfo:(id)arg1 parseDNSFinishBlock:(CDUnknownBlockType)arg2;
+ (void)QZStartDNSParseRunLoop;
+ (id)DNSPareseRequestThread;
+ (void)DNSRequestThreadFun;
@property(readonly, copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSArray *ipStrings; // @synthesize ipStrings=_ipStrings;
@property(retain, nonatomic) QZHostInfo *hostInfo; // @synthesize hostInfo=_hostInfo;
@property(nonatomic) _Bool isPrasing; // @synthesize isPrasing=_isPrasing;
- (void).cxx_destruct;
- (void)stopHostParsing;
- (void)DNSParseRecvTimeout;
- (void)didFailWithHostStreamError:(int)arg1;
- (void)didFailWithError:(id)arg1;
- (id)extractHostAddresses:(id)arg1;
- (void)DNScompleteOperationType:(int)arg1;
- (void)startResolving;
- (void)start;
- (void)dealloc;
- (id)initWithHostInfo:(id)arg1 parseDNSFinishBlock:(CDUnknownBlockType)arg2;
- (long long)getDNSIPParseTimeOut;

@end
