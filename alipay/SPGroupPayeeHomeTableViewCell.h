//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPGroupBorderLineTableViewCell.h"

@class SPGroupPayeeViewModel, UIImageView, UILabel, UIView;

@interface SPGroupPayeeHomeTableViewCell : SPGroupBorderLineTableViewCell
{
    SPGroupPayeeViewModel *_viewModel;
    UIImageView *_bizIconView;
    UILabel *_bizTitleLabel;
    UILabel *_bizSubTitleLabel;
    UIView *_containerView;
}

+ (id)cellIdentifier;
+ (double)cellHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *bizSubTitleLabel; // @synthesize bizSubTitleLabel=_bizSubTitleLabel;
@property(retain, nonatomic) UILabel *bizTitleLabel; // @synthesize bizTitleLabel=_bizTitleLabel;
@property(retain, nonatomic) UIImageView *bizIconView; // @synthesize bizIconView=_bizIconView;
@property(retain, nonatomic) SPGroupPayeeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)buildCell;
- (void)reloadData:(id)arg1 position:(long long)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

