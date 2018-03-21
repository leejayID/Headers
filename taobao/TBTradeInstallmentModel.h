//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray;
@protocol TBTradeInstallmentOption;

@interface TBTradeInstallmentModel : TBTradeComponentModel
{
    NSMutableArray<TBTradeInstallmentOption> *_options;
}

@property(retain, nonatomic) NSMutableArray<TBTradeInstallmentOption> *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)loadOptionArray:(id)arg1;
- (id)selectedOption;
- (void)setNum:(id)arg1;
- (id)num;
- (void)setChecked:(_Bool)arg1;
- (_Bool)checked;
- (id)warning;
- (id)title;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end
