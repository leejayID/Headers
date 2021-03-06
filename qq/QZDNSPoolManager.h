//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QZDNSPoolManager : NSObject
{
    NSMutableDictionary *_DNSCacheMutlDict;
    NSObject<OS_dispatch_queue> *_reqProcessQueue;
    NSObject<OS_dispatch_queue> *_dnsCacheQueue;
    _Bool _bDNSCacheNeedResave;
    CDUnknownBlockType _reportBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
- (void).cxx_destruct;
- (double)getCurrentTimeInterval;
- (void)clearDNSCache;
- (void)removeDNSCacheItemIfNeed:(id)arg1 callBlock:(CDUnknownBlockType)arg2;
- (void)startParseDNSResolve:(id)arg1;
- (id)generateDNSIPKey:(id)arg1 apn:(long long)arg2;
- (void)updateIPItem:(id)arg1 ip:(id)arg2 apn:(long long)arg3 isSucess:(_Bool)arg4 error:(id)arg5;
- (_Bool)isDNSIPItemNeedParse:(id)arg1;
- (_Bool)isValidDNSIPItem:(id)arg1;
- (id)getIP:(id)arg1 apn:(long long)arg2;
- (void)eliminateExpiredDNSIP:(id)arg1 callBlock:(CDUnknownBlockType)arg2;
- (void)applicationEnterBackground;
- (void)unarchiveDNSItems;
- (long long)getMaxDNSIPIPCacheNUM;
- (long long)getIPCacheCountPerDomainNum;
- (double)getMaxDNSIPIPParseCacheTime;
- (double)getCheckUpdateDNSIPCacheTime;
- (id)init;

@end

