//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TBLiveOnlinePlayerView : UIView
{
    _Bool _allowSwitch;
    _Bool _allowReset;
    _Bool _switchOn;
    UIButton *_onlineLable;
    UILabel *_playerComeLable;
    UIImageView *_identifyImageView;
    long long _totalUserCount;
    long long _onlineUserCount;
}

+ (struct CGSize)viewSize;
@property(nonatomic) long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) long long totalUserCount; // @synthesize totalUserCount=_totalUserCount;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(retain, nonatomic) UIImageView *identifyImageView; // @synthesize identifyImageView=_identifyImageView;
@property(retain, nonatomic) UILabel *playerComeLable; // @synthesize playerComeLable=_playerComeLable;
@property(retain, nonatomic) UIButton *onlineLable; // @synthesize onlineLable=_onlineLable;
@property(nonatomic) _Bool allowReset; // @synthesize allowReset=_allowReset;
@property(nonatomic) _Bool allowSwitch; // @synthesize allowSwitch=_allowSwitch;
- (void).cxx_destruct;
- (void)onSwitchUserCounter:(id)arg1;
- (void)refreshWithOnlineUserCount;
- (void)refreshWithTotalUserCount;
- (void)refreshWithCount:(long long)arg1 type:(long long)arg2;
- (void)refreshWithPlayerNick:(id)arg1 identification:(id)arg2;
- (void)addGradientLayer;
- (void)resetLayout;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
