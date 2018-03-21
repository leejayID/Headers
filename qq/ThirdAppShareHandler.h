//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQConnectPluginCheckDelegate-Protocol.h>
#import <QQMainProject/QQStructureMsgUtilityDelegate-Protocol.h>
#import <QQMainProject/QQURLRichMsgHelperDelegate-Protocol.h>

@class NSDate, NSString, QQConnectPluginInfoQuery, QQMessageModel, QQStructureMsgUtility, QQURLRichMsgHelper, ThirdAppShareModel;
@protocol ThirdAppShareHandlerDelegate;

@interface ThirdAppShareHandler : NSObject <QQStructureMsgUtilityDelegate, QQURLRichMsgHelperDelegate, QQConnectPluginCheckDelegate>
{
    QQMessageModel *_msgModel;
    ThirdAppShareModel *_shareModel;
    QQStructureMsgUtility *_structureMsgUtility;
    QQURLRichMsgHelper *_urlRichMsgHelper;
    NSDate *_richStartTime;
    NSDate *_getShortUrlStartTime;
    NSDate *_uploadPreImgStartTime;
    id <ThirdAppShareHandlerDelegate> _delegate;
    NSDate *_startAsyncTime;
    NSDate *_startSvrDownload;
    QQConnectPluginInfoQuery *_pluginInfoCheck;
}

@property(retain, nonatomic) QQConnectPluginInfoQuery *pluginInfoCheck; // @synthesize pluginInfoCheck=_pluginInfoCheck;
@property(retain, nonatomic) NSDate *startSvrDownload; // @synthesize startSvrDownload=_startSvrDownload;
@property(retain, nonatomic) NSDate *startAsyncTime; // @synthesize startAsyncTime=_startAsyncTime;
@property(nonatomic) __weak id <ThirdAppShareHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *uploadPreImgStartTime; // @synthesize uploadPreImgStartTime=_uploadPreImgStartTime;
@property(retain, nonatomic) NSDate *getShortUrlStartTime; // @synthesize getShortUrlStartTime=_getShortUrlStartTime;
@property(retain, nonatomic) NSDate *richStartTime; // @synthesize richStartTime=_richStartTime;
@property(retain, nonatomic) QQURLRichMsgHelper *urlRichMsgHelper; // @synthesize urlRichMsgHelper=_urlRichMsgHelper;
@property(retain, nonatomic) QQStructureMsgUtility *structureMsgUtility; // @synthesize structureMsgUtility=_structureMsgUtility;
@property(retain, nonatomic) ThirdAppShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(readonly, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void).cxx_destruct;
- (void)resaveImageIfNeeded:(id)arg1 shortUrl:(id)arg2;
- (id)getUrlHavingCacheImage;
- (void)startGetShortUrl;
- (void)startToUploadImage;
- (void)reportRichResult:(id)arg1 errorCode:(int)arg2;
- (void)reportStartRich;
- (void)reportGetShortUrlInfo:(int)arg1;
- (void)reportGetShortUrlCostTime;
- (void)reportUploadShareImage:(int)arg1 shareImageURL:(id)arg2;
- (void)onResponseRichMsgData:(id)arg1 errorCode:(int)arg2;
- (void)getShortUrlsFailed:(id)arg1 errorCode:(int)arg2;
- (void)getShortUrlsSuccess:(id)arg1;
- (void)uploadShareImageFailed:(int)arg1;
- (void)uploadShareImageSuccess:(id)arg1;
- (void)onQQConnectCheckPluginInfoComplete;
- (void)requestServerDownloadImage;
- (void)requestUrlRich;
- (void)changeShortUrls;
- (void)uploadPreviewImage;
- (void)startCheckPluginInfoValid;
- (void)callDelegate;
- (void)doAfterCheckAppInfo;
- (void)startAsync;
- (void)dealloc;
- (id)initWithShareMsgModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
