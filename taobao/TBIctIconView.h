//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, UIImageView, UILabel;

@interface TBIctIconView : UIButton
{
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_statusLabel;
    UILabel *_unStatusLabel;
    NSArray *_iconFontNames;
}

@property(retain, nonatomic) NSArray *iconFontNames; // @synthesize iconFontNames=_iconFontNames;
@property(retain, nonatomic) UILabel *unStatusLabel; // @synthesize unStatusLabel=_unStatusLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)dealFont:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconFontNames:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
