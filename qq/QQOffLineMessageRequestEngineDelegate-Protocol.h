//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSNotification;

@protocol QQOffLineMessageRequestEngineDelegate <NSObject>
- (void)onOffLineMessageResp:(int)arg1 isSuccess:(_Bool)arg2 resultData:(id)arg3;

@optional
- (void)onOffLineMessageRequestTimeOut:(int)arg1 notification:(NSNotification *)arg2;
@end

