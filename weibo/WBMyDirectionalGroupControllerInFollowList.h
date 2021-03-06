//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDirectionalGroupMessageViewController.h"

#import "WBDirectionalGroupMessageViewControllerDelegate-Protocol.h"

@class NSString;

@interface WBMyDirectionalGroupControllerInFollowList : WBDirectionalGroupMessageViewController <WBDirectionalGroupMessageViewControllerDelegate>
{
    id _loadingOperationHandle;
    _Bool _needrefreshWhenAppear;
    unsigned long long _groupCount;
}

@property unsigned long long groupCount; // @synthesize groupCount=_groupCount;
- (void).cxx_destruct;
- (void)directionalGroupMessageView:(id)arg1 didSelectGroup:(id)arg2 inController:(id)arg3;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)searchFromGroups:(id)arg1 withKeyWords:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (void)reloadGroupsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadGroupsFromCacheWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)groupMessageViewWillStartSearching:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

