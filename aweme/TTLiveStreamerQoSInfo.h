//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTLiveStreamerQoSInfo : NSObject
{
    int _lastFrames;
    int _raiseCnt;
    int _dropCnt;
    long long _audioOutputKByte;
    long long _uploadedKByte;
    long long _droppedVideoFrames;
    long long _currentRtmpBufSize;
    long long _videoEncodeInputFrames;
    long long _videoEncodeOutputFrames;
    long long _videoMixInputFrames;
    long long _videoMixOutputFrames;
    NSString *_rtmpServerIP;
    double _lastSecond;
    long long _lastByte;
    long long _lastDroppedF;
    NSString *_netEventRaiseDrop;
    double _startTime;
    long long _time_overstock;
    long long _time_highcpu;
    long long _time_total;
    long long _reportTotalUploadKByte;
    long long _reportInitUploadKByte;
    long long _reportInitEncodeInputFrames;
    long long _reportInitEncodeOutputFrames;
    long long _reportInitMixInputFrames;
    long long _reportInitMixOutputFrames;
    long long _reportAudioOutputKByte;
}

+ (float)cpuUsage;
+ (id)timeFormatted:(int)arg1;
+ (id)sizeFormatted:(long long)arg1;
@property long long reportAudioOutputKByte; // @synthesize reportAudioOutputKByte=_reportAudioOutputKByte;
@property long long reportInitMixOutputFrames; // @synthesize reportInitMixOutputFrames=_reportInitMixOutputFrames;
@property long long reportInitMixInputFrames; // @synthesize reportInitMixInputFrames=_reportInitMixInputFrames;
@property long long reportInitEncodeOutputFrames; // @synthesize reportInitEncodeOutputFrames=_reportInitEncodeOutputFrames;
@property long long reportInitEncodeInputFrames; // @synthesize reportInitEncodeInputFrames=_reportInitEncodeInputFrames;
@property long long reportInitUploadKByte; // @synthesize reportInitUploadKByte=_reportInitUploadKByte;
@property long long reportTotalUploadKByte; // @synthesize reportTotalUploadKByte=_reportTotalUploadKByte;
@property long long time_total; // @synthesize time_total=_time_total;
@property long long time_highcpu; // @synthesize time_highcpu=_time_highcpu;
@property long long time_overstock; // @synthesize time_overstock=_time_overstock;
@property int dropCnt; // @synthesize dropCnt=_dropCnt;
@property double startTime; // @synthesize startTime=_startTime;
@property int raiseCnt; // @synthesize raiseCnt=_raiseCnt;
@property(copy, nonatomic) NSString *netEventRaiseDrop; // @synthesize netEventRaiseDrop=_netEventRaiseDrop;
@property long long lastDroppedF; // @synthesize lastDroppedF=_lastDroppedF;
@property int lastFrames; // @synthesize lastFrames=_lastFrames;
@property long long lastByte; // @synthesize lastByte=_lastByte;
@property double lastSecond; // @synthesize lastSecond=_lastSecond;
@property(copy, nonatomic) NSString *rtmpServerIP; // @synthesize rtmpServerIP=_rtmpServerIP;
@property(nonatomic) long long videoMixOutputFrames; // @synthesize videoMixOutputFrames=_videoMixOutputFrames;
@property(nonatomic) long long videoMixInputFrames; // @synthesize videoMixInputFrames=_videoMixInputFrames;
@property(nonatomic) long long videoEncodeOutputFrames; // @synthesize videoEncodeOutputFrames=_videoEncodeOutputFrames;
@property(nonatomic) long long videoEncodeInputFrames; // @synthesize videoEncodeInputFrames=_videoEncodeInputFrames;
@property(nonatomic) long long currentRtmpBufSize; // @synthesize currentRtmpBufSize=_currentRtmpBufSize;
@property(nonatomic) long long droppedVideoFrames; // @synthesize droppedVideoFrames=_droppedVideoFrames;
@property(nonatomic) long long uploadedKByte; // @synthesize uploadedKByte=_uploadedKByte;
@property(nonatomic) long long audioOutputKByte; // @synthesize audioOutputKByte=_audioOutputKByte;
- (void).cxx_destruct;
- (void)initStatData;
- (id)init;
- (void)dealloc;

@end
