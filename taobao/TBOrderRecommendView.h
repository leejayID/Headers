//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSString, TBTradeRecmdEngine, UITableView;
@protocol TBOrderRecommendViewDelegate;

@interface TBOrderRecommendView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_recommendTableView;
    id <TBOrderRecommendViewDelegate> _delegate;
    TBTradeRecmdEngine *_recmdEngine;
    NSDictionary *_recmdParam;
}

@property(retain, nonatomic) NSDictionary *recmdParam; // @synthesize recmdParam=_recmdParam;
@property(retain, nonatomic) TBTradeRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
@property(nonatomic) __weak id <TBOrderRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *recommendTableView; // @synthesize recommendTableView=_recommendTableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showRecomendWithParam:(id)arg1;
- (void)registRecmdEngine;
- (void)initRecommendEngine;
- (void)initTable;
- (void)initRecommendViewWithTable:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
