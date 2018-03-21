//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZUploadManagerSendBoxDelegate-Protocol.h>

@class NSString, QZPhotoPreUploader, QZUploadManager;

@interface QZMoodPoster : NSObject <QZUploadManagerSendBoxDelegate>
{
    QZUploadManager *_uploadManager;
    QZPhotoPreUploader *_preUploader;
    double _beginTime;
    double _beginUploadTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)newVideoCover:(id)arg1 inputVideo:(id)arg2;
- (void)didPacket:(id)arg1 processSuccess:(_Bool)arg2 condition:(id)arg3 error:(id)arg4;
- (void)saveVideoClientKey:(id)arg1;
- (double)videoDuration:(id)arg1;
- (id)compressParamWithVideoJob:(id)arg1 videoQuality:(long long)arg2;
- (_Bool)isNeedCompressWithVideoJob:(id)arg1 videoQuality:(long long)arg2;
- (void)uploadManager:(id)arg1 finishOperation:(id)arg2 taskID:(long long)arg3 taskDetail:(id)arg4;
- (void)uploadManager:(id)arg1 fail:(id)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 sucess:(id)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 total:(long long)arg2 recv:(long long)arg3 operation:(id)arg4 taskID:(long long)arg5 taskDetail:(id)arg6;
- (void)uploadManager:(id)arg1 updateStatus:(long long)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 chanceToModify:(_Bool)arg2 operation:(id)arg3 taskID:(long long)arg4 taskDetail:(id)arg5;
- (void)uploadManager:(id)arg1 beginOperation:(id)arg2 taskID:(long long)arg3 taskDetail:(id)arg4;
- (void)uploadMediaJob:(id)arg1;
- (void)packageMoodJob:(id)arg1;
- (void)addJob:(id)arg1;
- (id)uploadManager;
- (id)initWithUploadManager:(id)arg1 preUploader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
