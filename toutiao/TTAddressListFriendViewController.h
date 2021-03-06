//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTRouteInitializeProtocol-Protocol.h"
#import "TTWeChatShareDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SSThemedTableView, TTAddressListFriendHeaderView, TTInviteFriendListViewModel;

@interface TTAddressListFriendViewController : SSViewControllerBase <UITableViewDelegate, UITableViewDataSource, TTWeChatShareDelegate, TTRouteInitializeProtocol>
{
    SSThemedTableView *_tableView;
    TTInviteFriendListViewModel *_viewModel;
    TTAddressListFriendHeaderView *_addFriendHeader;
    TTAddressListFriendHeaderView *_inviteHeader;
}

@property(retain, nonatomic) TTAddressListFriendHeaderView *inviteHeader; // @synthesize inviteHeader=_inviteHeader;
@property(retain, nonatomic) TTAddressListFriendHeaderView *addFriendHeader; // @synthesize addFriendHeader=_addFriendHeader;
@property(retain, nonatomic) TTInviteFriendListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)weChatShare:(id)arg1 sharedWithError:(id)arg2 customCallbackUserInfo:(id)arg3;
- (id)defaultIconImg;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)followAllSelectedPeople:(CDUnknownBlockType)arg1;
- (void)followAllButtonClicked:(id)arg1;
- (void)refreshAddHeaderTotal;
- (void)bindRAC;
- (void)constraintsViews;
- (void)setupViews;
- (void)updateFollowStateNotification:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

