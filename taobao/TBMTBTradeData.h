//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, TBMTBTradeOrderInfo;
@protocol TBMTBDeliveryItem;

@interface TBMTBTradeData : TBJSONModel
{
    TBMTBTradeOrderInfo *_orderInfo;
    NSArray<TBMTBDeliveryItem> *_deliveryList;
}

@property(retain, nonatomic) NSArray<TBMTBDeliveryItem> *deliveryList; // @synthesize deliveryList=_deliveryList;
@property(retain, nonatomic) TBMTBTradeOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;

@end
