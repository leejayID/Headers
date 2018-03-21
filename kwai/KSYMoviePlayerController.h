//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSYMediaPlayback-Protocol.h"

@class IJKFFMoviePlayerController, KSYQosInfo, NSArray, NSString, NSTimer, NSURL, UIView;

@interface KSYMoviePlayerController : NSObject <KSYMediaPlayback>
{
    IJKFFMoviePlayerController *_player;
    _Bool isReloading;
    _Bool _isLive;
    double _loadingStartTime;
    double _preparePlayStart;
    double _firstScreenElapsed;
    double _pauseDuration;
    double _pauseStartTime;
    NSURL *_url;
    NSTimer *_qosTimer;
    long long _tickStartTime;
    long long _playStartTime;
    long long _lastSampleTime;
    long long _lastRecordTime;
    int _retry_cnt;
    int _lastVideoDecErrorCount;
    int _lastBufferEmptyCount;
    int _lastDroppedDuration;
    int _lastDecodedVideoFrameCount;
    int _lastDisplayedFrameCount;
    double _lastBufferEmptyDuration;
    double _lastTotalBufferTimeCurrentLive;
    _Bool _isBuffering;
    double _lastReadSize;
    long long _qos_acached;
    long long _qos_vcached;
    int _qos_cpu_usage;
    int *_cpu_stats;
    int _cpu_stats_length;
    NSArray *_cpu_rate_fields;
    int *_video_buffer_len_stats;
    int *_audio_buffer_len_stats;
    int _buffer_len_stats_length;
    NSArray *_buffer_len_stats_fields;
    struct DelayStat_t _lastAudioRenderDelayinfo;
    struct DelayStat_t _lastVideoRecvDelayInfo;
    struct DelayStat_t _lastVideoPreDecDelayInfo;
    struct DelayStat_t _lastVideoPostDecDelayInfo;
    struct DelayStat_t _lastVideoRenderDelayInfo;
    struct SpeedChangeStat_t _lastSpeedChangeInfo;
    long long _errorCode;
    NSString *_host;
    _Bool isPreparedToPlay;
    _Bool _shouldEnableKSYStatModule;
    _Bool _isReadDataTimeout;
    _Bool _shouldEnableVideoPostProcessing;
    _Bool _enableQosStat;
    _Bool _shouldDisplayInternal;
    double currentPlaybackTime;
    NSURL *_contentURL;
    CDUnknownBlockType _logBlock;
    double _bufferEmptyDuration;
    long long _bufferEmptyCount;
    KSYQosInfo *_qosInfo;
    long long _qosTickDuration;
    CDUnknownBlockType _videoDataBlock;
    CDUnknownBlockType _audioDataBlock;
    CDUnknownBlockType _qosStatBlock;
    long long _playbackState;
}

+ (void)setKwaiLogCallBack:(CDUnknownFunctionPointerType)arg1;
+ (id)getVersionExt;
+ (id)getVersion;
+ (_Bool)isPlayerInnerError:(long long)arg1;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(copy, nonatomic) CDUnknownBlockType qosStatBlock; // @synthesize qosStatBlock=_qosStatBlock;
@property(copy, nonatomic) CDUnknownBlockType audioDataBlock; // @synthesize audioDataBlock=_audioDataBlock;
@property(copy, nonatomic) CDUnknownBlockType videoDataBlock; // @synthesize videoDataBlock=_videoDataBlock;
@property(nonatomic) _Bool shouldDisplayInternal; // @synthesize shouldDisplayInternal=_shouldDisplayInternal;
@property(nonatomic) _Bool enableQosStat; // @synthesize enableQosStat=_enableQosStat;
@property(nonatomic) long long qosTickDuration; // @synthesize qosTickDuration=_qosTickDuration;
@property(nonatomic) _Bool shouldEnableVideoPostProcessing; // @synthesize shouldEnableVideoPostProcessing=_shouldEnableVideoPostProcessing;
@property(readonly, nonatomic) _Bool isReadDataTimeout; // @synthesize isReadDataTimeout=_isReadDataTimeout;
@property(retain, nonatomic) KSYQosInfo *qosInfo; // @synthesize qosInfo=_qosInfo;
@property(readonly, nonatomic) long long bufferEmptyCount; // @synthesize bufferEmptyCount=_bufferEmptyCount;
@property(readonly, nonatomic) double bufferEmptyDuration; // @synthesize bufferEmptyDuration=_bufferEmptyDuration;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(nonatomic) _Bool shouldEnableKSYStatModule; // @synthesize shouldEnableKSYStatModule=_shouldEnableKSYStatModule;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (long long)getSpeedChangeInfo:(struct SpeedChangeStat_t *)arg1;
- (long long)getVideoRenderDelayInfo:(struct DelayStat_t *)arg1;
- (long long)getVideoPostDecDelayInfo:(struct DelayStat_t *)arg1;
- (long long)getVideoPreDecDelayInfo:(struct DelayStat_t *)arg1;
- (long long)getVideoRecvDelayInfo:(struct DelayStat_t *)arg1;
- (long long)getAudioRenderDelayInfo:(struct DelayStat_t *)arg1;
- (long long)getDisplayedFrameCount;
- (long long)getDecodedVideoFrameCount;
- (long long)getDroppedDuration;
- (long long)getVideoDecErrorCount;
- (id)getStreamId;
- (struct cJSON *)getCpuUsageMetric;
- (struct cJSON *)getAudioBufferLenMetric;
- (struct cJSON *)getVideoBufferLenMetric;
- (void)recordCpuStat:(float)arg1 timeInterval:(long long)arg2;
- (void)computeCpuUsage:(long long)arg1;
- (void)recordVideoBufferLenStat:(long long)arg1 timeInterval:(long long)arg2;
- (void)recordAudioBufferLenStat:(long long)arg1 timeInterval:(long long)arg2;
- (void)computeBufferLen:(long long)arg1;
- (id)getRealTimeStatJson:(long long)arg1;
- (struct cJSON *)getHostJson;
- (struct cJSON *)getPlayUrlJson;
- (struct cJSON *)getSpeedChangeJson:(long long)arg1;
- (struct SpeedChangeStat_t)getSpeedChangeInfoDelta:(struct SpeedChangeStat_t *)arg1 newInfo:(struct SpeedChangeStat_t *)arg2;
- (void)getAvDelayJson:(struct cJSON *)arg1;
- (struct DelayStat_t)getDelayInfoDelta:(struct DelayStat_t *)arg1 newInfo:(struct DelayStat_t *)arg2;
- (void)sampleStat:(id)arg1;
- (void)clearLastData;
- (void)clearMetric;
- (void)sample:(long long)arg1;
- (void)stopQosStatTimer;
- (void)startQosStatTimer;
- (void)setConfigJson:(id)arg1;
- (double)getVideoDecodeFramesPerSecond;
- (double)getVideoOutputFPS;
- (double)getVideoDecodeFPS;
- (void)updateCurrentWallClock:(long long)arg1;
- (long long)getHttpCode;
- (long long)getResponseTime;
- (long long)getConnectTime;
- (long long)getDnsTime;
- (void)seekAtStart:(int)arg1;
- (void)setPreReadDuration:(int)arg1;
- (id)getMetadata;
- (void)setVolume:(float)arg1 rigthVolume:(float)arg2;
- (void)setNetWorkConnectionTimeout:(int)arg1;
- (void)setDataReadTimeout:(int)arg1;
@property(readonly, nonatomic) float averageDisplayFps;
@property(readonly, nonatomic) NSString *statJson;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) long long dtsDuration;
@property(readonly, nonatomic) double readSize;
- (id)thumbnailImageAtCurrentTime;
- (void)setBufferSmoothTime:(int)arg1;
- (void)setBufferIncrementStep:(int)arg1;
- (void)setMinBufferTime:(int)arg1;
- (void)setFirstBufferTime:(int)arg1;
- (void)setBufferStrategy:(int)arg1;
@property double bufferTimeMax;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)onPlayerPlayToEnd:(id)arg1;
- (void)onPlayerAccurateSeekCompleteCurPos:(id)arg1;
- (void)onPlayerAccurateSeekComplete:(id)arg1;
- (void)onPlayerFirstAudioFrameRendered:(id)arg1;
- (void)onPlayerFirstVideoFrameRendered:(id)arg1;
- (void)onPlayerPlaybackFinished:(id)arg1;
- (void)onPlayerPlaybackStateChanged:(id)arg1;
- (void)onPlayerNaturalSizeAvailable:(id)arg1;
- (void)onPlayerLoadStateChanged:(id)arg1;
- (double)getCurrentTime;
- (void)onPlayerPrepared:(id)arg1;
- (long long)convertErrorCode:(int)arg1;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime;
@property(readonly, nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay;
- (void)reload:(id)arg1 is_flush:(_Bool)arg2;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
@property(nonatomic) long long scalingMode;
@property(readonly, nonatomic) unsigned long long loadState;
- (unsigned long long)convertLoadState:(unsigned long long)arg1;
@property(nonatomic) int rotateDegress;
@property(nonatomic) _Bool shouldLoop;
@property(nonatomic) _Bool shouldMute;
@property(nonatomic) _Bool shouldUseHWCodec;
@property(nonatomic) _Bool isLive;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) long long controlStyle;
- (_Bool)isPlaying;
- (void)freeResource;
- (void)applyOptions:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithContentURL:(id)arg1 withHeaders:(id)arg2;
- (void)onInit:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) UIView *view;

@end
