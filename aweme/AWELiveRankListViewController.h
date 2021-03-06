//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWELiveRankHeaderView, AWELiveRankManager, AWELiveRoomModel, NSString, UIImageView, UILabel, UIPanGestureRecognizer, UITableView, UIView;

@interface AWELiveRankListViewController : UIViewController <UITableViewDataSource, UIGestureRecognizerDelegate, UITableViewDelegate>
{
    _Bool _isAnimation;
    _Bool _isFirstLayout;
    UIView *_baseView;
    UILabel *_emptyLabel;
    UILabel *_loadingView;
    UITableView *_tableView;
    UIImageView *_loadingLogo;
    AWELiveRankHeaderView *_headerView;
    UIPanGestureRecognizer *_panGes;
    AWELiveRoomModel *_room;
    AWELiveRankManager *_rankManager;
    struct CGPoint _lastLocation;
}

@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) AWELiveRankManager *rankManager; // @synthesize rankManager=_rankManager;
@property(retain, nonatomic) AWELiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) AWELiveRankHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *loadingLogo; // @synthesize loadingLogo=_loadingLogo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_getCornerLayerForRect:(struct CGRect)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)shadowClicked:(id)arg1;
- (void)longSildeClose:(id)arg1;
- (void)endRefreshing;
- (void)layoutLoading;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)loadMoreData;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)_setupUI;
- (void)viewDidLoad;
- (id)initWithRoom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

