//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCMergeContactViewDelegate-Protocol.h"
#import "MCVGroupSubGroupModelDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TBIMPerformProxy, UIView;
@protocol MCMergeContactViewProtocol, MCVGroupSubGroupModelProtocol;

@interface MCVGroupSubGroupPresenter : MCBasePresenter <MCVGroupSubGroupModelDelegate, MCMergeContactViewDelegate>
{
    id <MCVGroupSubGroupModelProtocol> _vGroupSubGroupModel;
    UIView<MCMergeContactViewProtocol> *_mergeContactView;
    NSString *_groupID;
    TBIMPerformProxy *_performProxy;
    NSArray *_groupAdapters;
    NSMutableDictionary *_needUpdateGroupIDs;
}

@property(retain, nonatomic) NSMutableDictionary *needUpdateGroupIDs; // @synthesize needUpdateGroupIDs=_needUpdateGroupIDs;
@property(retain, nonatomic) NSArray *groupAdapters; // @synthesize groupAdapters=_groupAdapters;
@property(retain, nonatomic) TBIMPerformProxy *performProxy; // @synthesize performProxy=_performProxy;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) UIView<MCMergeContactViewProtocol> *mergeContactView; // @synthesize mergeContactView=_mergeContactView;
@property(retain, nonatomic) id <MCVGroupSubGroupModelProtocol> vGroupSubGroupModel; // @synthesize vGroupSubGroupModel=_vGroupSubGroupModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableFooterViewForTableView:(id)arg1;
- (id)tableHeaderViewForTableView:(id)arg1;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupInfoChange:(id)arg1;
- (id)getView;
- (void)refreshDataAndUI;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 config:(id)arg4 vGroupID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

