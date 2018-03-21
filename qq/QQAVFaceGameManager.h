//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AVFunChatMgrFaceExpressionDelegate-Protocol.h>
#import <QQMainProject/QQAVFaceGameViewDelegate-Protocol.h>

@class NSString, QQAVFaceGameViewController, UIImage, VRBFaceGameEngine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface QQAVFaceGameManager : NSObject <QQAVFaceGameViewDelegate, AVFunChatMgrFaceExpressionDelegate>
{
    _Bool _isFirstScreened;
    _Bool _startExpressionMaker;
    _Bool _p2pVcReleased;
    _Bool _redbagComeAnimationFinished;
    _Bool _playerReady2Start;
    int _currentFaceId;
    int _currentExpId;
    float _totalScore;
    int _count;
    int _lowerFirstGradeCount;
    int _lowerSecondGradeCount;
    int _refuseOfCloseEyeCount;
    int _refuseOfNoneFaceCount;
    int _musicId;
    int _enterType;
    int _maxScore;
    int _totalEmojiCount;
    int _faceGameCheckState;
    int _playerGameState;
    int _frameSeq;
    QQAVFaceGameViewController *_controller;
    UIImage *_cameraSnapImage;
    UIImage *_faceSnapImage;
    VRBFaceGameEngine *_faceGameEngine;
    NSObject<OS_dispatch_queue> *_facegameQueue;
    long long _friendUin;
    NSObject<OS_dispatch_source> *_faceGameTimer;
    double _faceGameStartTime;
    double _frameDelayTime;
}

+ (id)getInstance;
@property int frameSeq; // @synthesize frameSeq=_frameSeq;
@property double frameDelayTime; // @synthesize frameDelayTime=_frameDelayTime;
@property int playerGameState; // @synthesize playerGameState=_playerGameState;
@property int faceGameCheckState; // @synthesize faceGameCheckState=_faceGameCheckState;
@property double faceGameStartTime; // @synthesize faceGameStartTime=_faceGameStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *faceGameTimer; // @synthesize faceGameTimer=_faceGameTimer;
@property(nonatomic) _Bool playerReady2Start; // @synthesize playerReady2Start=_playerReady2Start;
@property(nonatomic) _Bool redbagComeAnimationFinished; // @synthesize redbagComeAnimationFinished=_redbagComeAnimationFinished;
@property long long friendUin; // @synthesize friendUin=_friendUin;
@property(nonatomic) _Bool p2pVcReleased; // @synthesize p2pVcReleased=_p2pVcReleased;
@property int totalEmojiCount; // @synthesize totalEmojiCount=_totalEmojiCount;
@property int maxScore; // @synthesize maxScore=_maxScore;
@property int enterType; // @synthesize enterType=_enterType;
@property int musicId; // @synthesize musicId=_musicId;
@property(nonatomic) int refuseOfNoneFaceCount; // @synthesize refuseOfNoneFaceCount=_refuseOfNoneFaceCount;
@property(nonatomic) int refuseOfCloseEyeCount; // @synthesize refuseOfCloseEyeCount=_refuseOfCloseEyeCount;
@property(nonatomic) int lowerSecondGradeCount; // @synthesize lowerSecondGradeCount=_lowerSecondGradeCount;
@property(nonatomic) int lowerFirstGradeCount; // @synthesize lowerFirstGradeCount=_lowerFirstGradeCount;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) float totalScore; // @synthesize totalScore=_totalScore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *facegameQueue; // @synthesize facegameQueue=_facegameQueue;
@property(nonatomic) int currentExpId; // @synthesize currentExpId=_currentExpId;
@property(nonatomic) int currentFaceId; // @synthesize currentFaceId=_currentFaceId;
@property(retain, nonatomic) VRBFaceGameEngine *faceGameEngine; // @synthesize faceGameEngine=_faceGameEngine;
@property(nonatomic) _Bool startExpressionMaker; // @synthesize startExpressionMaker=_startExpressionMaker;
@property(retain, nonatomic) UIImage *faceSnapImage; // @synthesize faceSnapImage=_faceSnapImage;
@property(retain, nonatomic) UIImage *cameraSnapImage; // @synthesize cameraSnapImage=_cameraSnapImage;
@property(nonatomic) _Bool isFirstScreened; // @synthesize isFirstScreened=_isFirstScreened;
@property(retain, nonatomic) QQAVFaceGameViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (int)getPlayerTotalScore;
- (int)getPlayerHitScore;
- (int)getPlayerTotalCount;
- (int)getPlayerHitCount;
- (void)updatePlayerHitCount:(int)arg1 hitScore:(int)arg2;
- (void)expressionRdmReportWhenMiss;
- (void)expressionRdmReportWhenHit:(double)arg1;
- (id)expressionHitEventNameByFaceId:(int)arg1;
- (void)setStandardItemByExpressionID:(int)arg1;
- (void)showGrayTips:(long long)arg1;
- (void)onAvGrapRedGift:(long long)arg1 WithScore:(id)arg2 andTotalScore:(id)arg3 andListID:(id)arg4 andAuthkey:(id)arg5;
- (void)onFocusEnd;
- (void)onFocusChanged:(int)arg1 expId:(int)arg2;
- (void)onFocusStart:(int)arg1 expId:(int)arg2;
- (void)onFaceRemove:(id)arg1;
- (void)onFaceAdd:(id)arg1;
- (void)faceExpressionMarker:(id)arg1;
- (_Bool)isNeedScreenSnapWithFaceId:(int)arg1;
- (id)getFaceGamePlayerFrameSyncInfoModel;
- (id)getFaceGameLookerFrameSyncInfoModel;
- (id)getFaceGamePlayerFrameSyncDataInfo;
- (void)checkFaceGameLookerState;
- (void)stopCheckFaceGameLookerState;
- (void)startCheckFaceGameLookerState;
- (void)initCheckFaceGameLookerState;
- (void)updatePlayerGameState:(int)arg1;
- (void)updateFaceGameLookerFrameSyncDataInfo:(id)arg1;
- (void)updateFaceGameLookerFrameSyncInfoModel:(id)arg1;
- (void)updateFaceGamePlayerFrameSyncInfoModel:(id)arg1;
- (void)responseFaceGameExceptionTipFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseFaceGameCameraTipFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseFaceGameWindowTipFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseFaceGameShowResultFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseEndFaceGameFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseRunningFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseCountDownFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseBegineFaceGameFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)responseC2CSyncInfoFrom:(long long)arg1 withDataModel:(id)arg2;
- (void)sendFaceGameExceptionWithUin:(long long)arg1 withExceptionType:(int)arg2;
- (void)sendFaceGameCameraTipWithUin:(long long)arg1;
- (void)sendFaceGameWindowTipWithUin:(long long)arg1;
- (void)sendFaceGameResultWithUin:(long long)arg1 withResultInfoModel:(id)arg2;
- (void)sendEndFaceGameWithUin:(long long)arg1 withResultInfoModel:(id)arg2;
- (void)sendFaceGameRunningWithUin:(long long)arg1;
- (void)sendFaceGameCountdownWithUin:(long long)arg1;
- (void)sendBegineFaceGameWithUin:(long long)arg1;
- (void)startPlayerFaceGame:(long long)arg1;
- (void)playerBegineFaceGameWith:(long long)arg1;
- (int)getLookerFaceGameState;
- (void)setLookerFaceGameState:(int)arg1;
- (int)getPlayerFaceGameState;
- (void)setPlayerFaceGameState:(int)arg1;
- (void)playerReadyFaceGameWith:(long long)arg1 withRedPacketId:(id)arg2 withTotalMoney:(int)arg3;
- (void)lookerBegineFaceGameWith:(long long)arg1;
- (void)updateFaceGameRedPacketId:(id)arg1 totalMoney:(int)arg2;
- (void)createFaceGameViewController:(int)arg1;
- (void)stopLookerFaceGame;
- (void)destoryPlayerViewController:(long long)arg1;
- (void)stopPlayerFaceGame;
- (void)startFaceGameWithUin:(long long)arg1 withRedPacketId:(id)arg2 withTotalMoney:(int)arg3 withEnterType:(int)arg4;
- (id)randomList:(id)arg1;
- (id)randomGenerateFaceGameList;
- (id)getRandomFaceGameList;
- (int)getFaceGameTotalEmojiNum;
- (int)getFaceGameMaxScore;
- (int)getFaceGameEnterTyoe;
- (int)getFaceGameMusicId;
- (void)setIsPlayerReady2Start:(_Bool)arg1;
- (void)setIsRedbagComeAnimationFinished:(_Bool)arg1;
- (void)releaseResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
