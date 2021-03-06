//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AliDetailCouponTableViewCouponCellCardView, AliDetailCouponTableViewCouponCellRightSemicircleView, AliDetailCouponTableViewCouponCellSplitView, AliDetailKitCouponModel, NSMutableArray, NSNumber, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AliDetailCouponTableViewCouponCell : UITableViewCell
{
    _Bool _showIndicator;
    _Bool _showIndicatorSoon;
    _Bool _ignoreShowIndicator;
    AliDetailKitCouponModel *_model;
    NSNumber *_couponType;
    CDUnknownBlockType _bottomButtonClickBlock;
    CDUnknownBlockType _pointButtonClickBlock;
    AliDetailCouponTableViewCouponCellCardView *_cardView;
    UIImageView *_bgImageView;
    UIImageView *_leftIconView;
    UILabel *_titleLabel;
    UILabel *_titleLeftLabel;
    NSMutableArray *_titleRightLabelArray;
    UIImageView *_titleRightImageView;
    UILabel *_subTitleLabel;
    AliDetailCouponTableViewCouponCellSplitView *_bgSplitImageView;
    AliDetailCouponTableViewCouponCellRightSemicircleView *_bgRightSemicircleView;
    UIImageView *_rightBgImageView;
    UIButton *_pointButton;
    UILabel *_countLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_footView;
    UILabel *_footTitleLabel;
    UIButton *_footButton;
    UIView *_clickView;
    UIView *_outsideFootView;
    UILabel *_outsideFootTitleLabel;
    UIButton *_outsideFootButton;
}

@property(nonatomic) _Bool ignoreShowIndicator; // @synthesize ignoreShowIndicator=_ignoreShowIndicator;
@property(nonatomic) _Bool showIndicatorSoon; // @synthesize showIndicatorSoon=_showIndicatorSoon;
@property(retain, nonatomic) UIButton *outsideFootButton; // @synthesize outsideFootButton=_outsideFootButton;
@property(retain, nonatomic) UILabel *outsideFootTitleLabel; // @synthesize outsideFootTitleLabel=_outsideFootTitleLabel;
@property(retain, nonatomic) UIView *outsideFootView; // @synthesize outsideFootView=_outsideFootView;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(retain, nonatomic) UIButton *footButton; // @synthesize footButton=_footButton;
@property(retain, nonatomic) UILabel *footTitleLabel; // @synthesize footTitleLabel=_footTitleLabel;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIButton *pointButton; // @synthesize pointButton=_pointButton;
@property(retain, nonatomic) UIImageView *rightBgImageView; // @synthesize rightBgImageView=_rightBgImageView;
@property(retain, nonatomic) AliDetailCouponTableViewCouponCellRightSemicircleView *bgRightSemicircleView; // @synthesize bgRightSemicircleView=_bgRightSemicircleView;
@property(retain, nonatomic) AliDetailCouponTableViewCouponCellSplitView *bgSplitImageView; // @synthesize bgSplitImageView=_bgSplitImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *titleRightImageView; // @synthesize titleRightImageView=_titleRightImageView;
@property(retain, nonatomic) NSMutableArray *titleRightLabelArray; // @synthesize titleRightLabelArray=_titleRightLabelArray;
@property(retain, nonatomic) UILabel *titleLeftLabel; // @synthesize titleLeftLabel=_titleLeftLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) AliDetailCouponTableViewCouponCellCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(copy, nonatomic) CDUnknownBlockType pointButtonClickBlock; // @synthesize pointButtonClickBlock=_pointButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType bottomButtonClickBlock; // @synthesize bottomButtonClickBlock=_bottomButtonClickBlock;
@property(copy, nonatomic) NSNumber *couponType; // @synthesize couponType=_couponType;
@property(retain, nonatomic) AliDetailKitCouponModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)getBottomGapForPointButton;
- (void)setPointButtonStyleForTaobao;
- (void)setPointButtonForTaobao:(id)arg1 enabled:(_Bool)arg2;
- (void)setUpWithModel:(id)arg1 couponType:(id)arg2 enabled:(_Bool)arg3;
- (void)pointButtonClick;
- (void)footButtonClick;
- (_Bool)shouldOutsideFootViewHidden:(id)arg1;
- (_Bool)shouldFootViewHidden:(id)arg1;
- (long long)typeWithModle:(id)arg1;
- (void)setTaobaoSplitImageStyle;
- (id)makeTitleRightLabel;
- (void)setupModelForMianxiQuan:(id)arg1;
- (void)setupStylesForMianxiQuan;
- (void)setupModelForDouble11Allowance:(id)arg1;
- (void)setupStylesForDouble11Allowance;
- (void)layoutSubviews;

@end

