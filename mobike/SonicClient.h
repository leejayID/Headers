//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface SonicClient : NSObject
{
    NSString *_currentUserUniq;
    NSString *_userAgent;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_ipDomains;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSMutableDictionary *ipDomains; // @synthesize ipDomains=_ipDomains;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSString *currentUserUniq; // @synthesize currentUserUniq=_currentUserUniq;
- (void)removeSessionWithWebDelegate:(id)arg1;
- (id)sessionById:(id)arg1;
- (id)sessionWithWebDelegate:(id)arg1;
- (void)createSessionWithUrl:(id)arg1 withWebDelegate:(id)arg2;
- (void)sonicUpdateDiffDataByWebDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerURLProtocolCallBackWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registProtocolCallBack:(CDUnknownBlockType)arg1 withSessionID:(id)arg2;
- (void)removeCacheByUrl:(id)arg1;
- (id)localRefreshTimeByUrl:(id)arg1;
- (_Bool)isFirstLoad:(id)arg1;
- (void)clearAllCache;
- (void)setupClient;
- (void)addDomain:(id)arg1 withIpAddress:(id)arg2;
- (id)sonicDefaultUserAgent;
- (void)setCurrentUserUniqIdentifier:(id)arg1;
- (void)setGlobalUserAgent:(id)arg1;
- (id)init;

@end

