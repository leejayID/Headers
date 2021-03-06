//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMusicDetailBaseHeaderView.h"

@class AWEBodydanceRankView, AWEDynamicLabel, AWEMusicModel, AWERelatedChallengeMusicView, AWEUserCountDescView, UIButton, UIImageView, UILabel, UIView;

@interface AWEMusicDetailHeaderView : AWEMusicDetailBaseHeaderView
{
    UIImageView *_headerBackgroundView;
    UIImageView *_CDBackroundView;
    UIImageView *_coverImageView;
    UIImageView *_playImageView;
    UILabel *_authorNameLabel;
    AWEDynamicLabel *_descriptionLabel;
    AWEUserCountDescView *_userCountView;
    UIButton *_editTitleButton;
    UIButton *_appleMusicButton;
    UIView *_separateLineView;
    AWERelatedChallengeMusicView *_relatedView;
    AWEMusicModel *_audioModel;
    AWEBodydanceRankView *_bodydanceRankView;
    UIButton *_musicPlanEntryButton;
    UIImageView *_musicPlanEntryImageView;
    UIImageView *_ostIconImageView;
}

@property(retain, nonatomic) UIImageView *ostIconImageView; // @synthesize ostIconImageView=_ostIconImageView;
@property(retain, nonatomic) UIImageView *musicPlanEntryImageView; // @synthesize musicPlanEntryImageView=_musicPlanEntryImageView;
@property(retain, nonatomic) UIButton *musicPlanEntryButton; // @synthesize musicPlanEntryButton=_musicPlanEntryButton;
@property(retain, nonatomic) AWEBodydanceRankView *bodydanceRankView; // @synthesize bodydanceRankView=_bodydanceRankView;
@property(retain, nonatomic) AWEMusicModel *audioModel; // @synthesize audioModel=_audioModel;
@property(retain, nonatomic) AWERelatedChallengeMusicView *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIButton *appleMusicButton; // @synthesize appleMusicButton=_appleMusicButton;
@property(retain, nonatomic) UIButton *editTitleButton; // @synthesize editTitleButton=_editTitleButton;
@property(retain, nonatomic) AWEUserCountDescView *userCountView; // @synthesize userCountView=_userCountView;
@property(retain, nonatomic) AWEDynamicLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *CDBackroundView; // @synthesize CDBackroundView=_CDBackroundView;
@property(retain, nonatomic) UIImageView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
- (void).cxx_destruct;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)pauseAudio;
- (void)reloadWithScrollOffset:(double)arg1;
- (void)didMoveToSuperview;
- (void)albumPlayClick:(id)arg1;
- (void)switchPlayStatus;
- (void)_refreshAudioStatus:(unsigned long long)arg1;
- (void)resumeAnimationWithLayer:(id)arg1;
- (void)pauseAnimationWithLayer:(id)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)editTitleClick;
- (void)ownerNicknameClick:(id)arg1;
- (void)appleMusicClick;
- (void)updateWithModel:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

