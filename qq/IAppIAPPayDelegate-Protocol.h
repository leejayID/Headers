//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSData, NSError, SKPaymentTransaction, SKProductsResponse;

@protocol IAppIAPPayDelegate <NSObject>
- (void)failedTransaction:(SKPaymentTransaction *)arg1;
- (void)completeTransactions:(NSArray *)arg1 receipt:(NSData *)arg2;
- (void)completeTransaction:(SKPaymentTransaction *)arg1 receipt:(NSData *)arg2;
- (void)receiveProductsFail:(NSError *)arg1;
- (void)receiveProducts:(SKProductsResponse *)arg1;
@end
