//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class ArticleVideoActionButton, ExploreActionButton, ExploreOrderedData, SSThemedLabel, TTAlphaThemedButton, TTAsyncCornerImageView, TTFollowThemeButton, TTIconLabel, TTVideoAdCellShareController, UIImageView, UILabel;

@interface TTVideoCellActionBar : SSThemedView
{
    _Bool _shouldHiddenAvatarView;
    _Bool _shouldHiddenTypeLabel;
    TTAsyncCornerImageView *_avatarView;
    TTIconLabel *_avatarLabel;
    TTAlphaThemedButton *_avatarLabelButton;
    TTAlphaThemedButton *_avatarButton;
    UILabel *_typeLabel;
    SSThemedLabel *_liveCountLabel;
    ExploreActionButton *_adActionButton;
    SSThemedLabel *_countLabel;
    TTAlphaThemedButton *_followButton;
    TTFollowThemeButton *_redPacketFollowButton;
    ArticleVideoActionButton *_commentButton;
    ArticleVideoActionButton *_shareButton;
    ArticleVideoActionButton *_moreButton;
    TTVideoAdCellShareController *_shareController;
    long long _schemeType;
    ExploreOrderedData *_orderedData;
    UIImageView *_indicatorImageView;
}

+ (double)avatarNormalHeight;
+ (double)avatarHeight;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(nonatomic) _Bool shouldHiddenTypeLabel; // @synthesize shouldHiddenTypeLabel=_shouldHiddenTypeLabel;
@property(nonatomic) _Bool shouldHiddenAvatarView; // @synthesize shouldHiddenAvatarView=_shouldHiddenAvatarView;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(nonatomic) long long schemeType; // @synthesize schemeType=_schemeType;
@property(retain, nonatomic) TTVideoAdCellShareController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) ArticleVideoActionButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) ArticleVideoActionButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) ArticleVideoActionButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TTFollowThemeButton *redPacketFollowButton; // @synthesize redPacketFollowButton=_redPacketFollowButton;
@property(retain, nonatomic) TTAlphaThemedButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SSThemedLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) ExploreActionButton *adActionButton; // @synthesize adActionButton=_adActionButton;
@property(retain, nonatomic) SSThemedLabel *liveCountLabel; // @synthesize liveCountLabel=_liveCountLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) TTAlphaThemedButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) TTAlphaThemedButton *avatarLabelButton; // @synthesize avatarLabelButton=_avatarLabelButton;
@property(retain, nonatomic) TTIconLabel *avatarLabel; // @synthesize avatarLabel=_avatarLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopFollowButtonIndicatorAnimating;
- (void)startFollowButtonIndicatorAnimating:(_Bool)arg1;
- (id)randomSourceBackgroundColors;
- (void)layoutSubviewsSchemeLiveIfNeeded;
- (void)layoutSubviewsSchemeADIfNeeded;
- (void)layoutSubviewsSchemeDefaultIfNeeded;
- (void)layoutSubviewsIfNeeded;
- (void)themeChanged:(id)arg1;
- (void)hiddenAllViews;
- (void)refreshWithData:(id)arg1;
- (void)updateShareButtonWithText:(id)arg1;
- (void)updateCommentButtonWithText:(id)arg1;
- (void)updateFollowButtonWithStatus:(_Bool)arg1 hidden:(_Bool)arg2;
- (void)updateCountLabelWithText:(id)arg1;
- (void)updateLiveCountLabelWithText:(id)arg1;
- (void)updateTypeLabelWithText:(id)arg1;
- (void)updateAvatarLabelWithText:(id)arg1;
- (void)updateAvatarViewWithUrl:(id)arg1 sourceText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

