//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>

@class NSString, UIButton, UILabel;
@protocol QQReadInJoySubsChannelHeaderDelegate;

@interface QQReadInJoyTopicChannelHeader : UIView <QUIActionSheetDelegate>
{
    id <QQReadInJoySubsChannelHeaderDelegate> _delegate;
    UILabel *_channelTitleLabel;
    UILabel *_channelInfoLabel;
    UIButton *_followButton;
}

@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *channelInfoLabel; // @synthesize channelInfoLabel=_channelInfoLabel;
@property(retain, nonatomic) UILabel *channelTitleLabel; // @synthesize channelTitleLabel=_channelTitleLabel;
@property(nonatomic) __weak id <QQReadInJoySubsChannelHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)headerShowNavOffset;
- (void)setTitleOnFollowButton:(_Bool)arg1;
- (void)setFollowNumber:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickFollow:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
