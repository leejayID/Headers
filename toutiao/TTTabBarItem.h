//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class LOTAnimationView, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTBadgeNumberView, UIColor, UIFont, UIImage, UIViewController;

@interface TTTabBarItem : SSThemedView
{
    _Bool _isRegular;
    UIFont *_titleFont;
    UIColor *_normalTitleColor;
    UIColor *_highlightedTitleColor;
    CDUnknownBlockType _selectedBlock;
    unsigned long long _state;
    SSThemedImageView *_imageView;
    double _ttBadgeOffsetV;
    unsigned long long _index;
    NSString *_identifier;
    UIViewController *_viewController;
    LOTAnimationView *_animationView;
    NSString *_title;
    SSThemedButton *_tabBarButton;
    SSThemedLabel *_titleLabel;
    UIImage *_noralImage;
    UIImage *_highlightedImage;
    UIImage *_loadingImage;
    TTBadgeNumberView *_ttBadgeView;
}

+ (void)syncAllCachedBounds;
+ (void)initialize;
@property(retain, nonatomic) TTBadgeNumberView *ttBadgeView; // @synthesize ttBadgeView=_ttBadgeView;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *noralImage; // @synthesize noralImage=_noralImage;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool isRegular; // @synthesize isRegular=_isRegular;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double ttBadgeOffsetV; // @synthesize ttBadgeOffsetV=_ttBadgeOffsetV;
@property(retain, nonatomic) SSThemedImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) UIColor *highlightedTitleColor; // @synthesize highlightedTitleColor=_highlightedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)didSelect:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)changeImageViewIfNeed;
- (void)setNormalImage:(id)arg1 highlightedImage:(id)arg2 loadingImage:(id)arg3;
- (void)reloadSurface;
- (void)layoutSubviews;
- (void)layoutBadgeView;
- (void)layoutImageAndTitleView;
- (void)layoutTabBarButton;
- (void)setupDefualtProperties;
- (void)setupImageAndTitleView;
- (void)setupTabBarButton;
- (id)initWithIdentifier:(id)arg1 viewController:(id)arg2 index:(unsigned long long)arg3 isRegular:(_Bool)arg4;
- (id)init;

@end

