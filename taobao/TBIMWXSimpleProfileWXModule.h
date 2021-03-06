//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCChatPhotoViewerContainerViewDataSource-Protocol.h"
#import "TBAMPModifyNameDelegate-Protocol.h"
#import "TBIMGroupServiceDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface TBIMWXSimpleProfileWXModule : NSObject <MCChatPhotoViewerContainerViewDataSource, TBAMPModifyNameDelegate, TBIMGroupServiceDelegate, UIActionSheetDelegate, TBIMRelationServiceDelegate, WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    CDUnknownBlockType _updateUserInfoCallback;
    NSString *_identifier;
    NSString *_targetUserID;
    CDUnknownBlockType _deleteUserCallback;
}

+ (id)wx_export_method_309;
+ (id)wx_export_method_298;
+ (id)wx_export_method_148;
+ (id)wx_export_method_132;
+ (id)wx_export_method_95;
+ (id)wx_export_method_65;
+ (id)wx_export_method_51;
@property(copy, nonatomic) CDUnknownBlockType deleteUserCallback; // @synthesize deleteUserCallback=_deleteUserCallback;
@property(retain, nonatomic) NSString *targetUserID; // @synthesize targetUserID=_targetUserID;
@property(nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType updateUserInfoCallback; // @synthesize updateUserInfoCallback=_updateUserInfoCallback;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)setRemindWithSessionId:(id)arg1 remind:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getRemindWithSessionId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)popSelf;
- (void)friendDeleteIsSuccess:(_Bool)arg1 userId:(id)arg2 error:(id)arg3;
- (void)updateNameSuccess:(id)arg1 newName:(id)arg2;
- (void)groupUserUpdatedFailed:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (id)localImageWithPhotoModel:(id)arg1;
- (void)backPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (void)frontPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (_Bool)isBackHasMore;
- (_Bool)isFrontHasMore;
- (long long)photoViewerRequestOffset;
- (long long)photoViewerRequestCount;
- (void)nav:(id)arg1 params:(id)arg2;
- (void)showUserImage:(id)arg1;
- (void)updateGroupUserInfo:(id)arg1 isBlack:(long long)arg2 ccode:(id)arg3 userId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)removeFriend:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addFriend:(id)arg1 disName:(id)arg2 selfGroupNick:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

