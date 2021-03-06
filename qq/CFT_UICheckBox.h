//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol UICheckBoxDelegate;

@interface CFT_UICheckBox : UIView
{
    UIButton *pCheckView_;
    UILabel *pTitleLabel_;
    int offsetX_;
    id <UICheckBoxDelegate> _delegate;
}

@property(nonatomic) id <UICheckBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCheck;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetSize;
- (void)checked:(_Bool)arg1;
- (_Bool)checked;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setImage:(id)arg1 forState:(int)arg2;
- (void)dealloc;
- (void)buttonSelected:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

