//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class BEEGradientColorView, CCRSavedCard, NSString, UIImageView, UILabel, UIView;
@protocol CCRCardCellDelegate;

@interface CCRCardCell : APTableViewCell
{
    BEEGradientColorView *_groundView;
    UIView *_shadowView;
    UIView *_logoView;
    UIImageView *_logoImageView;
    UILabel *_bankNameLabel;
    UILabel *_holderNameLabel;
    UILabel *_cardNOLabel1;
    UILabel *_cardNOLabel2;
    UILabel *_state1Label;
    UILabel *_state2Label;
    UILabel *_cardMemoLabel;
    NSString *_iconUrl;
    id <CCRCardCellDelegate> _delegate;
    CCRSavedCard *_model;
}

+ (double)cellHeight;
@property(retain, nonatomic) CCRSavedCard *model; // @synthesize model=_model;
@property(nonatomic) __weak id <CCRCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)attributeTextFromLabelText:(id)arg1;
- (void)cardClicked:(id)arg1;
- (void)billAreaClicked:(id)arg1;
- (void)repayButtonClicked:(id)arg1;
- (double)groundHeight;
- (double)groundWidth;
- (void)setIconImageView:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

