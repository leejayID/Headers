//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface QQ2018BigAdButton : UIView
{
    long long _promotionId;
    UIButton *_closeButton;
    UIImageView *_adImageView;
}

@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) long long promotionId; // @synthesize promotionId=_promotionId;
- (void)setAdImage:(id)arg1;
- (id)initWithPromotionId:(long long)arg1;
- (void)dealloc;

@end
