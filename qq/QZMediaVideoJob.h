//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZMediaJob.h>

@class AVAsset, NSDictionary, NSError, NSString;

@interface QZMediaVideoJob : QZMediaJob
{
    _Bool _needProcess;
    _Bool _needCompress;
    long long _processStatus;
    NSError *_processError;
}

+ (id)excludedPropertyKeys;
@property(retain, nonatomic) NSError *processError; // @synthesize processError=_processError;
@property(nonatomic) long long processStatus; // @synthesize processStatus=_processStatus;
@property(nonatomic) _Bool needCompress; // @synthesize needCompress=_needCompress;
@property(nonatomic) _Bool needProcess; // @synthesize needProcess=_needProcess;
- (void).cxx_destruct;
- (id)createVideoCoverPacketWithBatchJob:(id)arg1;
- (_Bool)persistent;

// Remaining properties
@property(copy, nonatomic) NSString *coverFilePath; // @dynamic coverFilePath;
@property(copy, nonatomic) NSString *editVideoPath; // @dynamic editVideoPath;
@property(nonatomic) _Bool isCompressed; // @dynamic isCompressed;
@property(nonatomic) _Bool isEdited; // @dynamic isEdited;
@property(nonatomic) _Bool isLocal; // @dynamic isLocal;
@property(retain, nonatomic) AVAsset *videoAsset; // @dynamic videoAsset;
@property(nonatomic) double videoDuration; // @dynamic videoDuration;
@property(retain, nonatomic) NSDictionary *videoEditInfo; // @dynamic videoEditInfo;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(nonatomic) struct CGSize videoViewSize; // @dynamic videoViewSize;

@end

