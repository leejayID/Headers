//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OClaimedVoucherRequest : GO2OServiceObject
{
    unsigned long long _pageNumber;
    unsigned long long _pageSize;
    NSString *_voucherType;
}

@property(retain, nonatomic) NSString *voucherType; // @synthesize voucherType=_voucherType;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (id)init;

@end

