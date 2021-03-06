//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol PushBannerViewAnimationDelegate, PushBannerViewDelegate;

@interface QQPushBannerView : UIView
{
    int _bannerType;
    UIImageView *_bannerImageView;
    id <PushBannerViewDelegate> _delegate;
    id <PushBannerViewAnimationDelegate> _aniDelegate;
    _Bool _picAltering;
}

@property(nonatomic) id <PushBannerViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_aniDelegate;
@property(nonatomic) int bannerType; // @synthesize bannerType=_bannerType;
- (void)dealloc;
- (void)disappear;
- (void)appear;
- (id)getViewImage;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

