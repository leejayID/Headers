//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APContactViewControllerDelegate-Protocol.h"

@class ALPPresentUtil, KABAOPRODPassBaseInfo, KABAOPRODPresentMsgResult, NSString;

@interface ALPPresentManager : NSObject <APContactViewControllerDelegate>
{
    _Bool _needInput;
    KABAOPRODPresentMsgResult *_presentInfo;
    ALPPresentUtil *_presentUtil;
    CDUnknownBlockType _successBLock;
    CDUnknownBlockType _failureBLock;
    CDUnknownBlockType _selectContactBlock;
    KABAOPRODPassBaseInfo *_passBaseInfo;
}

+ (id)sharedManager;
@property(retain, nonatomic) KABAOPRODPassBaseInfo *passBaseInfo; // @synthesize passBaseInfo=_passBaseInfo;
@property(copy, nonatomic) CDUnknownBlockType selectContactBlock; // @synthesize selectContactBlock=_selectContactBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBLock; // @synthesize failureBLock=_failureBLock;
@property(copy, nonatomic) CDUnknownBlockType successBLock; // @synthesize successBLock=_successBLock;
@property(nonatomic) _Bool needInput; // @synthesize needInput=_needInput;
@property(retain, nonatomic) ALPPresentUtil *presentUtil; // @synthesize presentUtil=_presentUtil;
@property(retain, nonatomic) KABAOPRODPresentMsgResult *presentInfo; // @synthesize presentInfo=_presentInfo;
- (void).cxx_destruct;
- (void)dismiss;
- (void)didSelectAPContactInfos:(id)arg1 controller:(id)arg2;
- (void)presentWithPassId:(id)arg1 title:(id)arg2 desc:(id)arg3 tips:(id)arg4 imgString:(id)arg5 needInput:(_Bool)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)presentItem:(id)arg1 needInput:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)present:(id)arg1 needInput:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)present:(id)arg1 needInput:(_Bool)arg2 toUid:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)showPresentUtilWithListItem:(id)arg1 toUid:(id)arg2;
- (void)showPresentUtilWithBaseInfo:(id)arg1 toUid:(id)arg2;
- (void)showContactBaseViewController:(CDUnknownBlockType)arg1;
- (void)getPresentMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

