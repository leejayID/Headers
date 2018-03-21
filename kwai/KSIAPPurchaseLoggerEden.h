//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSIAPPurchaseLoggerEden : NSObject
{
}

+ (void)_logWithStep:(int)arg1 product:(id)arg2 currency:(id)arg3 success:(_Bool)arg4 errorType:(int)arg5 verifySource:(int)arg6 extraMessage:(id)arg7;
+ (int)_errorTypeWithErrorCode:(int)arg1;
+ (void)_verifyWithProduce:(id)arg1 source:(int)arg2 currency:(id)arg3 error:(id)arg4;
+ (void)before$KSIAPPurchaseValidater$validateWithProduce:(id)arg1 error:(id)arg2;
+ (void)before$KSIAPPurchaseManager$verifyWithProduce:(id)arg1 source:(int)arg2 currency:(id)arg3 error:(id)arg4;
+ (void)before$KSIAPPurchaseManager$fetchReceiptWithProduce:(id)arg1 currency:(id)arg2 error:(id)arg3;
+ (void)before$KSIAPPurchaseManager$fetchProduce:(id)arg1 currency:(id)arg2 error:(id)arg3;
+ (void)before$KSIAPPurchaseManager$verifyPaymentWithProduct:(id)arg1 currency:(id)arg2 errorCode:(int)arg3;

@end
