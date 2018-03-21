//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MOPItemCategory, NSString, UIColor, UIFont, UIImageView, UILabel;
@protocol EWTabMenuItemDelegate;

@interface EWListMenuItem : UIView
{
    float _padding;
    id <EWTabMenuItemDelegate> _delegate;
    NSString *_tagIconName;
    UILabel *_label;
    MOPItemCategory *_category;
    UIColor *_color;
    UIFont *_font;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) MOPItemCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) float padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSString *tagIconName; // @synthesize tagIconName=_tagIconName;
@property(nonatomic) __weak id <EWTabMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inactive;
- (void)active;
- (void)tapHandle:(id)arg1;
- (void)bindEvent;
- (void)createViews;
- (id)initWithCategory:(id)arg1 padding:(unsigned long long)arg2 color:(id)arg3 tintColor:(id)arg4 font:(id)arg5;

@end
