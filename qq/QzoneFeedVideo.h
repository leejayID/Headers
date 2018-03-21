//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZVideoTADMetaData, QzoneFeedSVideoRemark, QzoneFeedVideoPlayCtrl;

@interface QzoneFeedVideo : QzoneModel
{
    _Bool _isOnWifiPlay;
    _Bool _isSetPlayOnWifi;
    _Bool _needReportPlayOnWifi;
    _Bool _disableAutoPlayByGlobalConfig;
    _Bool _hasMoreDanmaku;
    QzoneFeedVideoPlayCtrl *_videoPlayCtrl;
    long long _autoRefreshSecond;
    NSString *_searchKeyWords;
    long long _numberOfVideoTitleLineByGlobalConfig;
    long long _timeOfControlViewStayByGlobalConfig;
    NSMutableArray *_danmakuArray;
}

+ (id)excludedPropertyKeys;
@property(nonatomic) _Bool hasMoreDanmaku; // @synthesize hasMoreDanmaku=_hasMoreDanmaku;
@property(retain, nonatomic) NSMutableArray *danmakuArray; // @synthesize danmakuArray=_danmakuArray;
@property(nonatomic) _Bool disableAutoPlayByGlobalConfig; // @synthesize disableAutoPlayByGlobalConfig=_disableAutoPlayByGlobalConfig;
@property(nonatomic) long long timeOfControlViewStayByGlobalConfig; // @synthesize timeOfControlViewStayByGlobalConfig=_timeOfControlViewStayByGlobalConfig;
@property(nonatomic) long long numberOfVideoTitleLineByGlobalConfig; // @synthesize numberOfVideoTitleLineByGlobalConfig=_numberOfVideoTitleLineByGlobalConfig;
@property(retain, nonatomic) NSString *searchKeyWords; // @synthesize searchKeyWords=_searchKeyWords;
@property(nonatomic) long long autoRefreshSecond; // @synthesize autoRefreshSecond=_autoRefreshSecond;
@property(nonatomic) _Bool needReportPlayOnWifi; // @synthesize needReportPlayOnWifi=_needReportPlayOnWifi;
@property(nonatomic) _Bool isSetPlayOnWifi; // @synthesize isSetPlayOnWifi=_isSetPlayOnWifi;
@property(nonatomic) _Bool isOnWifiPlay; // @synthesize isOnWifiPlay=_isOnWifiPlay;
@property(retain, nonatomic) QzoneFeedVideoPlayCtrl *videoPlayCtrl; // @synthesize videoPlayCtrl=_videoPlayCtrl;
- (void).cxx_destruct;
- (id)keyLogInfo;
- (_Bool)isTXShareVideo;
- (_Bool)isTranscodeFinished;
- (_Bool)isThirdShareVideo;
- (id)validOriginURL;
- (long long)canPlayDuration;
- (_Bool)cyclePlay;
- (void)setCyclePlay:(_Bool)arg1;
- (_Bool)autoPlay;
- (void)setAutoPlay:(_Bool)arg1;
- (id)h265VideoUrl;
- (id)lowBitRateVideoUrl;
- (id)highBitRateVideoUrl;
- (id)normalVideoUrl;
- (id)writeFrom;
- (_Bool)disableUIOperation;
- (_Bool)isVod;
- (_Bool)isOnlyVoice;
- (_Bool)hasRealVideoUrl;

// Remaining properties
@property(retain, nonatomic) NSString *actionURL; // @dynamic actionURL;
@property(nonatomic) long long actiontype; // @dynamic actiontype;
@property(retain, nonatomic) NSString *adaptedData; // @dynamic adaptedData;
@property(retain, nonatomic) NSString *adaptedOrgUrl; // @dynamic adaptedOrgUrl;
@property(nonatomic) long long adaptedType; // @dynamic adaptedType;
@property(nonatomic) long long advDelayTime; // @dynamic advDelayTime;
@property(nonatomic) long long advPriority; // @dynamic advPriority;
@property(nonatomic) _Bool advShowed; // @dynamic advShowed;
@property(nonatomic) double bEnlargeRate; // @dynamic bEnlargeRate;
@property(nonatomic) long long bHeight; // @dynamic bHeight;
@property(nonatomic) long long bWidth; // @dynamic bWidth;
@property(retain, nonatomic) NSString *bigURL; // @dynamic bigURL;
@property(nonatomic) double cEnlargeRate; // @dynamic cEnlargeRate;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(retain, nonatomic) NSDictionary *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSString *currentURL; // @dynamic currentURL;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(retain, nonatomic) NSMutableDictionary *extraPlayInfo; // @dynamic extraPlayInfo;
@property(nonatomic) long long filetype; // @dynamic filetype;
@property(nonatomic) long long hHeight; // @dynamic hHeight;
@property(nonatomic) long long hWidth; // @dynamic hWidth;
@property(nonatomic) long long height; // @dynamic height;
@property(nonatomic) _Bool isAdapted; // @dynamic isAdapted;
@property(nonatomic) _Bool isShowLimitedVideoTips; // @dynamic isShowLimitedVideoTips;
@property(nonatomic) double lastPlayTimestamp; // @dynamic lastPlayTimestamp;
@property(nonatomic) double oEnlargeRate; // @dynamic oEnlargeRate;
@property(retain, nonatomic) NSString *originalURL; // @dynamic originalURL;
@property(nonatomic) long long playState; // @dynamic playState;
@property(nonatomic) unsigned char playType; // @dynamic playType;
@property(nonatomic) _Bool premovieAdvValid; // @dynamic premovieAdvValid;
@property(nonatomic) long long premovieFeedIndex; // @dynamic premovieFeedIndex;
@property(nonatomic) long long status; // @dynamic status;
@property(nonatomic) _Bool streamingPlay; // @dynamic streamingPlay;
@property(nonatomic) _Bool switchToFeedPage; // @dynamic switchToFeedPage;
@property(retain, nonatomic) QZVideoTADMetaData *tadReportData; // @dynamic tadReportData;
@property(copy, nonatomic) NSString *toast; // @dynamic toast;
@property(retain, nonatomic) NSString *videoID; // @dynamic videoID;
@property(nonatomic) struct CGSize videoLayoutSize; // @dynamic videoLayoutSize;
@property(nonatomic) unsigned long long videoOriginSize; // @dynamic videoOriginSize;
@property(copy, nonatomic) NSString *videoOriginURL; // @dynamic videoOriginURL;
@property(nonatomic) long long videoPlayCnt; // @dynamic videoPlayCnt;
@property(retain, nonatomic) QzoneFeedSVideoRemark *videoRemark; // @dynamic videoRemark;
@property(nonatomic) long long videoShowType; // @dynamic videoShowType;
@property(nonatomic) long long videoSource; // @dynamic videoSource;
@property(nonatomic) unsigned int videoTime; // @dynamic videoTime;
@property(retain, nonatomic) NSString *videoURL; // @dynamic videoURL;
@property(retain, nonatomic) NSDictionary *videoUrlDict; // @dynamic videoUrlDict;
@property(retain, nonatomic) NSString *videoWebviewURL; // @dynamic videoWebviewURL;
@property(nonatomic) long long videotype; // @dynamic videotype;
@property(nonatomic) long long width; // @dynamic width;

@end
