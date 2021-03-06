//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliDetailPresalesSVIPBannerModel, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface AliDetailPresalesSVIPBanner : UIView
{
    AliDetailPresalesSVIPBannerModel *_bannerModel;
    NSString *_eventToken;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tap;
    UIImageView *_backgroundImage;
    UIImageView *_avatarImage;
    UIImageView *_hatImage;
    UIImageView *_grayMask;
    UILabel *_arrowLabel;
}

@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UIImageView *grayMask; // @synthesize grayMask=_grayMask;
@property(retain, nonatomic) UIImageView *hatImage; // @synthesize hatImage=_hatImage;
@property(retain, nonatomic) UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) AliDetailPresalesSVIPBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

