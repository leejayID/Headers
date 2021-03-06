//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FADBAgent, NSLock, NSMutableDictionary, NSTimer;

@interface FADataCenter : NSObject
{
    FADBAgent *_DBAgent;
    long long _fileRecordTotalCount;
    long long _onlineFileRecordTotalCount;
    NSMutableDictionary *_fileRecordCache;
    unsigned long long _selfUin;
    NSTimer *_cacheCleaner;
    NSLock *_cacheLock;
    _Bool _isBackground;
}

+ (void)updateFileTransferState:(id)arg1 isSyncMsgState:(_Bool)arg2 isSyncMsgTime:(_Bool)arg3;
+ (void)updateFileRecord:(id)arg1 syncWithDeleteFlag:(int)arg2;
+ (void)updateFileRecord:(id)arg1;
+ (void)asyncUpdateFileRecordWithChildThread:(id)arg1;
+ (id)queryFileRecord:(unsigned long long)arg1;
+ (id)getInstance;
- (int)getFileListByRelativeId:(unsigned long long)arg1 callBack:(id)arg2;
- (id)syncFileRecordFromCache:(id)arg1;
- (id)createZipFileRecord:(id)arg1 downInfo:(id)arg2 relativeId:(unsigned long long)arg3;
- (id)queryZipFileRecord:(id)arg1;
- (void)clearExpiredDiscussFileRecord;
- (void)clearExpiredOfflineFileRecord;
- (int)readLatestOfflineMsgUuidWithcallback:(id)arg1;
- (int)readLatestDiscussMsgUuidWithcallback:(id)arg1;
- (id)queryWeiYunFileListRecord:(id)arg1;
- (id)queryOfflineFileListRecord:(id)arg1;
- (id)queryLocalFileListRecord:(id)arg1;
- (id)querySystemFileListRecord:(unsigned long long)arg1;
- (id)queryFileRecordFromDB:(unsigned long long)arg1;
- (_Bool)saveOnlineFileExtInfo:(id)arg1 JobID:(unsigned long long)arg2;
- (id)getOfflineFileRecordByUin:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (id)getOnlineFileRecordByUin:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (int)getRecentOnlineFileRecord:(unsigned long long)arg1 callback:(id)arg2;
- (id)getRecentOnlineFileRecord:(unsigned long long)arg1;
- (void)updateFileTransferState:(id)arg1 isSyncMsgState:(_Bool)arg2 isSyncMsgTime:(_Bool)arg3;
- (void)updateFileRecord:(id)arg1 syncWithDeleteFlag:(int)arg2;
- (void)resetFileRemark:(id)arg1;
- (void)updateFileRecord:(id)arg1;
- (void)updateFileRecordUrl:(id)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordUuid:(id)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordUniMsgSeqInternal:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordUniMsgSeq:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordTimeInternal:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordTime:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (void)updateFileRecordLinkedWeiYunID:(unsigned long long)arg1 withJobID:(unsigned long long)arg2;
- (id)queryFileRecord4FTSFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 uin:(unsigned long long)arg3 uinType:(int)arg4;
- (id)queryFileRecordFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 uin:(unsigned long long)arg3 uinType:(int)arg4;
- (id)queryFileRecordFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 businessFilter:(unsigned long long)arg3 uin:(unsigned long long)arg4 uinType:(int)arg5;
- (_Bool)isFilter:(unsigned long long)arg1 model:(id)arg2;
- (unsigned int)queryFileRecordTotal;
- (int)queryFileRecordDeleteFlag:(unsigned long long)arg1;
- (id)queryFileRecordByUIN:(id)arg1 uniMsgSeq:(unsigned long long)arg2 msgFlag:(int)arg3;
- (id)queryFileRecordByUIN:(id)arg1 andMsgId:(int)arg2 andMsgTime:(unsigned long long)arg3 msgFlag:(int)arg4;
- (id)queryLocalFileRecordByWeiYunID:(id)arg1;
- (id)queryLocalFileRecordByUUID:(id)arg1;
- (id)queryFileRecordByWeiYunID:(id)arg1;
- (id)queryFileRecordLikeModel:(id)arg1;
- (id)queryFileRecordByUUID:(id)arg1;
- (id)queryFileRecord:(unsigned long long)arg1;
- (void)deleteFileRecord:(unsigned long long)arg1;
- (void)deleteFileRecordFromFA:(unsigned long long)arg1;
- (void)reinsertFileRecordToFA:(unsigned long long)arg1;
- (void)deleteFileRecordFromAIOWithUin:(unsigned long long)arg1 isDiscuss:(_Bool)arg2;
- (void)deleteFileRecordFromAIO:(unsigned long long)arg1;
- (void)insertFileRecord:(id)arg1 isDisplayInRecentFileList:(_Bool)arg2;
- (void)insertFileRecordToCache:(id)arg1;
- (void)depositDatalineFileRecord:(unsigned long long)arg1 filePath:(id)arg2 isSend:(_Bool)arg3;
- (void)depositGroupFileRecord:(id)arg1 fileSize:(unsigned long long)arg2 remark:(id)arg3 groupCode:(unsigned long long)arg4 fileID:(id)arg5;
- (_Bool)isFileRecordExist:(unsigned long long)arg1;
- (void)resetFileRecordCountFlag;
- (void)onCacheCleanTime:(id)arg1;
- (void)killCacheCleaner;
- (void)startCacheCleaner;
- (void)ResetCacheCleaner;
- (void)changeAccount;
- (_Bool)isCurrentBackGround;
- (void)onFileModuleBecomeActive;
- (void)onFileModuleResignedActive;
- (void)dealloc;
- (id)init;
- (_Bool)updateNearByFilePath:(unsigned long long)arg1 path:(id)arg2;
- (_Bool)addFileRecordNbOnly:(id)arg1;
- (id)getFileRecordInRecentListFromStartLocationEx_Org:(unsigned long long)arg1 toEndLocation:(unsigned long long)arg2;
- (id)getFileRecordInRecentListFromStartLocationEx:(unsigned long long)arg1 toEndLocation:(unsigned long long)arg2;

@end

