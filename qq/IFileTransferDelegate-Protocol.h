//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSData, NSString;

@protocol IFileTransferDelegate <NSObject>

@optional
- (void)onTransferComplete:(NSString *)arg1 errorCode:(int)arg2 filePath:(NSString *)arg3 fileKey:(NSString *)arg4 fileSize:(NSString *)arg5 customBuff:(NSData *)arg6 businessName:(NSString *)arg7;
- (void)onTransferProgress:(NSString *)arg1 progressInPercent:(int)arg2;
@end
