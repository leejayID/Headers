//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

#import "APGroupListViewControllerDelegate-Protocol.h"

@class ACAppManager, APGroupListViewController, APRecentContact, APSearchBar, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface APContactFriendViewController : APContactBaseViewController <APGroupListViewControllerDelegate>
{
    _Bool _realNameVerified;
    _Bool _didCheckEnterFriendPage;
    NSMutableArray *_customerItems;
    APGroupListViewController *_groupListController;
    APRecentContact *_friendRecent;
    long long _totalCount;
    UIView *_footerView;
    UILabel *_footerLabel;
    APSearchBar *_searchBar;
    ACAppManager *_appManager;
    NSArray *_contactFriendApps;
}

@property(nonatomic) _Bool didCheckEnterFriendPage; // @synthesize didCheckEnterFriendPage=_didCheckEnterFriendPage;
@property(retain, nonatomic) NSArray *contactFriendApps; // @synthesize contactFriendApps=_contactFriendApps;
@property(retain, nonatomic) ACAppManager *appManager; // @synthesize appManager=_appManager;
@property(nonatomic) _Bool realNameVerified; // @synthesize realNameVerified=_realNameVerified;
@property(retain, nonatomic) APSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) APRecentContact *friendRecent; // @synthesize friendRecent=_friendRecent;
@property(retain, nonatomic) APGroupListViewController *groupListController; // @synthesize groupListController=_groupListController;
@property(retain, nonatomic) NSMutableArray *customerItems; // @synthesize customerItems=_customerItems;
- (void).cxx_destruct;
- (id)getSPMID;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)displayBackButtonTitle;
- (void)onRecentContactUpdate:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)groupListViewController:(id)arg1 didSelectGroupInfos:(id)arg2;
- (void)didClickAddBtn:(id)arg1;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (void)didSelectContactInfo:(id)arg1;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataSearchTitleInCommonView:(id)arg1;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (void)commonView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (void)setupRightBarBtnItem;
- (void)parseStageInfos;
- (void)refreshContactFriendAppsData;
- (void)responseContactFriendStageNotification:(id)arg1;
- (id)appManageService;
- (void)reloadUI;
- (void)handleContactDataReslutWithResponseVO:(id)arg1;
- (void)reloadContacts;
- (void)reloadMobileBtn;
- (void)loadContact;
- (void)setupSearchBar;
- (void)setupSelectView;
- (void)checkToEnterFriendPage;
- (void)viewDidLoad;
- (void)checkToLoadMobileContact;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
