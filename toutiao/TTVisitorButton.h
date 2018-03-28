//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAlphaThemedButton.h"

@class SSThemedLabel, SSThemedView, TTImageView, TTProfileHeaderVisitorModel;

@interface TTVisitorButton : TTAlphaThemedButton
{
    _Bool _expand;
    _Bool _showUpDownArrow;
    TTProfileHeaderVisitorModel *_model;
    SSThemedView *_containerView;
    SSThemedLabel *_textLabel;
    SSThemedLabel *_numberLabel;
    TTImageView *_imageUpAndDown;
}

+ (id)buttonWithModel:(id)arg1;
@property(nonatomic) _Bool showUpDownArrow; // @synthesize showUpDownArrow=_showUpDownArrow;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(retain, nonatomic) TTImageView *imageUpAndDown; // @synthesize imageUpAndDown=_imageUpAndDown;
@property(retain, nonatomic) SSThemedLabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) SSThemedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TTProfileHeaderVisitorModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (double)alphaOfNumberLabel;
- (void)updateImage;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (void)initSubviews;
- (void)dealloc;
- (id)init;

@end
