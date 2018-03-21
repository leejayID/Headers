//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SharePlatView, UIImage, UIImageView;
@protocol shareSelectDelegate;

@interface takeScreenShotShare : UIView
{
    UIImageView *_takeImageView;
    UIView *_takeImageViewBack;
    double _scale;
    UIView *_topBack;
    UIImage *_shareImage;
    SharePlatView *_widget;
    id <shareSelectDelegate> _delegate;
}

+ (_Bool)isShow;
@property id <shareSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) SharePlatView *widget; // @synthesize widget=_widget;
@property(retain) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(retain) UIView *topBack; // @synthesize topBack=_topBack;
@property double scale; // @synthesize scale=_scale;
@property(retain) UIView *takeImageViewBack; // @synthesize takeImageViewBack=_takeImageViewBack;
@property(retain) UIImageView *takeImageView; // @synthesize takeImageView=_takeImageView;
- (void).cxx_destruct;
- (void)unshow;
- (void)show;
- (void)backGroundClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (id)getScreenShot;
- (void)setPlatCollection:(_Bool)arg1;
- (id)initWithImage:(id)arg1 WithTarget:(id)arg2;

@end
