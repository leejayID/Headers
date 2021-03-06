//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

#import "ASValuePopUpViewDelegate-Protocol.h"

@class ASValuePopUpView, NSArray, NSNumberFormatter, NSString, UIColor, UIFont;
@protocol ASValueTrackingSliderDataSource, ASValueTrackingSliderDelegate;

@interface ASValueTrackingSlider : UISlider <ASValuePopUpViewDelegate>
{
    NSNumberFormatter *_numberFormatter;
    struct CGSize _defaultPopUpViewSize;
    struct CGSize _popUpViewSize;
    UIColor *_popUpViewColor;
    NSArray *_keyTimes;
    double _valueRange;
    _Bool _isHidePopView;
    _Bool _autoAdjustTrackColor;
    _Bool _popUpViewAlwaysOn;
    UIColor *_textColor;
    UIFont *_font;
    NSArray *_popUpViewAnimatedColors;
    double _popUpViewCornerRadius;
    id <ASValueTrackingSliderDataSource> _dataSource;
    id <ASValueTrackingSliderDelegate> _delegate;
    ASValuePopUpView *_popUpView;
}

@property(nonatomic) _Bool popUpViewAlwaysOn; // @synthesize popUpViewAlwaysOn=_popUpViewAlwaysOn;
@property(retain, nonatomic) ASValuePopUpView *popUpView; // @synthesize popUpView=_popUpView;
@property(nonatomic) __weak id <ASValueTrackingSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASValueTrackingSliderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool autoAdjustTrackColor; // @synthesize autoAdjustTrackColor=_autoAdjustTrackColor;
@property(nonatomic) double popUpViewCornerRadius; // @synthesize popUpViewCornerRadius=_popUpViewCornerRadius;
@property(retain, nonatomic) NSArray *popUpViewAnimatedColors; // @synthesize popUpViewAnimatedColors=_popUpViewAnimatedColors;
@property(nonatomic) _Bool isHidePopView; // @synthesize isHidePopView=_isHidePopView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setValue:(float)arg1;
- (void)didMoveToWindow;
- (void)_showPopUpView;
- (struct CGRect)thumbRect;
- (id)keyTimesFromSliderPositions:(id)arg1;
- (void)calculatePopUpViewSize;
- (void)autoColorTrack;
- (void)adjustPopUpViewFrame;
- (void)positionAndUpdatePopUpView;
- (void)didBecomeActiveNotification:(id)arg1;
- (void)setup;
- (double)currentValueOffset;
- (void)popUpViewDidHide;
- (void)colorAnimationDidStart;
- (void)hidePopUpView;
- (void)showPopUpView;
@property(copy, nonatomic) NSNumberFormatter *numberFormatter;
- (void)setMaxFractionDigitsDisplayed:(unsigned long long)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setMaximumValue:(float)arg1;
- (void)setPopUpViewAnimatedColors:(id)arg1 withPositions:(id)arg2;
@property(retain, nonatomic) UIColor *popUpViewColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

