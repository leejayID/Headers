//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol APEmojiBoardViewDelegate;

@interface APEmojiBoardView : UIView
{
    int _editStyle;
    id <APEmojiBoardViewDelegate> _delegate;
    UIButton *_emojiBtn;
}

@property(retain, nonatomic) UIButton *emojiBtn; // @synthesize emojiBtn=_emojiBtn;
@property(nonatomic) __weak id <APEmojiBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int editStyle; // @synthesize editStyle=_editStyle;
- (void).cxx_destruct;
- (double)getOnePx;
- (void)dealloc;
- (void)emojiTaped:(id)arg1;
- (id)initWithHeight:(double)arg1 emojiBtnFrame:(struct CGRect)arg2;

@end

