//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface YXTrueLoveGroupMessageModel : YXTrueLoveBaseModel
{
    NSArray *_truelove_messages;
    NSNumber *_truelove_productid;
    long long _truelove_paystatus;
    NSString *_truelove_anchorMemberid;
    NSString *_truelove_payAddress;
    long long _truelove_price;
}

+ (id)testModel;
@property(nonatomic) long long truelove_price; // @synthesize truelove_price=_truelove_price;
@property(retain, nonatomic) NSString *truelove_payAddress; // @synthesize truelove_payAddress=_truelove_payAddress;
@property(retain, nonatomic) NSString *truelove_anchorMemberid; // @synthesize truelove_anchorMemberid=_truelove_anchorMemberid;
@property(nonatomic) long long truelove_paystatus; // @synthesize truelove_paystatus=_truelove_paystatus;
@property(retain, nonatomic) NSNumber *truelove_productid; // @synthesize truelove_productid=_truelove_productid;
@property(retain, nonatomic) NSArray *truelove_messages; // @synthesize truelove_messages=_truelove_messages;
- (void).cxx_destruct;

@end

