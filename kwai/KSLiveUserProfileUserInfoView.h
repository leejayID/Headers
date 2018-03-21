//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSLiveUserProfileViewProtocol-Protocol.h"

@class KSEdgeRoundImageView, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface KSLiveUserProfileUserInfoView : UIView <KSLiveUserProfileViewProtocol>
{
    KSEdgeRoundImageView *_userHeaderView;
    UIButton *_moreButton;
    UIButton *_followersButton;
    UIButton *_followingButton;
    long long _layout;
    NSLayoutConstraint *_headerViewWidth;
    NSLayoutConstraint *_headerViewHeight;
    UIImageView *_vIcon;
    UILabel *_nameLabel;
    UIImageView *_adminTypeImageView;
    NSLayoutConstraint *_followersWidth;
    NSLayoutConstraint *_followingWidth;
}

@property(nonatomic) __weak NSLayoutConstraint *followingWidth; // @synthesize followingWidth=_followingWidth;
@property(nonatomic) __weak NSLayoutConstraint *followersWidth; // @synthesize followersWidth=_followersWidth;
@property(retain, nonatomic) UIImageView *adminTypeImageView; // @synthesize adminTypeImageView=_adminTypeImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vIcon; // @synthesize vIcon=_vIcon;
@property(nonatomic) __weak NSLayoutConstraint *headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *headerViewWidth; // @synthesize headerViewWidth=_headerViewWidth;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIButton *followingButton; // @synthesize followingButton=_followingButton;
@property(retain, nonatomic) UIButton *followersButton; // @synthesize followersButton=_followersButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) KSEdgeRoundImageView *userHeaderView; // @synthesize userHeaderView=_userHeaderView;
- (void).cxx_destruct;
- (void)layoutDidUpdateWith:(long long)arg1;
- (void)updateWithUserProfile:(id)arg1;
- (void)updateWithAdminType:(short)arg1 sketchyUser:(id)arg2;
- (void)_updateFitButtonIfNeed;
- (void)_initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
