//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSObject, QQVipFunctionDownloadTask;

@protocol QQVipFunctionDownloadProtocol <NSObject>

@optional
- (void)DownloadQueue:(NSObject *)arg1 didCancel:(QQVipFunctionDownloadTask *)arg2;
- (void)DownloadQueue:(NSObject *)arg1 didFailed:(QQVipFunctionDownloadTask *)arg2;
- (void)DownloadQueue:(NSObject *)arg1 didSuccess:(QQVipFunctionDownloadTask *)arg2;
- (void)DownloadQueue:(NSObject *)arg1 didDownloading:(QQVipFunctionDownloadTask *)arg2;
- (void)DownloadQueue:(NSObject *)arg1 didStart:(QQVipFunctionDownloadTask *)arg2;
@end

