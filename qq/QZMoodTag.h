//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol QZMoodTagDelegate;

@interface QZMoodTag : UIView
{
    _Bool _isClickToDelete;
    UIImageView *_imageView;
    id <QZMoodTagDelegate> _delegate;
    UIButton *_delBtn;
    UILabel *_textLabel;
}

@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(nonatomic) __weak id <QZMoodTagDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setViewFrame:(id)arg1;
- (void)setViewHidden:(id)arg1;
- (void)changeToDelete;
- (void)changeToNotDelete;
- (void)delBtnClick:(id)arg1;
- (void)click:(id)arg1;
- (void)layoutSubviews;
- (void)addSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
