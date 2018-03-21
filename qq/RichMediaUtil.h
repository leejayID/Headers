//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RichMediaUtil : NSObject
{
}

+ (id)getForwardMsgHostViaMsg:(id)arg1;
+ (id)getDomainAuthInfoViaMsg:(id)arg1;
+ (void)updateResendForwardPicMessageModel:(id)arg1;
+ (_Bool)isNeedChangeToVideoDownSuccState:(id)arg1;
+ (void)checkVideoDownloadState:(id)arg1;
+ (void)storeSVideoUUID:(id)arg1;
+ (void)storeVideoState:(id)arg1;
+ (void)setVideoErrorCode:(id)arg1 errorCode:(int)arg2;
+ (void)setVideoState:(id)arg1 state:(int)arg2;
+ (id)getNetType;
+ (_Bool)isGIFImage:(id)arg1;
+ (id)checkSavingImagesToAlbumByMessageModel:(id)arg1;
+ (id)checkForwardImagesByMessageModel:(id)arg1;
+ (_Bool)addIp:(unsigned int)arg1 toString:(id)arg2;
+ (id)createHttpUrl:(unsigned int)arg1 port:(unsigned int)arg2 isHttps:(_Bool)arg3;
+ (_Bool)isMmfRepeatDownload:(id)arg1;
+ (_Bool)isPicRepeatDownload:(id)arg1 withMd5:(id)arg2 andPicSizeType:(int)arg3 downloadProgress:(id *)arg4;
+ (void)saveMessageModelStateToDB:(id)arg1 withError:(id)arg2;
+ (int)downloadImageErrorCodeForExtInfo:(id)arg1;
+ (_Bool)isNeedRedownload:(id)arg1;
+ (id)createCustomPttError:(int)arg1 errorDesc:(id)arg2 errMsg:(id)arg3;
+ (id)createCustomPicErrorHelper:(id)arg1 failCode:(int)arg2 rmError:(long long)arg3 formatStr:(id)arg4;
+ (id)createCustomPicErrorHelper:(id)arg1 failCode:(int)arg2 rmError:(long long)arg3;
+ (id)createCustomPicError:(int)arg1 errorDesc:(id)arg2 errMsg:(id)arg3 definedInfo:(id)arg4;
+ (id)createCustomPicError:(int)arg1 errorDesc:(id)arg2 paramReason:(id)arg3;

@end
