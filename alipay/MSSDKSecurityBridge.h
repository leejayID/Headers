//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSDKWebViewBridge.h"

@interface MSSDKSecurityBridge : MSSDKWebViewBridge
{
}

+ (void)startMoneyshieldAntiVirus:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)startMoneyshield:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)getMoneyShieldInstallStatus:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)getInstalledMoneyshieldVersion:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)isMoneyshieldInstalled:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)checkRisk:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)checkDeviceRiskSync:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)registerWebViewHandler;

@end

