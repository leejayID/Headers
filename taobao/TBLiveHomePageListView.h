//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveHomePageBaseListView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBLiveFeedEmptyView, TBLiveFeedRequestV2, TBLiveMenuChannelModel, UITableView;
@protocol TBLiveHomePageListViewDelegate;

@interface TBLiveHomePageListView : TBLiveHomePageBaseListView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    _Bool _needPlayVideo;
    _Bool _needLoadLikeIcon;
    _Bool _hasReceivedOnLookerData;
    _Bool _tagFlag;
    _Bool _scrollOutFromFirstPage;
    long long _tagIndex;
    id <TBLiveHomePageListViewDelegate> _hpDelegate;
    UITableView *_feedTableView;
    NSMutableArray *_dataSource;
    long long _currentPageNum;
    TBLiveMenuChannelModel *_menuModel;
    TBLiveFeedEmptyView *_emptyView;
    NSString *_fromTBHomePageContentId;
    TBLiveFeedRequestV2 *_request;
}

+ (id)liveHPPlayer;
@property(retain, nonatomic) TBLiveFeedRequestV2 *request; // @synthesize request=_request;
@property(nonatomic) _Bool scrollOutFromFirstPage; // @synthesize scrollOutFromFirstPage=_scrollOutFromFirstPage;
@property(nonatomic) _Bool tagFlag; // @synthesize tagFlag=_tagFlag;
@property(nonatomic) _Bool hasReceivedOnLookerData; // @synthesize hasReceivedOnLookerData=_hasReceivedOnLookerData;
@property(nonatomic) _Bool needLoadLikeIcon; // @synthesize needLoadLikeIcon=_needLoadLikeIcon;
@property(nonatomic) _Bool needPlayVideo; // @synthesize needPlayVideo=_needPlayVideo;
@property(retain, nonatomic) NSString *fromTBHomePageContentId; // @synthesize fromTBHomePageContentId=_fromTBHomePageContentId;
@property(retain, nonatomic) TBLiveFeedEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBLiveMenuChannelModel *menuModel; // @synthesize menuModel=_menuModel;
@property(nonatomic) long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *feedTableView; // @synthesize feedTableView=_feedTableView;
@property(nonatomic) __weak id <TBLiveHomePageListViewDelegate> hpDelegate; // @synthesize hpDelegate=_hpDelegate;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
- (void).cxx_destruct;
- (void)setEnablePlayVideo:(_Bool)arg1;
- (_Bool)getEnablePlayVideo;
- (void)scrollViewDidEndScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadLikeIconResourceWithUrl:(id)arg1;
- (void)registeTableViewCell;
- (void)toggleRefresh;
- (void)requestFeedWithModel:(id)arg1 contentId:(id)arg2;
- (void)showEmptyView;
- (void)configScrollsToTop:(_Bool)arg1;
- (void)reloadData:(id)arg1;
- (void)updateExactTemplates:(id)arg1;
- (void)downloadTemplates:(id)arg1;
- (void)requestFeedWithModel:(id)arg1 pageNum:(long long)arg2 isPullMode:(_Bool)arg3 contentId:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

