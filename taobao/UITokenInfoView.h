//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UITextView;

@interface UITokenInfoView : UIView
{
    UITextView *_textView;
    UIButton *_addBtn;
    UIButton *_cleanBtn;
    UIButton *_applyBtn;
}

@property(retain, nonatomic) UIButton *applyBtn; // @synthesize applyBtn=_applyBtn;
@property(retain, nonatomic) UIButton *cleanBtn; // @synthesize cleanBtn=_cleanBtn;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

