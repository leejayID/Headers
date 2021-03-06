//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLConductTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface WBNLConductLeftTitleViewCell : WBNLConductTableViewCell
{
    UIImageView *_bgView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    NSString *_bgUrl;
    NSString *_iconUrl;
    NSString *_title;
}

+ (double)cellHeight;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *bgUrl; // @synthesize bgUrl=_bgUrl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)initView;
- (void)initData;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

