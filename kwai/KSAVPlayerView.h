//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "KSPlayerView-Protocol.h"

@class AFHTTPRequestOperation, AVPlayer, AVPlayerItem, AVPlayerLayer, KSBaseModel, NSArray, NSString, NSTimer, NSURL, UILabel, UIView;

@interface KSAVPlayerView : UIImageView <AVAssetResourceLoaderDelegate, KSPlayerView>
{
    _Bool _localFile;
    _Bool _customDNS;
    _Bool _snapshotWhenPauseOrStop;
    _Bool _hasCacheBeforePlay;
    _Bool _shouldResumeFromPausedTime;
    _Bool _useCache;
    _Bool _isSetURL;
    _Bool _played;
    _Bool _downloaded;
    float _rate;
    int _currentTryCount;
    int _returnCount;
    int _videoWidth;
    int _videoHeight;
    float _videoFps;
    float _videoKbps;
    unsigned long long _status;
    NSString *_dnsResolveHost;
    NSString *_dnsResolvedIp;
    NSString *_dnsResolverName;
    NSString *_dns_ip;
    CDUnknownBlockType _remoteIPResolvedAction;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _requestErrorBlock;
    CDUnknownBlockType _cancelRequestBlock;
    CDUnknownBlockType _userCacheBlock;
    CDUnknownBlockType _startPlayBlock;
    CDUnknownBlockType _stalledBlock;
    CDUnknownBlockType _didPlayAtTime;
    CDUnknownBlockType _didPlayAtEnd;
    NSString *_path;
    NSArray *_cdns;
    NSString *_cacheKey;
    CDUnknownBlockType _didFinishLoadDuration;
    long long _expectedSize;
    long long _receivedSize;
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
    AFHTTPRequestOperation *_operation;
    KSBaseModel *_model;
    UIView *_snapshotView;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    id _playerObserver;
    long long _tryPlayCount;
    long long _currentCdnIndex;
    UILabel *_debugInfoLabel;
    NSTimer *_debugTimer;
    NSString *_metadata;
    CDStruct_e83c9415 _playRange;
}

+ (void)resetAvailable;
+ (_Bool)available;
@property(nonatomic) float videoKbps; // @synthesize videoKbps=_videoKbps;
@property(nonatomic) float videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(retain, nonatomic) UILabel *debugInfoLabel; // @synthesize debugInfoLabel=_debugInfoLabel;
@property(nonatomic) long long currentCdnIndex; // @synthesize currentCdnIndex=_currentCdnIndex;
@property(nonatomic) long long tryPlayCount; // @synthesize tryPlayCount=_tryPlayCount;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) _Bool played; // @synthesize played=_played;
@property(retain, nonatomic) id playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) KSBaseModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AFHTTPRequestOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isSetURL; // @synthesize isSetURL=_isSetURL;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
@property(nonatomic) int returnCount; // @synthesize returnCount=_returnCount;
@property(nonatomic) int currentTryCount; // @synthesize currentTryCount=_currentTryCount;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) _Bool shouldResumeFromPausedTime; // @synthesize shouldResumeFromPausedTime=_shouldResumeFromPausedTime;
@property(nonatomic) CDStruct_e83c9415 playRange; // @synthesize playRange=_playRange;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadDuration; // @synthesize didFinishLoadDuration=_didFinishLoadDuration;
@property(nonatomic) _Bool hasCacheBeforePlay; // @synthesize hasCacheBeforePlay=_hasCacheBeforePlay;
@property(nonatomic) _Bool snapshotWhenPauseOrStop; // @synthesize snapshotWhenPauseOrStop=_snapshotWhenPauseOrStop;
@property(nonatomic) _Bool customDNS; // @synthesize customDNS=_customDNS;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSArray *cdns; // @synthesize cdns=_cdns;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool localFile; // @synthesize localFile=_localFile;
@property(copy, nonatomic) CDUnknownBlockType didPlayAtEnd; // @synthesize didPlayAtEnd=_didPlayAtEnd;
@property(copy, nonatomic) CDUnknownBlockType didPlayAtTime; // @synthesize didPlayAtTime=_didPlayAtTime;
@property(copy, nonatomic) CDUnknownBlockType stalledBlock; // @synthesize stalledBlock=_stalledBlock;
@property(copy, nonatomic) CDUnknownBlockType startPlayBlock; // @synthesize startPlayBlock=_startPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType userCacheBlock; // @synthesize userCacheBlock=_userCacheBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelRequestBlock; // @synthesize cancelRequestBlock=_cancelRequestBlock;
@property(copy, nonatomic) CDUnknownBlockType requestErrorBlock; // @synthesize requestErrorBlock=_requestErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType remoteIPResolvedAction; // @synthesize remoteIPResolvedAction=_remoteIPResolvedAction;
@property(retain, nonatomic) NSString *dns_ip; // @synthesize dns_ip=_dns_ip;
@property(retain, nonatomic) NSString *dnsResolverName; // @synthesize dnsResolverName=_dnsResolverName;
@property(retain, nonatomic) NSString *dnsResolvedIp; // @synthesize dnsResolvedIp=_dnsResolvedIp;
@property(retain, nonatomic) NSString *dnsResolveHost; // @synthesize dnsResolveHost=_dnsResolveHost;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)resetPlayerRateWithIsResume:(_Bool)arg1;
- (void)resetPlayerRate;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (double)currentPlayTime;
- (double)totalTime;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (id)proxyURLWithSourceName:(id)arg1;
- (id)_nextUrl;
- (void)playWithoutCache;
- (void)playerItemNewErrorLogEntry:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemPlaybackStalled:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)play;
- (id)qosInfo;
- (float)averageDisplayFps;
- (double)duration;
- (_Bool)isCached;
- (void)hideSnapshot;
- (void)showSnapshot;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long prefetchSize;
@property(copy, nonatomic) CDUnknownBlockType stalledDidEndBlock;
@property(readonly) Class superclass;

@end
