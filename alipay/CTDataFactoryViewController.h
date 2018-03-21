//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTMessageViewController.h"

@class APChatMessage, NSArray, NSString;

@interface CTDataFactoryViewController : CTMessageViewController
{
    NSString *_holdClientMsgId;
    long long _LoadPageNumber;
    _Bool _hasMore;
    _Bool _hasNew;
    _Bool _isDragging;
    _Bool _isLoadMoreing;
    _Bool _isLoadNewing;
    _Bool _haveHoldNewData;
    _Bool _isHoldRefresh;
    _Bool _haveHoldHasMore;
    APChatMessage *_haveHoldMessage;
    NSArray *_haveHoldOldData;
}

@property(retain, nonatomic) NSArray *haveHoldOldData; // @synthesize haveHoldOldData=_haveHoldOldData;
@property(retain, nonatomic) APChatMessage *haveHoldMessage; // @synthesize haveHoldMessage=_haveHoldMessage;
@property(nonatomic) _Bool haveHoldHasMore; // @synthesize haveHoldHasMore=_haveHoldHasMore;
@property(nonatomic) _Bool isHoldRefresh; // @synthesize isHoldRefresh=_isHoldRefresh;
@property(nonatomic) _Bool haveHoldNewData; // @synthesize haveHoldNewData=_haveHoldNewData;
@property(nonatomic) _Bool isLoadNewing; // @synthesize isLoadNewing=_isLoadNewing;
@property(nonatomic) _Bool isLoadMoreing; // @synthesize isLoadMoreing=_isLoadMoreing;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool hasNew; // @synthesize hasNew=_hasNew;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)keyboardWeakup;
- (void)loadNewPage;
- (id)replaceSnapChatTextInItems:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)jumpUnreadTop;
- (void)onMsgSettingAlertShown:(id)arg1;
- (void)updateLoadingViewAppendHeight:(long long)arg1;
- (void)existMessageUpdate:(id)arg1;
- (void)chatDataChanged:(id)arg1;
- (void)chatDataDidUpdate:(id)arg1;
- (void)messageCancel:(id)arg1;
- (void)apgroupInfoUpdate:(id)arg1;
- (void)onChatRoomNotification:(id)arg1;
- (void)apNewFriendUpdate:(id)arg1;
- (void)apcontactInfoUpdate:(id)arg1;
- (void)apcountactHistoryInfoUpdate:(id)arg1;
- (void)onChatRoomMemberInfoNotification:(id)arg1;
- (void)chatCancelMessage:(id)arg1;
- (void)deleteMsg:(id)arg1;
- (void)cleanMessage:(id)arg1;
- (id)itemExistInMap:(id)arg1 inItems:(id)arg2;
- (void)mainThreadRefreshTableViewWithItems:(id)arg1 refreshType:(int)arg2 animation:(_Bool)arg3;
- (void)refreshTableViewWithItems:(id)arg1 refreshType:(int)arg2 animation:(_Bool)arg3;
- (void)loadMoreData:(long long)arg1 closeMockTime:(_Bool)arg2;
- (void)loadAfterData;
- (void)refreshWithItems:(id)arg1 hasMore:(_Bool)arg2;
- (void)searchAndScorllToLocalId;
- (void)loadData;
- (void)tryLoadDefore;
- (void)tryLoadAfter;
- (void)configureVoiceOver;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeNotification;
- (void)setupNotify;
- (void)resumeWithOptions:(id)arg1 isResume:(_Bool)arg2;
- (void)viewDidLoad;

@end
