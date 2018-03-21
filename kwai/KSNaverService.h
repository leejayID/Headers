//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSThirdPartyOAuth-Protocol.h"
#import "KSURLHandler-Protocol.h"
#import "NaverThirdPartyLoginConnectionDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface KSNaverService : NSObject <NaverThirdPartyLoginConnectionDelegate, KSThirdPartyOAuth, KSURLHandler>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (_Bool)isAvailable;
+ (_Bool)isNativeAvailable;
+ (id)sharedKSNaverService;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)topMostViewController;
- (void)oauth20Connection:(id)arg1 didFailWithError:(id)arg2;
- (void)oauth20ConnectionDidFinishDeleteToken;
- (void)oauth20ConnectionDidFinishRequestACTokenWithRefreshToken;
- (void)oauth20ConnectionDidFinishRequestACTokenWithAuthCode;
- (void)oauth20ConnectionDidOpenInAppBrowserForOAuth:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (_Bool)canOpenURL:(id)arg1;
- (id)lastUseOAuthDate;
- (void)logout;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *OAuthParams;
@property(readonly, nonatomic) NSString *platformName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
