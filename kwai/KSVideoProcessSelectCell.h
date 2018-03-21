//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSEffect, NSString, UIImageView, UILabel, UIView;

@interface KSVideoProcessSelectCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_selectedBorderView;
    UILabel *_textLabel;
    KSEffect *_effect;
    NSString *_onKVOId;
    UIView *_textLabelBG;
    NSString *_imageId;
}

@property(retain, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property(retain, nonatomic) UIView *textLabelBG; // @synthesize textLabelBG=_textLabelBG;
@property(retain, nonatomic) NSString *onKVOId; // @synthesize onKVOId=_onKVOId;
@property(retain, nonatomic) KSEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *selectedBorderView; // @synthesize selectedBorderView=_selectedBorderView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (_Bool)radioBtnWithEffect:(id)arg1;
- (void)configIconBtnWithEffect:(id)arg1;
- (void)configBackgroundImageBtnWithEffect:(id)arg1;
- (void)drawWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
