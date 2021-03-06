//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUserProfileViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"

@class KSMessageView, NSString;

@interface KSMyProfileViewController : KSUserProfileViewController <UIImagePickerControllerDelegate>
{
    _Bool _shouldDismissModalWhileTappingBackButton;
    _Bool _panBackGestureEnabled;
    _Bool _isRefreshDataWhenAppear;
    _Bool _chooseFromCamera;
    KSMessageView *_banMessageView;
    NSString *_friendsJoinNotifyKVOToken;
}

@property(retain, nonatomic) NSString *friendsJoinNotifyKVOToken; // @synthesize friendsJoinNotifyKVOToken=_friendsJoinNotifyKVOToken;
@property(nonatomic) _Bool chooseFromCamera; // @synthesize chooseFromCamera=_chooseFromCamera;
@property(nonatomic) _Bool isRefreshDataWhenAppear; // @synthesize isRefreshDataWhenAppear=_isRefreshDataWhenAppear;
@property(retain, nonatomic) KSMessageView *banMessageView; // @synthesize banMessageView=_banMessageView;
@property(nonatomic) _Bool panBackGestureEnabled; // @synthesize panBackGestureEnabled=_panBackGestureEnabled;
@property(nonatomic) _Bool shouldDismissModalWhileTappingBackButton; // @synthesize shouldDismissModalWhileTappingBackButton=_shouldDismissModalWhileTappingBackButton;
- (void).cxx_destruct;
- (_Bool)ks_presentViewNeedUserAvailable;
- (void)setNumberBadgeHidden:(_Bool)arg1 number:(id)arg2 inButton:(id)arg3;
- (void)showBanMessageView;
- (void)chooseImage:(_Bool)arg1;
- (void)showUnbanView;
- (void)applyUnban;
- (void)didReceiveRefreshDataWhenAppear;
- (void)updateBannerImage:(id)arg1;
- (void)showPhotoCropViewControllerWithImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)userProfileHeaderView:(id)arg1 didTapInfoBtn:(id)arg2;
- (void)userProfileHeaderView:(id)arg1 didTapSettingBtn:(id)arg2;
- (void)userProfileHeaderView:(id)arg1 didTapHeaderView:(id)arg2;
- (void)userProfileHeaderView:(id)arg1 didTapUserHeaderView:(id)arg2;
- (void)userProfileHeaderView:(id)arg1 didTapFollowUsersBtn:(id)arg2;
- (_Bool)enableShowUsersRecommend;
- (void)reloadRecommendUsers;
- (void)modelDidFinishLoad:(id)arg1;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (void)didTapExploreFriendsButton;
- (void)showAvatarEditView;
- (void)didTapLeftNavigationButton:(id)arg1;
- (void)userDidLogin;
- (void)didDragToRefresh;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUserInfo;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

