//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MMMessageChatRoomHorizontalMemberCellDelegate-Protocol.h"
#import "MMMessageChatRoomMemberCellDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBGroupHeaderViewAdapterDelegate-Protocol.h"
#import "WBGroupMemberViewControllerProtocol-Protocol.h"

@class MMMessageChatRoomSearchViewController, MMRoom, NSMutableArray, NSString, WBMessagePRLMTableViewWrapper, WBMessagesManager, WBSearchBar;

@interface MMMessageChatRoomMembersViewController : WBTableViewController <WBGroupMemberViewControllerProtocol, WBGroupHeaderViewAdapterDelegate, MMMessageChatRoomMemberCellDelegate, PRLMTableViewWrapperDelegate, MMMessageChatRoomHorizontalMemberCellDelegate>
{
    MMMessageChatRoomSearchViewController *_searchVC;
    long long _maxSuperAdminNumber;
    long long _maxAdminNumber;
    _Bool _loading;
    NSString *_myRank;
    WBSearchBar *_searchBar;
    WBMessagesManager *_messageManager;
    NSMutableArray *_adminMembers;
    NSMutableArray *_members;
    WBMessagePRLMTableViewWrapper *_prlmWrapper;
    MMRoom *_room;
}

@property(retain, nonatomic) MMRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) WBMessagePRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSMutableArray *adminMembers; // @synthesize adminMembers=_adminMembers;
@property(retain, nonatomic) WBMessagesManager *messageManager; // @synthesize messageManager=_messageManager;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getHeaderView:(long long)arg1 identifier:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableViewIsLoading:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)fetchMoreMembers;
- (void)fetchMembersFromServer;
- (void)didClickedHorizontalMemberAvatar:(id)arg1;
- (void)didClickedAvatar:(id)arg1;
- (void)didClickedGreetButton:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)initWrapper;
- (void)fixTableView;
- (void)loadSubviews;
- (void)pushShutUpVC;
- (void)configRightItem;
- (void)initButtonItem;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRoom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

