//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSMutableArray, NSString, NSTimer, TTFQuizShowLiveRoomViewModel, UITableView;
@protocol TTFTalkBoardServiceProtocl;

@interface TTFTalkBoardViewModel : NSObject <UITableViewDataSource>
{
    _Bool _hideCommentBtn;
    _Bool _disableSlide;
    TTFQuizShowLiveRoomViewModel *_liveRoomViewModel;
    id <TTFTalkBoardServiceProtocl> _service;
    Class _cellClass;
    NSMutableArray *_msgQueue;
    CDUnknownBlockType _updateBoard;
    CDUnknownBlockType _toastErrorAlert;
    NSTimer *_timer;
    UITableView *_tableview;
    double _refreshInterval;
    long long _activityID;
}

@property(nonatomic) long long activityID; // @synthesize activityID=_activityID;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) __weak UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType toastErrorAlert; // @synthesize toastErrorAlert=_toastErrorAlert;
@property(copy, nonatomic) CDUnknownBlockType updateBoard; // @synthesize updateBoard=_updateBoard;
@property(nonatomic) _Bool disableSlide; // @synthesize disableSlide=_disableSlide;
@property(nonatomic) _Bool hideCommentBtn; // @synthesize hideCommentBtn=_hideCommentBtn;
@property(retain, nonatomic) NSMutableArray *msgQueue; // @synthesize msgQueue=_msgQueue;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) id <TTFTalkBoardServiceProtocl> service; // @synthesize service=_service;
@property(nonatomic) __weak TTFQuizShowLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTalkBoard;
- (void)sendMessage:(id)arg1;
- (void)enqueueFrontMessage:(id)arg1;
- (void)stopRefresh;
- (void)startRefresh;
- (void)setPollingInteval:(double)arg1;
- (void)dealloc;
- (id)initWithActivityID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

