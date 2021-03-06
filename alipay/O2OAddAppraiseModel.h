//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class MOBILECSAItemInfo, NSArray, NSDictionary, NSString;

@interface O2OAddAppraiseModel : O2OHTTPModel
{
    _Bool _haveDisplayGoods;
    _Bool _haveCraftsmans;
    _Bool _shareLifeCircle;
    _Bool _shareItem;
    _Bool _shareOrderAmount;
    NSString *_tradeNo;
    NSDictionary *_monitorDic;
    NSString *_shopName;
    NSString *_shopId;
    NSString *_shopLogo;
    NSString *_itemId;
    NSString *_commentInitContent;
    unsigned long long _version;
    unsigned long long _defaultScore;
    NSString *_displayGoodsTotal;
    NSString *_activityTitle;
    NSArray *_starDescs;
    NSArray *_faceDescs;
    NSString *_faceDefaultDesc;
    NSArray *_questions;
    NSString *_activityContentTitle;
    NSString *_activityContent;
    NSString *_defaultCraftsmanId;
    NSString *_defaultCraftsmanName;
    NSArray *_subScoreObject;
    MOBILECSAItemInfo *_itemInfo;
    NSString *_orderBizType;
    NSString *_shareOrderAmountTip;
}

@property(retain, nonatomic) NSString *shareOrderAmountTip; // @synthesize shareOrderAmountTip=_shareOrderAmountTip;
@property(nonatomic) _Bool shareOrderAmount; // @synthesize shareOrderAmount=_shareOrderAmount;
@property(retain, nonatomic) NSString *orderBizType; // @synthesize orderBizType=_orderBizType;
@property(nonatomic) _Bool shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) _Bool shareLifeCircle; // @synthesize shareLifeCircle=_shareLifeCircle;
@property(retain, nonatomic) MOBILECSAItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(retain, nonatomic) NSArray *subScoreObject; // @synthesize subScoreObject=_subScoreObject;
@property(retain, nonatomic) NSString *defaultCraftsmanName; // @synthesize defaultCraftsmanName=_defaultCraftsmanName;
@property(retain, nonatomic) NSString *defaultCraftsmanId; // @synthesize defaultCraftsmanId=_defaultCraftsmanId;
@property(nonatomic) _Bool haveCraftsmans; // @synthesize haveCraftsmans=_haveCraftsmans;
@property(retain, nonatomic) NSString *activityContent; // @synthesize activityContent=_activityContent;
@property(retain, nonatomic) NSString *activityContentTitle; // @synthesize activityContentTitle=_activityContentTitle;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSString *faceDefaultDesc; // @synthesize faceDefaultDesc=_faceDefaultDesc;
@property(retain, nonatomic) NSArray *faceDescs; // @synthesize faceDescs=_faceDescs;
@property(retain, nonatomic) NSArray *starDescs; // @synthesize starDescs=_starDescs;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(retain, nonatomic) NSString *displayGoodsTotal; // @synthesize displayGoodsTotal=_displayGoodsTotal;
@property(nonatomic) unsigned long long defaultScore; // @synthesize defaultScore=_defaultScore;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) _Bool haveDisplayGoods; // @synthesize haveDisplayGoods=_haveDisplayGoods;
@property(retain, nonatomic) NSString *commentInitContent; // @synthesize commentInitContent=_commentInitContent;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

