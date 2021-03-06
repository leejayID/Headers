//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "NewsFetchArticleDetailManagerDelegate-Protocol.h"
#import "SSImpressionProtocol-Protocol.h"
#import "TLIndexPathControllerDelegate-Protocol.h"
#import "TTAccountMulticastProtocol-Protocol.h"
#import "TTRefreshViewDelegate-Protocol.h"
#import "TTVFeedCellActionMessage-Protocol.h"
#import "TTVFeedUserOpViewSyncMessage-Protocol.h"
#import "TTVFetchedResultsTableDataSourceProtocol-Protocol.h"
#import "TTVPreloadDetailManagerDelegate-Protocol.h"
#import "TTVideoArticleServiceMessage-Protocol.h"
#import "TTVideoDislikeMessage-Protocol.h"
#import "TTVideoFeedListServiceMessage-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class ExploreItemActionManager, NSDate, NSMapTable, NSMutableArray, NSString, SSJSBridgeWebViewDelegate, TLIndexPathController, TTCategory, TTSubEntranceBar, TTVFeedListItem, TTVFeedListNotificationCenter, TTVFeedListViewModel, TTVPreloadDetailManager, UITableView, UIView;
@protocol TTVFeedListViewControllerDelegate;

@interface TTVFeedListViewController : SSViewControllerBase <SSImpressionProtocol, UIViewControllerErrorHandler, YSWebViewDelegate, TTVFetchedResultsTableDataSourceProtocol, TTVideoFeedListServiceMessage, TLIndexPathControllerDelegate, TTVideoDislikeMessage, TTVFeedCellActionMessage, TTVideoArticleServiceMessage, NewsFetchArticleDetailManagerDelegate, TTVFeedUserOpViewSyncMessage, TTVPreloadDetailManagerDelegate, TTAccountMulticastProtocol, TTRefreshViewDelegate>
{
    _Bool _accountChangedNeedReadloadList;
    _Bool _isShowing;
    _Bool _isShowWithScenesEnabled;
    _Bool _refreshShouldLastReadUpate;
    _Bool _isVideoTabCategory;
    _Bool _isDisplayView;
    _Bool _isCurrentDisplayView;
    _Bool _isLastReadRefresh;
    _Bool _isFirstRefreshListAfterLaunch;
    _Bool _shouldShowRefreshButton;
    _Bool _isClickCellLeaveList;
    _Bool _refreshButtonShowWhenScrollUpward;
    _Bool _isPlayerOnRotateAnimation;
    _Bool _readyToReload;
    _Bool _isCustomAnimationForcell;
    _Bool _isHeaderViewBarVisible;
    int _reloadFromType;
    TLIndexPathController *_indexPathController;
    id <TTVFeedListViewControllerDelegate> _delegate;
    UITableView *_tableView;
    unsigned long long _refer;
    NSString *_enterType;
    NSString *_categoryID;
    TTVFeedListViewModel *_listVideoModel;
    ExploreItemActionManager *_itemActionManager;
    TTCategory *_currentCategory;
    TTVPreloadDetailManager *_preloadDetail;
    TTVFeedListNotificationCenter *_notifyCenter;
    SSJSBridgeWebViewDelegate *_transformDelegate;
    UIView *_movieView;
    TTVFeedListItem *_movieViewCellData;
    NSMapTable *_toBeUpdatedListItemMapTable;
    NSMutableArray *_movieViews;
    UIView *_adRefreshAnimationView;
    TTSubEntranceBar *_subEntranceBar;
    NSDate *_startLoadDate;
    unsigned long long _remoteItemsCount;
    unsigned long long _remoteItemsCountAfterMerge;
}

@property(nonatomic) unsigned long long remoteItemsCountAfterMerge; // @synthesize remoteItemsCountAfterMerge=_remoteItemsCountAfterMerge;
@property(nonatomic) unsigned long long remoteItemsCount; // @synthesize remoteItemsCount=_remoteItemsCount;
@property(retain, nonatomic) NSDate *startLoadDate; // @synthesize startLoadDate=_startLoadDate;
@property(nonatomic) _Bool isHeaderViewBarVisible; // @synthesize isHeaderViewBarVisible=_isHeaderViewBarVisible;
@property(retain, nonatomic) TTSubEntranceBar *subEntranceBar; // @synthesize subEntranceBar=_subEntranceBar;
@property(nonatomic) _Bool isCustomAnimationForcell; // @synthesize isCustomAnimationForcell=_isCustomAnimationForcell;
@property(retain, nonatomic) UIView *adRefreshAnimationView; // @synthesize adRefreshAnimationView=_adRefreshAnimationView;
@property(nonatomic) _Bool readyToReload; // @synthesize readyToReload=_readyToReload;
@property(nonatomic) _Bool isPlayerOnRotateAnimation; // @synthesize isPlayerOnRotateAnimation=_isPlayerOnRotateAnimation;
@property(retain, nonatomic) NSMutableArray *movieViews; // @synthesize movieViews=_movieViews;
@property(retain, nonatomic) NSMapTable *toBeUpdatedListItemMapTable; // @synthesize toBeUpdatedListItemMapTable=_toBeUpdatedListItemMapTable;
@property(retain, nonatomic) TTVFeedListItem *movieViewCellData; // @synthesize movieViewCellData=_movieViewCellData;
@property(nonatomic) _Bool refreshButtonShowWhenScrollUpward; // @synthesize refreshButtonShowWhenScrollUpward=_refreshButtonShowWhenScrollUpward;
@property(nonatomic) _Bool isClickCellLeaveList; // @synthesize isClickCellLeaveList=_isClickCellLeaveList;
@property(retain, nonatomic) UIView *movieView; // @synthesize movieView=_movieView;
@property(nonatomic) _Bool shouldShowRefreshButton; // @synthesize shouldShowRefreshButton=_shouldShowRefreshButton;
@property(nonatomic) _Bool isFirstRefreshListAfterLaunch; // @synthesize isFirstRefreshListAfterLaunch=_isFirstRefreshListAfterLaunch;
@property(nonatomic) _Bool isLastReadRefresh; // @synthesize isLastReadRefresh=_isLastReadRefresh;
@property(retain, nonatomic) SSJSBridgeWebViewDelegate *transformDelegate; // @synthesize transformDelegate=_transformDelegate;
@property(retain, nonatomic) TTVFeedListNotificationCenter *notifyCenter; // @synthesize notifyCenter=_notifyCenter;
@property(retain, nonatomic) TTVPreloadDetailManager *preloadDetail; // @synthesize preloadDetail=_preloadDetail;
@property(retain, nonatomic) TTCategory *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(nonatomic) _Bool isCurrentDisplayView; // @synthesize isCurrentDisplayView=_isCurrentDisplayView;
@property(retain, nonatomic) ExploreItemActionManager *itemActionManager; // @synthesize itemActionManager=_itemActionManager;
@property(retain, nonatomic) TTVFeedListViewModel *listVideoModel; // @synthesize listVideoModel=_listVideoModel;
@property(nonatomic) _Bool isDisplayView; // @synthesize isDisplayView=_isDisplayView;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool isVideoTabCategory; // @synthesize isVideoTabCategory=_isVideoTabCategory;
@property(nonatomic) int reloadFromType; // @synthesize reloadFromType=_reloadFromType;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(nonatomic) _Bool refreshShouldLastReadUpate; // @synthesize refreshShouldLastReadUpate=_refreshShouldLastReadUpate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TTVFeedListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TLIndexPathController *indexPathController; // @synthesize indexPathController=_indexPathController;
- (void).cxx_destruct;
- (void)refreshViewWillChangePullDirection:(id)arg1 changedPullDirection:(int)arg2;
- (void)refreshViewDidEndDrag:(id)arg1;
- (void)refreshViewDidScroll:(id)arg1 WithScrollOffset:(double)arg2;
- (void)refreshViewWillStartDrag:(id)arg1;
- (void)trackRefreshStatusWithErorr:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)trackRefreshIfneed;
- (id)refreshTrackV3Name;
- (void)receiveFirstRefreshTipWithInfo:(id)arg1;
- (void)receiveFetchRemoteReloadTipWithInfo:(id)arg1;
- (void)receiveShowRemoteReloadTipWithInfo:(id)arg1;
- (void)connectionChanged;
- (void)accountChanged;
- (void)clearCache;
- (void)feedListNotificationCenterExitFullScreen:(id)arg1;
- (void)feedListNotificationCenterWebCellDidUpdate:(id)arg1 relatedWebItem:(id)arg2;
- (void)feedListNotificationCenterAppDidEnterBackground:(id)arg1;
- (void)feedListNotificationCenterAppDidBeComeactive:(id)arg1;
- (void)feedListNotificationCenter:(id)arg1 deleteVideoInfo:(id)arg2;
- (void)feedListNotificationCenter:(id)arg1 receiveFirstRefreshTipInfo:(id)arg2;
- (void)feedListNotificationCenter:(id)arg1 receiveFetchRemoteReloadTipInfo:(id)arg2;
- (void)feedListNotificationCenter:(id)arg1 receiveShowRemoteReloadTipInfo:(id)arg2;
- (void)feedListNotificationCenterFontChanged:(id)arg1;
- (void)feedListNotificationCenterConnectionChanged:(id)arg1;
- (void)feedListNotificationCenterReadModeChanged:(id)arg1;
- (void)feedListNotificationCenterClearCache:(id)arg1;
- (id)feedListNotificationCenterGetDataArray:(id)arg1;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)message_updateCommentCount:(id)arg1 groupId:(id)arg2;
- (void)userRefreshGuideShowTopBubbleViewWithDelay:(long long)arg1;
- (void)userRefreshGuideHideTabbarBubbleView;
- (void)userRefreshGuideHideTopBubbleView;
- (void)trackAutoPlayCellEnterBackground;
- (long long)indexInTabbarController;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)needRerecordImpressions;
- (int)goDetailFromSouce;
- (void)displayMessage:(id)arg1 withImage:(id)arg2 duration:(float)arg3;
- (void)displayMessage:(id)arg1 withImage:(id)arg2;
- (void)clearTipCount;
- (void)notifyTipCount:(long long)arg1 useDotStyle:(_Bool)arg2;
- (void)hideRemoteReloadTip;
- (void)showRemoteReloadHasMessageNotifyBarViewClicked;
- (void)showRemoteReloadTip:(id)arg1;
- (void)fetchRemoteReloadTipLater;
- (void)fetchRemoteReloadTip;
- (void)tryFetchTipIfNeed;
- (_Bool)tipRemoteUseTabbar;
- (_Bool)shouldReloadBackAfterLeaveCurrentCategory;
- (void)saveLeaveCurrentCategoryDate;
- (void)tryAutoReloadIfNeed;
- (void)onPreloadMore;
- (void)onPreloadDetail;
- (void)removeExpireADs;
- (void)message_deleteItemsOnRealTime:(id)arg1;
- (void)message_dislikeWithCellEntity:(id)arg1 hideTip:(_Bool)arg2 filterWords:(id)arg3 dislikeAnchorFrame:(struct CGRect)arg4 dislikeSource:(long long)arg5;
- (void)message_dislikeWithCellEntity:(id)arg1 filterWords:(id)arg2 dislikeAnchorFrame:(struct CGRect)arg3 dislikeSource:(long long)arg4;
- (void)message_dislikeWithCellEntity:(id)arg1 hideTip:(_Bool)arg2;
- (void)ttv_message_feedListItemExpendOrCollapseRecommendView:(id)arg1 isExpend:(_Bool)arg2;
- (void)invalidMovieViewOfFirstCellIfNeeded;
- (long long)lastReadDataIndexWithNotInterestDataIndex:(long long)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reportDelegateCancelRequest;
- (void)reportDelegateLoadFinish:(_Bool)arg1 isUserPull:(_Bool)arg2 isGetMore:(_Bool)arg3;
- (void)didSelectLastReadCell;
- (_Bool)isCategoryWithHeadInfo;
- (void)addLastReadTrackWithLabel:(id)arg1;
- (id)localCacheKey;
- (id)primaryKey;
- (void)clearListContent;
- (void)setListTopInset:(double)arg1 BottomInset:(double)arg2;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollToTopEnable:(_Bool)arg1;
- (void)pullAndRefreshWithLastReadUpate;
- (void)pullAndRefresh;
- (_Bool)tt_hasValidateData;
- (void)refreshData;
- (void)notifyBarAction:(id)arg1;
- (void)showNewTipsWithIsLoadMore:(_Bool)arg1 isFromRemote:(_Bool)arg2;
- (void)rebackTracker;
- (_Bool)checkSameCategoryIsGetMore:(_Bool)arg1;
- (void)refreshTrackerIsFromRemote:(_Bool)arg1 getMore:(_Bool)arg2;
- (void)fetchListSuccessIsGetMore:(_Bool)arg1;
- (void)beforeReloadTableView;
- (void)showTopPGCList;
- (void)fetchListError:(id)arg1 isGetMore:(_Bool)arg2;
- (void)tryOptimizeFetchFromLocal:(_Bool)arg1 fromRemote:(_Bool)arg2 getMore:(_Bool)arg3 getRemoteWhenLocalEmpty:(_Bool)arg4;
- (void)fetchFromLocal:(_Bool)arg1 fromRemote:(_Bool)arg2 getMore:(_Bool)arg3 isPreload:(_Bool)arg4 getRemoteWhenLocalEmpty:(_Bool)arg5;
- (void)fetchFromLocal:(_Bool)arg1 fromRemote:(_Bool)arg2 getMore:(_Bool)arg3;
- (void)listViewWillEnterBackground;
- (void)listViewWillEnterForground;
- (void)applicationStatusBarOrientationDidChanged;
- (void)attachVideoIfNeededForCellWithUniqueID:(id)arg1 playingVideo:(id)arg2;
- (void)attachVideoIfNeededForCell:(id)arg1 data:(id)arg2;
- (void)didFinishLoadTable;
- (void)reloadListViewWithVideoPlayingIsChangeOrientation:(_Bool)arg1;
- (void)reloadListViewWithVideoPlaying;
- (void)reloadListViewModifiedItems:(id)arg1 withRowAnimation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)intersectArray:(id)arg1 withArray:(id)arg2;
- (void)performReloadData;
- (void)willFinishLoadTable;
- (void)reloadListView;
- (void)controller:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)loadMoreWithUmengLabel:(id)arg1 isPreload:(_Bool)arg2;
- (long long)listViewMaxModelIndex;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)recordGroupWithItem:(id)arg1 status:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)screenName;
- (void)themeChanged:(id)arg1;
- (void)didDisappear;
- (void)newMovieAutoOverTrack:(id)arg1 feedItem:(id)arg2;
- (void)willDisappear;
- (void)suspendTrackAdCellsInVisibleCells;
- (void)resumeTrackAdCellsInVisibleCells;
- (void)trackAdCellsInVisibleCellsIsSuspend:(_Bool)arg1;
- (id)adExtraDataWithItem:(id)arg1;
- (void)willAppear;
- (void)didAppear;
- (void)clickVideoTabbarWithCategory:(id)arg1 hasTip:(_Bool)arg2;
- (void)clickCategorySelectorViewWithCategory:(id)arg1 hasTip:(_Bool)arg2;
- (void)refreshFeedListForCategory:(id)arg1 isDisplayView:(_Bool)arg2 fromLocal:(_Bool)arg3 fromRemote:(_Bool)arg4 reloadFromType:(int)arg5 getRemoteWhenLocalEmpty:(_Bool)arg6;
- (struct CGRect)frameForListView;
- (void)setADRefreshView;
- (void)removeDelegates;
- (void)tableView:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)addPullDownRefreshView;
- (void)creatrePreloadManager;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetScrollView;
- (void)prepareForReuse;
- (id)init;
- (void)dealloc;
- (id)moreParameter;
- (id)parameter;
- (id)forRowContext;
- (void)addTableView;
- (void)dockHeaderViewBar;
- (void)refreshSubEntranceBar;
- (void)updateCustomTopOffset;
- (void)refreshHeaderView;
- (_Bool)needShowPGCBar;
- (_Bool)needShowSubEntranceBar;
- (_Bool)needShowCitySelectBar;
- (id)customListHeader;
- (void)setCustomListHeader:(id)arg1;
- (void)setListHeader:(id)arg1;
- (void)trackRefreshV3ForCategory:(id)arg1 refreshMethod:(id)arg2 label:(id)arg3 isloadMore:(_Bool)arg4 status:(long long)arg5;
- (void)trackRefreshV3ForCategory:(id)arg1 refreshMethod:(id)arg2 erorr:(id)arg3 isLoadMore:(_Bool)arg4;
- (void)trackLoadStatusEventForLabel:(id)arg1 isLoadMore:(_Bool)arg2 status:(long long)arg3;
- (void)trackLoadStatusEventWithErorr:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)trackRefreshV3ForCategory:(id)arg1 refreshMethod:(id)arg2;
- (void)trackEventForLabel:(id)arg1;
- (id)modifyEventLabelForRefreshEvent:(id)arg1;
- (void)trackEventUpdateRemoteItemsCountAfterMerge:(unsigned long long)arg1;
- (void)trackEventUpdateRemoteItemsCount:(unsigned long long)arg1;
- (void)trackEventStartLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

