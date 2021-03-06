//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IContentUpdateDelegate-Protocol.h>
#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface QQVIPWhiteScreenDetectManager : NSObject <IContentUpdateDelegate, ISCListenerCallback, ISCBusinessCallback>
{
    NSString *_basicReportInfo;
    _Bool _shouldEnableWSD;
    NSString *_httpcode;
    NSString *_webLoadTime;
    NSString *_currentUrl;
    NSMutableDictionary *_configDic;
    NSArray *_webViewJavaScriptReportDomains;
    NSArray *_webViewMemoryReportDomains;
    NSArray *_whiteScreenDomains;
    NSDictionary *_sonicWhiteListConfig;
    NSArray *_arkShareWhiteList;
}

+ (id)shareManager;
@property(retain, nonatomic) NSArray *arkShareWhiteList; // @synthesize arkShareWhiteList=_arkShareWhiteList;
@property(retain, nonatomic) NSDictionary *sonicWhiteListConfig; // @synthesize sonicWhiteListConfig=_sonicWhiteListConfig;
@property(retain, nonatomic) NSArray *whiteScreenDomains; // @synthesize whiteScreenDomains=_whiteScreenDomains;
@property(retain, nonatomic) NSArray *webViewMemoryReportDomains; // @synthesize webViewMemoryReportDomains=_webViewMemoryReportDomains;
@property(retain, nonatomic) NSArray *webViewJavaScriptReportDomains; // @synthesize webViewJavaScriptReportDomains=_webViewJavaScriptReportDomains;
@property(nonatomic) _Bool shouldEnableWSD; // @synthesize shouldEnableWSD=_shouldEnableWSD;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) NSString *webLoadTime; // @synthesize webLoadTime=_webLoadTime;
@property(retain, nonatomic) NSString *httpcode; // @synthesize httpcode=_httpcode;
- (void).cxx_destruct;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)clearWSDReportInfo;
- (void)trySetHttpCode:(id)arg1 withUrl:(id)arg2;
- (void)reportWhiteScreenDataWithInfo:(id)arg1;
- (id)getDomainListSuitableForSwitchToAio;
- (_Bool)shouldEnableSwitchToAio;
- (id)getTimestamp:(id)arg1;
- (_Bool)isUrlMatchSonicWhiteListDomain:(id)arg1;
- (id)getarkShareWhiteList;
- (void)reLoadConfigJson:(id)arg1;
- (id)configJsonPath;
- (void)downloadConfigFileIfNotExist;
- (id)getUrlListSuitableForWebCore;
- (id)getDomainListSuitableForWebCore;
- (_Bool)shouldEnableWKCore;
- (_Bool)shouldEnableWSDForUrl:(id)arg1;
- (_Bool)shouldEnableWebViewJavaScriptReportForUrl:(id)arg1;
- (_Bool)shouldEnableWebViewMemoryReportForUrl:(id)arg1;
- (_Bool)shouldEnableWSDForCurrentUser;
- (void)onLoginSuccess:(id)arg1;
- (_Bool)shouldEnableWhiteScreenDetect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

