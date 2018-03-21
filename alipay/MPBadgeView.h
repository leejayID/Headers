//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPAbsBadgeView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface MPBadgeView : MPAbsBadgeView
{
    UILabel *_titleLabel;
    NSString *_lastStyle;
    UIImageView *_badgeImageView;
    UIImage *_badgeImage;
}

@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
- (void).cxx_destruct;
- (_Bool)isLastStyle:(id)arg1;
- (void)drawBadgeNumber:(id)arg1;
- (void)drawBadgeFuKa;
- (void)drawBadgeRedEnvelope;
- (void)drawBadgeXin;
- (void)drawBadgeFavour;
- (void)drawBadgeNew;
- (void)drawBadgeRedPoint;
- (void)drawBadgeStyle:(id)arg1;
- (struct CGSize)sizeWithString:(id)arg1 withFont:(id)arg2;
- (id)bundledImageNamed:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
