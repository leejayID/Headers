//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/TBFeedsDetailMgrDelegate-Protocol.h>
#import <QQMainProject/TBPicListViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, TBFeedsDetailMgr, TBPicListView, TBStoryFeedModel;
@protocol TBStoryVideoSelectorDelegate;

@interface TBStoryVideoSelectorViewController : QQViewController <UIScrollViewDelegate, TBPicListViewDelegate, TBFeedsDetailMgrDelegate>
{
    TBPicListView *_videoListScrollView;
    _Bool _isRequesting;
    unsigned int _videoOrder;
    TBFeedsDetailMgr *_feedsDetailMgr;
    NSString *_feedID;
    NSString *_unionID;
    id <TBStoryVideoSelectorDelegate> _delegate;
    double _defaultScrollLeft;
    TBStoryFeedModel *_feedInfo;
}

@property(retain, nonatomic) TBStoryFeedModel *feedInfo; // @synthesize feedInfo=_feedInfo;
@property(nonatomic) double defaultScrollLeft; // @synthesize defaultScrollLeft=_defaultScrollLeft;
@property(nonatomic) __weak id <TBStoryVideoSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedsDetailMgr:(id)arg1 onFeedVideoInfoList:(id)arg2 errorInfo:(id)arg3;
- (void)onScrollToRequestMoreData;
- (void)onClickPic:(long long)arg1 withView:(id)arg2;
- (void)onScrollEndToRight;
- (void)viewWillDisuse:(id)arg1 atIndex:(long long)arg2;
- (void)resetViewOfPic:(id)arg1 atIndex:(long long)arg2;
- (id)viewOfPic:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfPic:(id)arg1;
- (id)getSelectedVideoString:(long long)arg1;
- (void)requestMoreVideoCover:(id)arg1;
- (void)requestFeedInfo;
- (void)loadFeedInfoFromCache;
- (void)initNotifi;
- (void)initUI;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onCancelBtnClick;
- (void)loadView;
- (id)initWithUnionID:(id)arg1 feedID:(id)arg2 videoOrder:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

