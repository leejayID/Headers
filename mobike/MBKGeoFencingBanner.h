//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MBKGeoFencingBanner : UIView
{
    _Bool _isShow;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_content;
}

@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)unShow;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (id)initWith:(id)arg1 title:(id)arg2 content:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
