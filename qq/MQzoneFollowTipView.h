//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol MQzoneFollowTipViewDelegate;

@interface MQzoneFollowTipView : UIView
{
    UILabel *_textLabel;
    UIImageView *_backgroundView;
    id <MQzoneFollowTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MQzoneFollowTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)rightButtonClicked:(id)arg1;
- (void)leftButtonClicked:(id)arg1;
- (id)initWithBackgroudImage:(id)arg1 text:(id)arg2 textLine:(long long)arg3 leftIcon:(id)arg4 isUpArrow:(_Bool)arg5 capPoint:(struct CGPoint)arg6 showButton:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBackgroudImage:(id)arg1 text:(id)arg2 textLine:(long long)arg3 leftIcon:(id)arg4;
- (id)initWithBackgroudImage:(id)arg1 text:(id)arg2;
- (id)initWithBackgroudImage:(id)arg1 text:(id)arg2 textLine:(long long)arg3 leftIcon:(id)arg4 isUpArrow:(_Bool)arg5;
- (id)initWithBackgroudImage:(id)arg1 text:(id)arg2 textLine:(long long)arg3 leftIcon:(id)arg4 isUpArrow:(_Bool)arg5 capPoint:(struct CGPoint)arg6;

@end
