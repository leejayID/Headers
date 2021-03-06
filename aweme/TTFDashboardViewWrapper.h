//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSObject, TTFDashboardView, TTFResurrectionView, UIButton, UIImageView, UILabel;
@protocol TTFDashboardViewWrapperDelegate;

@interface TTFDashboardViewWrapper : UIView
{
    NSObject<TTFDashboardViewWrapperDelegate> *_delegate;
    UIImageView *_bannerImageView;
    UIButton *_avatarButton;
    UIButton *_closeButton;
    UIView *_dashboardContainerView;
    TTFDashboardView *_dashboardView;
    TTFResurrectionView *_resurrectionView;
    UIButton *_enterAgainButton;
    UILabel *_enterAgainTextLabel;
    LOTAnimationView *_enterAgainAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *enterAgainAnimationView; // @synthesize enterAgainAnimationView=_enterAgainAnimationView;
@property(retain, nonatomic) UILabel *enterAgainTextLabel; // @synthesize enterAgainTextLabel=_enterAgainTextLabel;
@property(retain, nonatomic) UIButton *enterAgainButton; // @synthesize enterAgainButton=_enterAgainButton;
@property(retain, nonatomic) TTFResurrectionView *resurrectionView; // @synthesize resurrectionView=_resurrectionView;
@property(retain, nonatomic) TTFDashboardView *dashboardView; // @synthesize dashboardView=_dashboardView;
@property(retain, nonatomic) UIView *dashboardContainerView; // @synthesize dashboardContainerView=_dashboardContainerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak NSObject<TTFDashboardViewWrapperDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enterAgainAnimationChangeIsPlay:(_Bool)arg1;
- (void)getAvatarButtonImage;
- (void)dashboardContainerViewHidden:(_Bool)arg1;
- (void)enterAgainButtonDidClicked:(id)arg1;
- (void)closeDashboard:(id)arg1;
- (void)resurrection:(id)arg1;
- (void)signUp:(id)arg1;
- (void)clickAvatarButton:(id)arg1;
- (void)clickHelp:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (void)inputInvitationCode:(id)arg1;
- (void)enterTopListViewController;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)ttf_setupConstraint;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

