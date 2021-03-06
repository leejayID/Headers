//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTIMMsgExt-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TTIMMsgGroupModel : NSObject <TTIMMsgExt>
{
    NSMutableDictionary *_dicGroup;
    NSMutableDictionary *_dicGroupRefreshFinished;
}

@property(retain, nonatomic) NSMutableDictionary *dicGroupRefreshFinished; // @synthesize dicGroupRefreshFinished=_dicGroupRefreshFinished;
@property(retain, nonatomic) NSMutableDictionary *dicGroup; // @synthesize dicGroup=_dicGroup;
- (void).cxx_destruct;
- (void)markAllGroupAsRefreshFinished:(_Bool)arg1;
- (void)onSendAck:(id)arg1 msg:(id)arg2;
- (void)updateGroup:(id)arg1 refreshFinished:(_Bool)arg2;
- (_Bool)refreshFinishedForGroup:(id)arg1;
- (void)updateGroups:(id)arg1 chatMsg:(id)arg2;
- (id)lastMsgIdDicInGroup;
- (long long)lastMsgIdInGroup:(id)arg1;
- (_Bool)containGroup:(id)arg1;
- (void)clear;
- (void)syncFromGroupListTable:(id)arg1;
- (void)syncFromChatTable:(id)arg1 withDB:(id)arg2;
- (void)syncGroupsInBackGround:(id)arg1;
- (void)asynInitGroups;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

