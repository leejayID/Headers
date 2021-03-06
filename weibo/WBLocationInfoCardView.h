//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIButton, UIImageView, UILabel;
@protocol WBLocationInfoCardViewDelegate;

@interface WBLocationInfoCardView : UIView
{
    NSDictionary *_locationInfo;
    NSString *_mainViewScheme;
    id <WBLocationInfoCardViewDelegate> _delegate;
    id _headerManager;
    UIButton *_mainView;
    UIImageView *_iconView;
    UILabel *_desLabel;
    NSString *_iconName;
}

@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak id headerManager; // @synthesize headerManager=_headerManager;
@property(nonatomic) id <WBLocationInfoCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *mainViewScheme; // @synthesize mainViewScheme=_mainViewScheme;
@property(retain, nonatomic) NSDictionary *locationInfo; // @synthesize locationInfo=_locationInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mainButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

