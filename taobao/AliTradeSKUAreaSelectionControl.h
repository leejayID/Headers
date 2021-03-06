//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AliDetailModel, AliTradeSKUAreaSelectControl, NSString, UILabel, UIView;

@interface AliTradeSKUAreaSelectionControl : UIControl
{
    AliDetailModel *_detailModel;
    AliTradeSKUAreaSelectControl *_areaSelectControl;
    UILabel *_titleLabel;
    UILabel *_deliveryLabel;
    UIView *_endLine;
    NSString *_deliveryText;
}

@property(copy, nonatomic) NSString *deliveryText; // @synthesize deliveryText=_deliveryText;
@property(retain, nonatomic) UIView *endLine; // @synthesize endLine=_endLine;
@property(retain, nonatomic) UILabel *deliveryLabel; // @synthesize deliveryLabel=_deliveryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AliTradeSKUAreaSelectControl *areaSelectControl; // @synthesize areaSelectControl=_areaSelectControl;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (_Bool)getEnabledAreaSelectionControl;
- (void)setEnabledAreaSelectionControl:(_Bool)arg1;
- (void)layoutSubviews;
- (double)selectionControlHeight;
- (void)addClickTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

