//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailItemPriceModel, AliDetailTradeModel, NSArray, NSDictionary, NSString;

@interface AliDetailSKUInfo : NSObject
{
    _Bool _isPicPropSelected;
    NSString *_selectSkuId;
    long long _quantity;
    NSString *_quantityText;
    AliDetailItemPriceModel *_skuPriceModel;
    NSString *_skuDisplayString;
    NSString *_skuPopUpString;
    NSString *_skuCellString;
    NSString *_picUrl;
    NSDictionary *_enableMap;
    NSArray *_servieUnits;
    AliDetailTradeModel *_skuTradeModel;
}

@property(nonatomic) _Bool isPicPropSelected; // @synthesize isPicPropSelected=_isPicPropSelected;
@property(retain, nonatomic) AliDetailTradeModel *skuTradeModel; // @synthesize skuTradeModel=_skuTradeModel;
@property(retain, nonatomic) NSArray *servieUnits; // @synthesize servieUnits=_servieUnits;
@property(retain, nonatomic) NSDictionary *enableMap; // @synthesize enableMap=_enableMap;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *skuCellString; // @synthesize skuCellString=_skuCellString;
@property(retain, nonatomic) NSString *skuPopUpString; // @synthesize skuPopUpString=_skuPopUpString;
@property(retain, nonatomic) NSString *skuDisplayString; // @synthesize skuDisplayString=_skuDisplayString;
@property(retain, nonatomic) AliDetailItemPriceModel *skuPriceModel; // @synthesize skuPriceModel=_skuPriceModel;
@property(retain, nonatomic) NSString *quantityText; // @synthesize quantityText=_quantityText;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *selectSkuId; // @synthesize selectSkuId=_selectSkuId;
- (void).cxx_destruct;

@end

