//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface QQNavigationDoubleButtonView : UIButton
{
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)updateButtonColor:(id)arg1;
- (void)updateButton:(id)arg1 color:(id)arg2;
- (void)reloadAppearance;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithLeftButton:(id)arg1 rightButton:(id)arg2;

@end
