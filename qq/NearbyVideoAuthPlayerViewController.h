//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/NearbyVideoAuthPlayerViewDelegate-Protocol.h>

@class NSString, NearbyVideoAuthModel, NearbyVideoAuthPlayerView, QQAsynUrlImageView, UIButton;

@interface NearbyVideoAuthPlayerViewController : QQViewController <NearbyVideoAuthPlayerViewDelegate>
{
    UIButton *_closeButton;
    UIButton *_moreButton;
    UIButton *_authPromptButton;
    UIButton *_authButton;
    UIButton *_playButton;
    QQAsynUrlImageView *_coverImageView;
    NearbyVideoAuthPlayerView *_playerView;
    NearbyVideoAuthModel *_videoAuthModel;
    int _entryType;
}

@property int entryType; // @synthesize entryType=_entryType;
- (void).cxx_destruct;
- (_Bool)isWifiNetwork;
- (_Bool)isNetworkConnected;
- (void)interruptWithErrorType:(long long)arg1;
- (void)handelDeleteAuthVideo:(_Bool)arg1 errorType:(long long)arg2;
- (void)deleteAuthVideo;
- (void)jumpToRecordPage;
- (void)showRecordPage;
- (void)remakeAuthVideo;
- (void)onAuthButtonClick:(id)arg1;
- (void)showConfirmAlertView;
- (void)onMoreButtonClick:(id)arg1;
- (void)onCloseButtonClick:(id)arg1;
- (void)onPlayButtonClick:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)hideCoverView;
- (void)showCoverView;
- (void)hideCoverViewAndPlayButton;
- (void)showCoverViewAndPlayButton;
- (void)onPlayerViewPlayStart:(id)arg1;
- (void)onPlayerViewPlayFail:(id)arg1;
- (void)onPlayerViewParamsInvalid:(id)arg1;
- (void)downloadVideoAndPlay:(id)arg1;
- (void)playRemoteVideo:(id)arg1 ignoreNetworkState:(_Bool)arg2;
- (void)playLocalVideo:(id)arg1;
- (void)playVideo:(id)arg1 orPath:(id)arg2 ignoreNetworkState:(_Bool)arg3;
- (void)downloadVideo:(id)arg1 toPath:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (_Bool)isDownloaded:(id)arg1;
- (id)storePathForUrl:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adjustUI;
- (void)setupSubviews;
- (void)initVideoPlayerView;
- (void)initUI;
- (void)viewDidLoad;
- (_Bool)isSelfAuth;
- (_Bool)isHost;
- (void)onUpdateProfile:(id)arg1;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithEntryType:(int)arg1 videoAuthModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
