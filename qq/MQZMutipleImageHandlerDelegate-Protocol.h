//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MQZMutipleImageHandler, NSArray, NSDictionary, NSError;

@protocol MQZMutipleImageHandlerDelegate <NSObject>

@optional
- (void)saveImageCompleteHandlerWithError:(NSArray *)arg1;
- (void)downloadImageCompleteHandler:(NSDictionary *)arg1;
- (void)downloadImageCompleteHandler;
- (void)mutipleImageHandlerStartHanldeImages:(MQZMutipleImageHandler *)arg1;
- (void)mutipleImageHandlerContinuePrepared:(MQZMutipleImageHandler *)arg1;
- (void)mutipleImageHandlerPausePrepared:(MQZMutipleImageHandler *)arg1;
- (void)mutipleImageHandler:(MQZMutipleImageHandler *)arg1 didPreparedWithError:(NSError *)arg2;
@end
