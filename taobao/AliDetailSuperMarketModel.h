//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailSuperMarketModel : TBJSONModel
{
    _Bool _hideBuy;
    _Bool _supportMakeUpOrder;
    NSString *_weight;
    NSString *_tpId;
    NSString *_logicArea;
    NSString *_cartUrl;
    NSString *_homePageUrl;
}

@property(nonatomic) _Bool supportMakeUpOrder; // @synthesize supportMakeUpOrder=_supportMakeUpOrder;
@property(nonatomic) _Bool hideBuy; // @synthesize hideBuy=_hideBuy;
@property(copy, nonatomic) NSString *homePageUrl; // @synthesize homePageUrl=_homePageUrl;
@property(copy, nonatomic) NSString *cartUrl; // @synthesize cartUrl=_cartUrl;
@property(copy, nonatomic) NSString *logicArea; // @synthesize logicArea=_logicArea;
@property(copy, nonatomic) NSString *tpId; // @synthesize tpId=_tpId;
@property(copy, nonatomic) NSString *weight; // @synthesize weight=_weight;
- (void).cxx_destruct;

@end
