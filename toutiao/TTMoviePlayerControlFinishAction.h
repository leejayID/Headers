//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SSThemedLabel, TTAlphaThemedButton, UIView;

@interface TTMoviePlayerControlFinishAction : NSObject
{
    _Bool _isFullMode;
    TTAlphaThemedButton *_replayButton;
    TTAlphaThemedButton *_shareButton;
    SSThemedLabel *_replayLabel;
    SSThemedLabel *_shareLabel;
    TTAlphaThemedButton *_moreButton;
    UIView *_baseView;
    UIView *_backView;
    UIView *_containerView;
    double _bannerHeight;
}

@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) _Bool isFullMode; // @synthesize isFullMode=_isFullMode;
@property(retain, nonatomic) TTAlphaThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) SSThemedLabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) SSThemedLabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) TTAlphaThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTAlphaThemedButton *replayButton; // @synthesize replayButton=_replayButton;
- (void).cxx_destruct;
- (void)updateFinishActionItemsFrameWithBannerHeight:(double)arg1;
- (void)layoutSubviews;
- (void)refreshSubViews:(_Bool)arg1;
- (id)initWithBaseView:(id)arg1;

@end
