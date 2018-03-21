//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/DragLyricViewDelegate-Protocol.h>
#import <QQMainProject/MQZoneLBSPOIViewControllerDelegate-Protocol.h>
#import <QQMainProject/MusicControlDelegate-Protocol.h>
#import <QQMainProject/PECropViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/QZCPUMonitorDelegate-Protocol.h>
#import <QQMainProject/QZLVBadNetworkControllerDelegate-Protocol.h>
#import <QQMainProject/QZLVRoleSwitchControllerDelegate-Protocol.h>
#import <QQMainProject/QZLVStartLiveViewDelegate-Protocol.h>
#import <QQMainProject/QZLVVideoQualityDelegate-Protocol.h>
#import <QQMainProject/QZLVVideoViewDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class AudioCategoryModel, KSLyricPannel, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, QZJNsQqradioProtocolGetRoomIDRsp, QZJNsQqradioProtocolLiveShowNotice, QZJNsQqradioProtocolLiveShowRoomInfo, QZJNsQqradioProtocolUserOnlineRsp, QZLVCoverBgView, QZLVErrorTipsView, QZLVLikeAnimationController, QZLVMusicControlView, QZLVMusicManager, QZLVMusicVolumeView, QZLVStartView, QZLVVideoView, QZLiveInfo, QZScreenShotShareView, UIBlurEffect, UIButton, UIImageView, UILabel, UIToolbar, UIView, UIViewController, UIVisualEffectView, UIWebView;

@interface QZLiveViewController : QZoneViewController <MQZoneLBSPOIViewControllerDelegate, QQMultiImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, PECropViewControllerDelegate, QZLVBadNetworkControllerDelegate, QZLVRoleSwitchControllerDelegate, QZLVStartLiveViewDelegate, QZLVVideoViewDelegate, QZLVVideoQualityDelegate, DragLyricViewDelegate, QQAudioSessionManagerDelegate, MusicControlDelegate, QZCPUMonitorDelegate, QUIActionSheetDelegate>
{
    NSString *_fakeRoomId;
    long long _pollNum;
    NSTimer *_writeMoodtimer;
    _Bool _isMoodPublished;
    NSTimer *_enterRoomLagTimer;
    NSTimer *_udtCollectTimer;
    NSTimer *_liveLagAfterWriteMoodTimer;
    _Bool _getRoomInfoIsResponsed;
    _Bool _shouldStartLiveAfterGetRoomInfoIsResponsed;
    _Bool _isHostBackground;
    QZLVCoverBgView *_coverBgView;
    UIBlurEffect *_blurEffect;
    UIVisualEffectView *_blurVibrancyEffectView;
    UIView *_liveBlurView;
    UIToolbar *_toolbar;
    _Bool _shouldResumeShowKeyboards;
    _Bool _isAnchorCallbackReady;
    _Bool _shouldApplyTheme;
    UIViewController *_authenticationController;
    NSString *_launchFrom;
    QZLVStartView *_startLiveView;
    QZLVVideoView *_videoView;
    QZLiveInfo *_liveInfo;
    QZJNsQqradioProtocolGetRoomIDRsp *_getRoomIdRsp;
    QZJNsQqradioProtocolLiveShowRoomInfo *_roomInfo;
    QZJNsQqradioProtocolLiveShowRoomInfo *_oldRoomInfo;
    QZJNsQqradioProtocolLiveShowNotice *_notice;
    QZJNsQqradioProtocolUserOnlineRsp *_userOnlineRsp;
    QZLVMusicControlView *_musicView;
    QZLVMusicVolumeView *_musicVolumeView;
    KSLyricPannel *_lyricPannel;
    UIView *_lyricContainer;
    UILabel *_noLyricLabel;
    _Bool _hasTakePhoto;
    _Bool _isBrand;
    long long _enableRight;
    long long _curAnchorIdentityType;
    long long _authenticationType;
    _Bool _haveToastWWan;
    UIButton *_exitButton;
    _Bool _shouldStopLikeAnimation;
    _Bool _requestOnLineIsResponsed;
    _Bool _enterRoomIsResponsed;
    _Bool _createRoomIsResponsed;
    _Bool _exitRoomIsPending;
    long long _enterRoomResult;
    long long _requestOnLineResult;
    _Bool _isWaitSwitchToLiving;
    _Bool _bRecvMobileChangeMsg;
    long long _curLiveStatus;
    long long _lastLiveStatus;
    _Bool _bNeedDelayPushStreamAndRec;
    _Bool _bDelayPituCloseLiveVideo;
    _Bool _shouldResumeLiveAudio;
    NSMutableDictionary *_dictUinIsFullScreen;
    double _requestCmdStart;
    NSDate *_startDate;
    long long _curInterfaceOrientation;
    _Bool _shouldEnableSpeaker;
    _Bool _enableBlurEffect;
    _Bool _shouldShowCoverBg;
    _Bool _shouldPresentAuthenWeb;
    QZLVErrorTipsView *_errorTipsView;
    UIView *_tipsView;
    NSNumber *_isCamFront;
    NSNumber *_authorityRight;
    _Bool _isShowLivePortal;
    _Bool _shouldStopWriteMoodAndPush;
    _Bool _isRatherThan120sToSendFeed;
    long long _allUdtNum;
    long long _worstUdtNum;
    long long _delaySendFeedTime;
    double _worstLossCollectRate;
    _Bool _showShareBubble;
    _Bool _isCancelOpenMood;
    NSMutableArray *_jsCallbacks;
    _Bool _enterEndLiveDirect;
    UILabel *_exitTopBarTitle;
    NSTimer *_heartbeatTimer;
    NSTimer *_enterRoomTimer;
    double _enterLivingFloatTime;
    double _beginLivingTime;
    double _enterPlayBackFloatTime;
    double _beginPlayBackTime;
    NSTimer *_livingTimer;
    double _getRoomInfoBeginTime;
    double _getRoomInfoEndTime;
    long long _lastNetwrokStatus;
    double _maxPeriodCpuRate;
    _Bool _enableUploadKbps;
    AudioCategoryModel *_audioCategoryModel;
    QZScreenShotShareView *_shareView;
    NSTimer *_backgroundKeepTimer;
    _Bool _isNotVisible;
    _Bool _isFirstLoad;
    NSString *_titleForToastWWan;
    NSTimer *_exitTimer;
    QZLVLikeAnimationController *_likeAnimationController;
    NSTimer *_zeroFpsCheckTimer;
    NSTimer *_newFpsCheckTimer;
    NSTimer *_udtLossRateCheckTimer;
    NSTimer *_fpsAndLossReportTimer;
    double _liveLaunchTime;
    long long _zeroFpsOccurCount;
    long long _zeroFpsOccurTotalCount;
    long long _cardonOccurCount;
    long long _cardonOccurTotalCount;
    long long _udtLossOccurCount;
    long long _udtLossOccurTotalCount;
    _Bool _listeningfps;
    NSMutableArray *_cpuRates;
    NSMutableArray *_uploadBitRates;
    unsigned long long _seq;
    _Bool _hasEnableShare;
    _Bool _enterRoomTimerIsFired;
    _Bool _bRecvOutRoomMsg;
    _Bool _watchLiveHasNoResult;
    UIImageView *_backImageView;
    UIImageView *_videoViewBorderImageView;
    QZLVMusicManager *_musicManager;
    long long _kSharePlatform;
    _Bool _isRetrievedBackgroud;
    _Bool _needRotateVideoViewToFullScreen;
    _Bool _isVideoLandscape;
    UIViewController *_preVC;
    UIView *_exitTopBar;
    UIWebView *_webView;
}

+ (id)second_time;
@property(readonly, nonatomic) _Bool isVideoLandscape; // @synthesize isVideoLandscape=_isVideoLandscape;
@property(nonatomic) _Bool needRotateVideoViewToFullScreen; // @synthesize needRotateVideoViewToFullScreen=_needRotateVideoViewToFullScreen;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *exitTopBar; // @synthesize exitTopBar=_exitTopBar;
@property(nonatomic) UIViewController *preVC; // @synthesize preVC=_preVC;
- (id)jsonDataFromArray:(id)arg1;
- (_Bool)setAndGetShouldShowPositionRecommend:(id)arg1;
- (void)reportDataToCompass;
- (void)didCountdownIsOver;
- (void)onStartCountDown;
- (_Bool)isContiuneLive;
- (id)liveCoverImage;
- (void)onStartLiveCellularAlertCancel;
- (void)onStartLiveCellularAlertOK;
- (void)showStartLiveCellularAlert:(_Bool)arg1;
- (void)showCustomizedAlertWithTitle:(id)arg1 andMessage:(id)arg2 andTag:(long long)arg3;
- (void)showNoCameraAvailableAlert;
- (void)showNoMicPrivilegeAlert;
- (void)recordCameraSetting;
- (_Bool)isSameDay:(id)arg1 date2:(id)arg2;
- (void)authenticationEncourageType;
- (void)checkLiveAuthentication;
- (void)didStartLiveClicked;
- (void)prepareLiveHosterModelForContinueMode;
- (void)prepareLiveHosterModel;
- (id)parseChangeMobileInfo:(id)arg1;
- (id)makeChangeMobileMsgInfo:(unsigned long long)arg1;
- (void)continueLiveWithRoomId:(id)arg1;
- (void)chooseContinueLive;
- (void)chooseNewLive;
- (void)decideRoomId:(id)arg1;
- (void)enterNewOrLastLiveSheet;
- (void)openMood;
- (CDUnknownBlockType)getOpenMoodAlertOkAction;
- (CDUnknownBlockType)getOpenMoodAlertCancelAction;
- (long long)getLiveRight;
- (id)getOpenMoodOkTitle;
- (id)getOpenMoodCancelTitle;
- (id)getOpenMoodAlertMessage;
- (id)getOpenMoodAlertTitle;
- (void)showOpenMoodAlert;
- (void)executePollingRoomInfo;
- (void)pollingRoomInfo;
- (void)writeMoodWhenStopLive;
- (_Bool)isHostInBrandOrWhiteList;
- (void)closeBadNetWorkAlert:(id)arg1;
- (void)showLivePGCLagAlert;
- (void)chooseLiveLagAlertNO;
- (void)chooseLiveUGCLagAlertOK;
- (void)showLiveUGCLagAlert;
- (void)requestSendChangeMobileComment:(unsigned long long)arg1;
- (void)requestSetRoomInfoFailed:(id)arg1 param:(id)arg2;
- (void)requestSetRoomInfoSuccess:(id)arg1 param:(id)arg2;
- (void)requestSetRoomInfo:(id)arg1;
- (void)reportSetRoomInfo:(long long)arg1 reqRoomID:(id)arg2 retCode:(long long)arg3 isBegin:(_Bool)arg4;
- (void)removeExceptionView;
- (void)showException:(long long)arg1 message:(id)arg2;
- (void)handleLiveShowLimitWithMessage:(id)arg1;
- (void)requestGetRoomIdFailed:(id)arg1;
- (void)requestGetRoomIdSuccess:(id)arg1;
- (id)defRole;
- (id)profitFormat:(int)arg1;
- (void)showHardwareUnavailableAlert;
- (void)requestGetRoomId;
- (void)reportGetRoomId;
- (void)removeAlertWindow;
- (id)lbsInfoAttachedInReq;
- (void)showPositionRecommend;
- (id)startLiveDataCachePath:(id)arg1;
- (void)cacheStartLiveData:(id)arg1;
- (id)loadStartLiveData;
- (void)saveCache;
- (void)loadCache;
- (id)enableRightDicArray:(id)arg1;
- (void)refreshPermissionAndPlayBackSettings;
- (void)parsePermissionAndPlayBackSettings;
- (_Bool)liveRecordOptionShouldShow;
- (long long)maxAuthority:(long long)arg1;
- (long long)defaultPermission;
- (id)generatePremissionType:(long long)arg1;
- (id)generatePremission:(id)arg1;
- (id)composeRoomInfo:(long long)arg1;
- (void)kickoffPUGC;
- (void)modifyRoomInfo:(id)arg1 type:(long long)arg2;
- (void)exitStartLiveView;
- (_Bool)enterStartLiveView;
- (void)networkNotFullfill:(long long)arg1;
- (void)networkFullfill;
- (id)getJSUgcRightsParam;
- (void)setJSUgcRightsParam:(id)arg1;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPositon:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationStringV2:(id)arg2 lbsPoiInfo:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)cropViewControllerDidCancel:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingImage:(id)arg2;
- (void)jumpToWebview:(id)arg1;
- (void)onQZLVReUnzipTheme:(id)arg1;
- (void)onMoodCompeletion:(id)arg1;
- (void)writeMood;
- (long long)getUgcRight;
- (void)takeCameraPhoto;
- (void)takeAlbumPhoto;
- (void)showCoverModifyAlert:(_Bool)arg1;
- (void)didProtocolClicked;
- (void)didSwitchCameraClicked;
- (void)didLBSSwitchClicked;
- (id)createLBSPOIViewController;
- (id)getAuthorityExInfo;
- (void)didPermissionSwitchClicked;
- (void)didSetCoverClickedWithCoverImage:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)downloadThemeFailId:(id)arg1 isSmallScreen:(_Bool)arg2 url:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadThemeWithThemeId:(id)arg1 isSmallScreen:(_Bool)arg2 url:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)h5ChangeTopBar:(id)arg1 withTitle:(id)arg2;
- (void)h5ChangeCloseBtn:(id)arg1;
- (void)updateTheme;
- (void)setCiContext:(id)arg1;
- (id)ciContext;
- (void)setEaglContext:(id)arg1;
- (id)eaglContext;
- (id)retryTimes;
- (void)setRetryTimes:(id)arg1;
- (id)getThemeController;
- (void)setBadNetworkController:(id)arg1;
- (id)badNetworkController;
- (void)setExceptionView:(id)arg1;
- (id)exceptionView;
- (void)setCameraPickerController:(id)arg1;
- (id)cameraPickerController;
- (void)setImagePickerController:(id)arg1;
- (id)imagePickerController;
- (_Bool)switchFlash:(_Bool)arg1;
- (_Bool)isFlashOn;
- (_Bool)isBackFlashEnable;
- (_Bool)isFrontFlashEnable;
- (_Bool)switchCamera;
- (_Bool)isCameraFront;
- (_Bool)isBackCameraExist;
- (_Bool)isFrontCameraExist;
- (id)getIDFA;
- (id)parseChangeMobileInfo:(id)arg1;
- (void)changeMobileAlert:(id)arg1 msg:(id)arg2;
- (void)onChangeMobile:(id)arg1;
- (void)showNotifyTip:(id)arg1;
- (void)shouldCloseLive;
- (void)networkRecover;
- (void)roleSwitchToLevle:(unsigned long long)arg1 lastLevel:(unsigned long long)arg2;
- (void)hasUdtLoss;
- (void)handlePUGCBadNetwork:(_Bool)arg1;
- (void)showingLiveShowView;
- (void)enterLiveShowView;
- (_Bool)shouldRecomand;
- (void)setLiveShowChatVC:(id)arg1;
- (id)getLiveShowVC;
- (void)setRoleSwitchController:(id)arg1;
- (id)roleSwitchController;
- (void)setQrReporter:(id)arg1;
- (id)qrReporter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
