//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKCancelQueryModel : NSObject
{
    long long _cancelFee;
    NSString *_orderId;
    NSString *_cancelCopy;
}

@property(copy, nonatomic) NSString *cancelCopy; // @synthesize cancelCopy=_cancelCopy;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long cancelFee; // @synthesize cancelFee=_cancelFee;
- (void).cxx_destruct;

@end

