//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UIImageView, UILabel;

@interface MVCommonAlertView : UIView
{
    UIView *_containerView;
    UIImageView *_posterImageView;
    UIImageView *_iconTitleImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_okButton;
    UIButton *_closeButton;
    CDUnknownBlockType _didClickOkBtnBlock;
    CDUnknownBlockType _didClickCloseBtnBlock;
    NSMutableArray *_buttonArray;
}

@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(copy, nonatomic) CDUnknownBlockType didClickCloseBtnBlock; // @synthesize didClickCloseBtnBlock=_didClickCloseBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickOkBtnBlock; // @synthesize didClickOkBtnBlock=_didClickOkBtnBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconTitleImageView; // @synthesize iconTitleImageView=_iconTitleImageView;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)didClickCloseBtn:(id)arg1;
- (void)didClickOkBtn:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

