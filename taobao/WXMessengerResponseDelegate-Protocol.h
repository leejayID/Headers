//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSNumber, NSString, WXStackBatchContactsInfo, WXStackBatchGroupsInfo, WXStackContactInfo, WXStackGroupInfo, WXStackMessage, WXStackPlugin, WXStackTribeMsg;

@protocol WXMessengerResponseDelegate <NSObject>

@optional
- (void)didGetLogonSessionList:(NSArray *)arg1 andError:(NSError *)arg2;
- (void)didCascRequestSiteApp:(NSString *)arg1 data:(NSString *)arg2 andError:(NSError *)arg3;
- (void)didUpdateTribeInfo:(NSDictionary *)arg1 ofTribe:(NSString *)arg2 error:(NSError *)arg3;
- (void)didUpdateNickname:(NSString *)arg1 ofMember:(NSString *)arg2 inTribe:(NSString *)arg3 error:(NSError *)arg4;
- (void)didReplyApplicationToJoinTribe:(NSString *)arg1 user:(NSString *)arg2 withResult:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)didReplyInvitationOfTribe:(NSString *)arg1 withResult:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didDisbandTribe:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didExitFromTribe:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didSetMember:(NSString *)arg1 withRole:(long long)arg2 fromTribe:(NSString *)arg3 withError:(NSError *)arg4;
- (void)didExpelMember:(NSString *)arg1 fromTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didJoinToTribe:(NSString *)arg1 withError:(NSError *)arg2;
- (void)didInviteMembers:(NSArray *)arg1 toTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didCreateTribe:(NSString *)arg1 tribeType:(long long)arg2 tribeName:(NSString *)arg3 bulletin:(NSString *)arg4 tribeInfo:(NSDictionary *)arg5 withError:(NSError *)arg6;
- (void)didFetchMemberNicknames:(NSArray *)arg1 inTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didFetchMembers:(NSArray *)arg1 ofTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didFetchMySelfInfo:(NSDictionary *)arg1 inTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didFetchInfo:(NSDictionary *)arg1 ofTribe:(NSString *)arg2 withError:(NSError *)arg3;
- (void)didFetchTribeList:(NSArray *)arg1 withRequestDict:(NSDictionary *)arg2 andError:(NSError *)arg3;
- (void)didSendTribeAtMessagesReadAck:(NSArray *)arg1 ofTribe:(NSString *)arg2 error:(NSError *)arg3;
- (void)didForwordContact:(NSString *)arg1 toEHelperId:(NSString *)arg2 andError:(NSError *)arg3;
- (void)didChangeEHelpServiceMode:(int)arg1 timeStamp:(unsigned long long)arg2 andError:(NSError *)arg3;
- (void)didGetEHelpServiceMode:(int)arg1 timeStamp:(unsigned long long)arg2 andError:(NSError *)arg3;
- (void)didReceiveRsponse:(NSString *)arg1 fromService:(unsigned long long)arg2 ofCommand:(unsigned long long)arg3 andError:(NSError *)arg4;
- (void)didMoveContactToGroup:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didDeleteGroup:(NSArray *)arg1 andError:(NSError *)arg2;
- (void)didMoveGroupToParentGroup:(NSArray *)arg1 andError:(NSError *)arg2;
- (void)didChangeGroupName:(NSArray *)arg1 andError:(NSError *)arg2;
- (void)didAddGroup:(WXStackGroupInfo *)arg1 andError:(NSError *)arg2;
- (void)didRequestToken:(NSString *)arg1 andType:(int)arg2 andUserData:(NSString *)arg3 andError:(NSError *)arg4;
- (void)didClearLocationInfoWithError:(NSError *)arg1;
- (void)didShakeForContacts:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didSearchPersonsNearBy:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didGetRecommendContacts:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didRemoveFromBlacklistWithMD5Phone:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didRemoveFromBlacklistAddAddToFriend:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didRemoveFromBlacklistWithId:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didAddContactToBlacklist:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didRequesetContactBlacklist:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didModifyContactCommentName:(WXStackContactInfo *)arg1 andError:(NSError *)arg2;
- (void)didRemoveContacts:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didResponseForAddContactRequest:(WXStackContactInfo *)arg1 withWXContactACKResponseOpType:(int)arg2 withWXContactACKResponseCode:(int)arg3 andError:(NSError *)arg4;
- (void)didAddContact:(WXStackContactInfo *)arg1 reqParams:(NSDictionary *)arg2 andError:(NSError *)arg3;
- (void)didRequestContactsGroupInfos:(WXStackBatchGroupsInfo *)arg1 andError:(NSError *)arg2;
- (void)didRequestContactsWXFriendFlag:(NSArray *)arg1 andError:(NSError *)arg2;
- (void)didRequestContactsListInfos:(WXStackBatchContactsInfo *)arg1 andError:(NSError *)arg2;
- (void)didReceiveOfflineContactAcceptRefuseOnOtherPlatform:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactAcceptOKOnOtherPlatform:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactNeedSyncInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactServerAddedInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactRequestAcceptedInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactAddedInfo:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineContactAddRequestVerification:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflinePublicAccountMsg:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineMsgWithError:(NSError *)arg1;
- (void)didReceiveOfflineMsgRemainingCount:(long long)arg1 responseTime:(long long)arg2 account:(NSString *)arg3;
- (void)didReceiveOfflinePipeMsgs:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflinePluginMsgs:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflinePluginMsg:(WXStackPlugin *)arg1;
- (void)didReceiveOfflineFriendRecommendMsg:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineRevoeMsg:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineP2PMsg:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didReceiveOfflineTribeSystemMessage:(NSArray *)arg1 account:(NSString *)arg2;
- (void)didGetServerContactsReadTimeStamp:(NSArray *)arg1 resultCode:(int)arg2 delContacts:(NSDictionary *)arg3 version:(NSNumber *)arg4 withError:(NSError *)arg5;
- (void)didSendBatchContactsReadTimeStampWithError:(NSError *)arg1;
- (void)didRemoveAllContactReadTimeStampWithError:(NSError *)arg1;
- (void)didRemoveContactReadTimeStampWithError:(NSError *)arg1;
- (void)didSendContactReadTimeStampWithError:(NSError *)arg1;
- (void)didSendBroadcast:(NSArray *)arg1 withError:(NSError *)arg2;
- (void)didSendTribeMessage:(WXStackTribeMsg *)arg1 withError:(NSError *)arg2;
- (void)didSendMultiChatMessage:(WXStackMessage *)arg1 withError:(NSError *)arg2;
- (void)didSendP2PMessage:(WXStackMessage *)arg1 withError:(NSError *)arg2;
@end
