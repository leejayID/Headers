//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class UIImageView, UILabel;

@interface FFBuySelectCell : TBExtBuyBaseCell
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_arrowIcon;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
+ (id)eventTag;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupViews;
- (_Bool)shouldPostEvent;
- (void)bindData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

