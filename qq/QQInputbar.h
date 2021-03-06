//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class ArkActiveSearchLeftView, NSLayoutConstraint, NSString, QQInputAccessoryView, QQInputDefaultTextView, QQInputTextViewController, QQMarioButton, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface QQInputbar : UIView <UIGestureRecognizerDelegate>
{
    _Bool _shouldShowTipsLabel;
    _Bool _isCustomStyle;
    QQInputTextViewController *_controller;
    QQInputDefaultTextView *_aioTextView;
    QQInputAccessoryView *_accessoryView;
    UILabel *_tipsLabel;
    UIImageView *_backgroundCapImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_textViewBackgroundImageView;
    UIButton *_leftLButton;
    UIButton *_leftRButton;
    UIButton *_rightLButton;
    UIButton *_rightRButton;
    QQMarioButton *_marioButton;
    ArkActiveSearchLeftView *_arkSearchView;
    long long _style;
    unsigned long long _maxCharCount;
    Class _textViewClass;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSLayoutConstraint *_aioTextViewHC;
    NSLayoutConstraint *_aioTextViewWC;
    NSLayoutConstraint *_accessoryViewHC;
    NSLayoutConstraint *_leftLButtonWC;
    NSLayoutConstraint *_leftRButtonWC;
    NSLayoutConstraint *_rightLButtonWC;
    NSLayoutConstraint *_rightRButtonWC;
    NSLayoutConstraint *_leftMargin;
    NSLayoutConstraint *_rightMargin;
    NSLayoutConstraint *_leftSpacingC;
    NSLayoutConstraint *_leftSpacingC2;
    NSLayoutConstraint *_rightSpacingC;
    NSLayoutConstraint *_rightSpacingC2;
    NSLayoutConstraint *_flashButtonRC;
    NSLayoutConstraint *_flashButtonBC;
    NSLayoutConstraint *_arkSearchViewLC;
    NSLayoutConstraint *_arkSearchViewBC;
    NSLayoutConstraint *_textViewBgImgViewTopC;
    struct UIEdgeInsets _contentInset;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *textViewBgImgViewTopC; // @synthesize textViewBgImgViewTopC=_textViewBgImgViewTopC;
@property(retain, nonatomic) NSLayoutConstraint *arkSearchViewBC; // @synthesize arkSearchViewBC=_arkSearchViewBC;
@property(retain, nonatomic) NSLayoutConstraint *arkSearchViewLC; // @synthesize arkSearchViewLC=_arkSearchViewLC;
@property(retain, nonatomic) NSLayoutConstraint *flashButtonBC; // @synthesize flashButtonBC=_flashButtonBC;
@property(retain, nonatomic) NSLayoutConstraint *flashButtonRC; // @synthesize flashButtonRC=_flashButtonRC;
@property(retain, nonatomic) NSLayoutConstraint *rightSpacingC2; // @synthesize rightSpacingC2=_rightSpacingC2;
@property(retain, nonatomic) NSLayoutConstraint *rightSpacingC; // @synthesize rightSpacingC=_rightSpacingC;
@property(retain, nonatomic) NSLayoutConstraint *leftSpacingC2; // @synthesize leftSpacingC2=_leftSpacingC2;
@property(retain, nonatomic) NSLayoutConstraint *leftSpacingC; // @synthesize leftSpacingC=_leftSpacingC;
@property(retain, nonatomic) NSLayoutConstraint *rightMargin; // @synthesize rightMargin=_rightMargin;
@property(retain, nonatomic) NSLayoutConstraint *leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) NSLayoutConstraint *rightRButtonWC; // @synthesize rightRButtonWC=_rightRButtonWC;
@property(retain, nonatomic) NSLayoutConstraint *rightLButtonWC; // @synthesize rightLButtonWC=_rightLButtonWC;
@property(retain, nonatomic) NSLayoutConstraint *leftRButtonWC; // @synthesize leftRButtonWC=_leftRButtonWC;
@property(retain, nonatomic) NSLayoutConstraint *leftLButtonWC; // @synthesize leftLButtonWC=_leftLButtonWC;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHC; // @synthesize accessoryViewHC=_accessoryViewHC;
@property(retain, nonatomic) NSLayoutConstraint *aioTextViewWC; // @synthesize aioTextViewWC=_aioTextViewWC;
@property(retain, nonatomic) NSLayoutConstraint *aioTextViewHC; // @synthesize aioTextViewHC=_aioTextViewHC;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) Class textViewClass; // @synthesize textViewClass=_textViewClass;
@property(nonatomic) _Bool isCustomStyle; // @synthesize isCustomStyle=_isCustomStyle;
@property(nonatomic) unsigned long long maxCharCount; // @synthesize maxCharCount=_maxCharCount;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) ArkActiveSearchLeftView *arkSearchView; // @synthesize arkSearchView=_arkSearchView;
@property(retain, nonatomic) QQMarioButton *marioButton; // @synthesize marioButton=_marioButton;
@property(retain, nonatomic) UIButton *rightRButton; // @synthesize rightRButton=_rightRButton;
@property(retain, nonatomic) UIButton *rightLButton; // @synthesize rightLButton=_rightLButton;
@property(retain, nonatomic) UIButton *leftRButton; // @synthesize leftRButton=_leftRButton;
@property(retain, nonatomic) UIButton *leftLButton; // @synthesize leftLButton=_leftLButton;
@property(retain, nonatomic) UIImageView *textViewBackgroundImageView; // @synthesize textViewBackgroundImageView=_textViewBackgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundCapImageView; // @synthesize backgroundCapImageView=_backgroundCapImageView;
@property(nonatomic) _Bool shouldShowTipsLabel; // @synthesize shouldShowTipsLabel=_shouldShowTipsLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) QQInputAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) QQInputDefaultTextView *aioTextView; // @synthesize aioTextView=_aioTextView;
@property(nonatomic) __weak QQInputTextViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)updateReceiptMsgTipsLabelContent;
- (void)hideArkSearchView:(_Bool)arg1;
- (void)hideMarioButton:(_Bool)arg1;
- (void)pan:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateConstraintConstants;
- (void)setupViewConstraints;
- (void)didChangeTextViewContentSize:(id)arg1;
- (void)didChangeTextViewText:(id)arg1;
- (void)willShowLoupe:(id)arg1;
- (void)hideAccessoryView;
- (void)setBackgroundColor:(id)arg1;
- (void)setInputbarStyle:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)bottomHalfAvailable;
- (_Bool)topHalfAvailable;
- (unsigned long long)defaultNumberOfLines;
@property(readonly, nonatomic) _Bool limitExceeded;
- (void)adjustTextViewHeightForLines:(unsigned long long)arg1;
- (double)inputBarHeightForLines:(unsigned long long)arg1;
- (double)deltaInputbarHeightForLines:(unsigned long long)arg1;
@property(readonly, nonatomic) double appropriateHeight;
@property(readonly, nonatomic) double minimumInputbarHeight;
- (_Bool)isViewVisible;
- (id)marioButtonInit;
- (struct CGSize)intrinsicContentSize;
- (void)layoutIfNeeded;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTextViewClass:(Class)arg1;
- (void)setupAccessibility;
- (id)imageNamesForButton:(id)arg1;
- (void)resetInputbarButton:(id)arg1;
- (void)resetInputbarButtons:(id)arg1;
- (void)toggleImageNamesForButton:(id)arg1;
- (void)hidePTTButton;
- (void)showPublicPlatformButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

