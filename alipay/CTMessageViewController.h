//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTAutoVoicePlayViewController.h"

#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "APSearchBarDelegate-Protocol.h"
#import "APSnapChapGuildViewDelegate-Protocol.h"
#import "AUDialogDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "CTActionToolViewDelegate-Protocol.h"
#import "CTMessageCellDelegate-Protocol.h"
#import "CTMessageCellEditModeDelegate-Protocol.h"
#import "CTMessageCellUserNameDelegate-Protocol.h"
#import "CTMessageDetailViewDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "PKChatSnapVideoShowViewDelegate-Protocol.h"
#import "PKSnapChatVideoWidgetDelegate-Protocol.h"
#import "PKStatusBarDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WWPhotoBrowserDelegate-Protocol.h"

@class ABUnknownPersonViewController, APBarButtonItem, APChatLocalSearchManager, APChatMonitor, APChatRoomSetTagViewController, APChatRoomSimpleProfileController, APContactInfo, APSnapChapGuildView, APSocialNoticeDisplayView, AUNoticeDialog, CTCoverAlertView, CTLoadingHeadView, CTTitleView, DTRpcAsyncCaller, MFMailComposeViewController, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer, PKCell, PKChatSnapVideoShowView, PKSnapChatImageView, PKSnapChatVideoWidget, PKStatusBar, PKVoiceToWordView, UIActivityIndicatorView, UIButton, UITextField, UIView, UIWebView, UIWindow;

@interface CTMessageViewController : CTAutoVoicePlayViewController <UIScrollViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, AUDialogDelegate, MFMailComposeViewControllerDelegate, CTMessageCellUserNameDelegate, CTMessageCellEditModeDelegate, CTActionToolViewDelegate, PKStatusBarDelegate, APSearchBarDelegate, CTMessageDetailViewDelegate, CTMessageCellDelegate, ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate, APSnapChapGuildViewDelegate, PKChatSnapVideoShowViewDelegate, PKSnapChatVideoWidgetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate, WWPhotoBrowserDelegate>
{
    _Bool _isScorlling;
    _Bool _viewWillAppear;
    _Bool _isLoading;
    long long _apperIdx;
    PKCell *_magicTapCell;
    _Bool _friendIsInputing;
    _Bool _forceHideLbsStatusBar;
    _Bool _cellClicked;
    _Bool _cloudImageViewClicked;
    _Bool _lastInputMode;
    _Bool _rpcGetGroupInfoPerformed;
    _Bool _forceHideLiveShowStatusBar;
    _Bool _isViewDidAppeared;
    _Bool _processingVoiceToWord;
    _Bool _isViewAppeared;
    int _controllerState;
    int _lastInputViewStyle;
    CTLoadingHeadView *_loadingView;
    PKStatusBar *_addPersonStatusBar;
    PKStatusBar *_groupAddPersonStatusBar;
    PKStatusBar *_fundGroupChangeStatusBar;
    PKStatusBar *_multiTransferTipStatusBar;
    PKStatusBar *_liveShowTipStatusBar;
    UIButton *_unreadPicker;
    long long _unReadLimit;
    long long _jumpIndex;
    NSMutableDictionary *_snapchatMsgCache;
    UIWindow *_detailWindow;
    UIActivityIndicatorView *_indView;
    CTTitleView *_titleView;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_imagesList;
    UIButton *_tools;
    UIButton *_person;
    APBarButtonItem *_backBarButtonItem;
    ABUnknownPersonViewController *_addressBookUnknownPersonViewController;
    MFMailComposeViewController *_mailComposer;
    NSString *_linkData;
    NSMutableArray *_selectedItems;
    CTCoverAlertView *_currentCoverAlertView;
    APContactInfo *_addContactInfo;
    NSTimer *_inputStopTimer;
    UIView *_lbsStatusBar1;
    UIView *_lbsStatusBar2;
    AUNoticeDialog *_lbsStatusAlertView;
    APChatLocalSearchManager *_chatLocalSearchManager;
    UIWebView *_webView;
    NSString *_displayUnreadCount;
    APSnapChapGuildView *_snapChatGuildView;
    PKSnapChatImageView *_snapChatImageView;
    PKChatSnapVideoShowView *_snapChatVideoShowView;
    PKSnapChatVideoWidget *_snapChatVideo;
    long long _videoPlayerToolStyle;
    UITextField *_currrentTextField;
    APChatRoomSetTagViewController *_setTagController;
    DTRpcAsyncCaller *_getGroupInfoRpc;
    UIButton *_noticeButton;
    UIView *_noticeUpdateView;
    APChatRoomSimpleProfileController *_simpleProfileVC;
    DTRpcAsyncCaller *_rpcCaller_simpleProfile;
    NSArray *_multimediaInfos;
    NSMutableDictionary *_cacheTranslationInfos;
    PKVoiceToWordView *_voiceToWordView;
    NSMutableDictionary *_cacheVoiceWords;
    APSocialNoticeDisplayView *_noticeDisplayView;
    NSString *_noticeDisplayDuration;
    NSOperationQueue *_noticeDismissAnimationQueue;
    NSString *_bizType;
    APChatMonitor *_chatMonitor;
}

@property(retain, nonatomic) APChatMonitor *chatMonitor; // @synthesize chatMonitor=_chatMonitor;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSOperationQueue *noticeDismissAnimationQueue; // @synthesize noticeDismissAnimationQueue=_noticeDismissAnimationQueue;
@property(retain, nonatomic) NSString *noticeDisplayDuration; // @synthesize noticeDisplayDuration=_noticeDisplayDuration;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(retain, nonatomic) APSocialNoticeDisplayView *noticeDisplayView; // @synthesize noticeDisplayView=_noticeDisplayView;
@property(retain, nonatomic) NSMutableDictionary *cacheVoiceWords; // @synthesize cacheVoiceWords=_cacheVoiceWords;
@property(nonatomic) _Bool processingVoiceToWord; // @synthesize processingVoiceToWord=_processingVoiceToWord;
@property(retain, nonatomic) PKVoiceToWordView *voiceToWordView; // @synthesize voiceToWordView=_voiceToWordView;
@property(retain, nonatomic) NSMutableDictionary *cacheTranslationInfos; // @synthesize cacheTranslationInfos=_cacheTranslationInfos;
@property(retain, nonatomic) NSArray *multimediaInfos; // @synthesize multimediaInfos=_multimediaInfos;
@property(nonatomic) _Bool isViewDidAppeared; // @synthesize isViewDidAppeared=_isViewDidAppeared;
@property(nonatomic) _Bool forceHideLiveShowStatusBar; // @synthesize forceHideLiveShowStatusBar=_forceHideLiveShowStatusBar;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller_simpleProfile; // @synthesize rpcCaller_simpleProfile=_rpcCaller_simpleProfile;
@property(retain, nonatomic) APChatRoomSimpleProfileController *simpleProfileVC; // @synthesize simpleProfileVC=_simpleProfileVC;
@property(retain, nonatomic) UIView *noticeUpdateView; // @synthesize noticeUpdateView=_noticeUpdateView;
@property(retain, nonatomic) UIButton *noticeButton; // @synthesize noticeButton=_noticeButton;
@property(nonatomic) DTRpcAsyncCaller *getGroupInfoRpc; // @synthesize getGroupInfoRpc=_getGroupInfoRpc;
@property(nonatomic) _Bool rpcGetGroupInfoPerformed; // @synthesize rpcGetGroupInfoPerformed=_rpcGetGroupInfoPerformed;
@property(retain, nonatomic) APChatRoomSetTagViewController *setTagController; // @synthesize setTagController=_setTagController;
@property(retain, nonatomic) UITextField *currrentTextField; // @synthesize currrentTextField=_currrentTextField;
@property(nonatomic) long long videoPlayerToolStyle; // @synthesize videoPlayerToolStyle=_videoPlayerToolStyle;
@property(retain, nonatomic) PKSnapChatVideoWidget *snapChatVideo; // @synthesize snapChatVideo=_snapChatVideo;
@property(retain, nonatomic) PKChatSnapVideoShowView *snapChatVideoShowView; // @synthesize snapChatVideoShowView=_snapChatVideoShowView;
@property(retain, nonatomic) PKSnapChatImageView *snapChatImageView; // @synthesize snapChatImageView=_snapChatImageView;
@property(nonatomic) __weak APSnapChapGuildView *snapChatGuildView; // @synthesize snapChatGuildView=_snapChatGuildView;
@property(nonatomic) _Bool lastInputMode; // @synthesize lastInputMode=_lastInputMode;
@property(copy, nonatomic) NSString *displayUnreadCount; // @synthesize displayUnreadCount=_displayUnreadCount;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool cloudImageViewClicked; // @synthesize cloudImageViewClicked=_cloudImageViewClicked;
@property(nonatomic) _Bool cellClicked; // @synthesize cellClicked=_cellClicked;
@property(retain, nonatomic) APChatLocalSearchManager *chatLocalSearchManager; // @synthesize chatLocalSearchManager=_chatLocalSearchManager;
@property(nonatomic) int lastInputViewStyle; // @synthesize lastInputViewStyle=_lastInputViewStyle;
@property(nonatomic) int controllerState; // @synthesize controllerState=_controllerState;
@property(retain, nonatomic) AUNoticeDialog *lbsStatusAlertView; // @synthesize lbsStatusAlertView=_lbsStatusAlertView;
@property(retain, nonatomic) UIView *lbsStatusBar2; // @synthesize lbsStatusBar2=_lbsStatusBar2;
@property(retain, nonatomic) UIView *lbsStatusBar1; // @synthesize lbsStatusBar1=_lbsStatusBar1;
@property(nonatomic) _Bool forceHideLbsStatusBar; // @synthesize forceHideLbsStatusBar=_forceHideLbsStatusBar;
@property(nonatomic) _Bool friendIsInputing; // @synthesize friendIsInputing=_friendIsInputing;
@property(retain, nonatomic) NSTimer *inputStopTimer; // @synthesize inputStopTimer=_inputStopTimer;
@property(retain, nonatomic) APContactInfo *addContactInfo; // @synthesize addContactInfo=_addContactInfo;
@property(retain, nonatomic) CTCoverAlertView *currentCoverAlertView; // @synthesize currentCoverAlertView=_currentCoverAlertView;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(copy, nonatomic) NSString *linkData; // @synthesize linkData=_linkData;
@property(retain, nonatomic) MFMailComposeViewController *mailComposer; // @synthesize mailComposer=_mailComposer;
@property(retain, nonatomic) ABUnknownPersonViewController *addressBookUnknownPersonViewController; // @synthesize addressBookUnknownPersonViewController=_addressBookUnknownPersonViewController;
@property(retain, nonatomic) APBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIButton *person; // @synthesize person=_person;
@property(retain, nonatomic) UIButton *tools; // @synthesize tools=_tools;
@property(retain, nonatomic) NSMutableArray *imagesList; // @synthesize imagesList=_imagesList;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CTTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIActivityIndicatorView *indView; // @synthesize indView=_indView;
@property(retain, nonatomic) UIWindow *detailWindow; // @synthesize detailWindow=_detailWindow;
@property(retain, nonatomic) NSMutableDictionary *snapchatMsgCache; // @synthesize snapchatMsgCache=_snapchatMsgCache;
@property(nonatomic) long long jumpIndex; // @synthesize jumpIndex=_jumpIndex;
@property(nonatomic) long long unReadLimit; // @synthesize unReadLimit=_unReadLimit;
@property(retain, nonatomic) UIButton *unreadPicker; // @synthesize unreadPicker=_unreadPicker;
@property(retain, nonatomic) PKStatusBar *liveShowTipStatusBar; // @synthesize liveShowTipStatusBar=_liveShowTipStatusBar;
@property(retain, nonatomic) PKStatusBar *multiTransferTipStatusBar; // @synthesize multiTransferTipStatusBar=_multiTransferTipStatusBar;
@property(retain, nonatomic) PKStatusBar *fundGroupChangeStatusBar; // @synthesize fundGroupChangeStatusBar=_fundGroupChangeStatusBar;
@property(retain, nonatomic) PKStatusBar *groupAddPersonStatusBar; // @synthesize groupAddPersonStatusBar=_groupAddPersonStatusBar;
@property(retain, nonatomic) PKStatusBar *addPersonStatusBar; // @synthesize addPersonStatusBar=_addPersonStatusBar;
@property(retain, nonatomic) CTLoadingHeadView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)enterBackGround;
- (void)addExposureChatMessage:(id)arg1;
- (void)voiceOverAtPersonWithCell:(id)arg1;
- (void)setopAudioCardPlay:(id)arg1;
- (void)didClickYebaoCell:(id)arg1;
- (void)openCellSchemeUrl:(id)arg1 infoDic:(id)arg2;
- (void)chatGuideNotification:(id)arg1;
- (void)markNoticeDisplayedIfNeed;
- (void)sendEmotionGifData:(id)arg1;
- (long long)getSwitchValueOfSetPeronalInfoMaxShowTimes;
- (double)getSwitchValueOfSetPeronalInfoExpireTime;
- (_Bool)canShowSettingAlertView:(long long *)arg1;
- (_Bool)hasUnreadMsgs;
- (void)tryToShowSetPersonalInfoAlertView:(id)arg1;
- (_Bool)shouldCancelAllDownloadingWhenDismissPhotoBrowser:(id)arg1;
- (void)didDismissPhotoBrowser:(id)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (void)willDismissPhotoBrowser:(id)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (void)photoBrowser:(id)arg1 doActionAtIndex:(long long)arg2 title:(id)arg3 photoIndex:(long long)arg4;
- (id)photoBrowserActionItemArray:(id)arg1 photoIndex:(unsigned long long)arg2;
- (_Bool)isReceivedMessageAtIndex:(long long)arg1;
- (void)snapVideoDidEndPlay;
- (void)snapVideoDidStartPlay;
- (void)snapChatImageDidShow;
- (double)snapChatTotalTime;
- (struct CGRect)changedOrigFrameInPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (id)imageForZoomAnimationInPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (_Bool)enableShowTapToExitViewForShortVideo:(id)arg1;
- (_Bool)enableSupportOrientationChanged:(id)arg1;
- (id)photoBrowser:(id)arg1 thumbPhotoAtIndex:(unsigned long long)arg2 isVideo:(_Bool *)arg3;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (_Bool)hasVideoInVisiable;
- (void)resetSnapChatVideoCountdownIfNeed;
- (void)saveVideoToMyFavoritWithVideoIndex:(long long)arg1;
- (void)saveImageToMyFavoritWithImageIndex:(long long)arg1;
- (void)forwardMultimediaToFriendWithMultimediaIndex:(long long)arg1 photoBrowser:(id)arg2;
- (id)actionSheetItemsForVideo:(_Bool)arg1;
- (id)actionSheetItemsForSmallVideo;
- (id)actionSheetItemsForImage;
- (id)findActiveWidgetInCellWithIndex:(long long)arg1;
- (struct CGRect)multimediaOrigFrameWithIdentifier:(id)arg1 clientMsgId:(id)arg2 index:(long long)arg3;
- (id)beeUrlWithString:(id)arg1;
- (id)constructThumbMultimediaModelWithSnapChatVideoInfo:(id)arg1 isSmallVideo:(_Bool)arg2;
- (id)constructThumbMultimediaModelWithSnapChatImageInfo:(id)arg1;
- (id)constructThumbMultimediaModelWithVideoInfo:(id)arg1 isSmallVideo:(_Bool)arg2;
- (id)constructThumbMultimediaModelWithImageInfo:(id)arg1;
- (id)constructMultimediaModelWithSnapChatVideoInfo:(id)arg1 isSmallVideo:(_Bool)arg2;
- (id)constructMultimediaModelWithSnapChatImageInfo:(id)arg1;
- (id)constructMultimediaModelWithVideoInfo:(id)arg1 isSmallVideo:(_Bool)arg2;
- (id)constructMultimediaModelWithImageInfo:(id)arg1;
- (void)showSnapChatMultimediaPreview;
- (void)showMultimediaPreviewWithCurrentIndex:(unsigned long long)arg1;
- (void)setFlagForFirstEnteredChatRoom:(id)arg1;
- (void)handleChatRoomSelfRemovedWithReason:(id)arg1;
- (void)onSelfRemovedNotification:(id)arg1;
- (void)clearChatRoomSelfRemovedNotify;
- (void)setupChatRoomSelfRemovedNotify;
- (void)removeAnnoumentNoti;
- (void)registerAnnounmentNoti;
- (void)refreshAnnounment:(id)arg1;
- (void)dismissSetChatRoomTag;
- (void)refreshChatroomNoticeIfNeedAndShowNoticeFloatingLayer;
- (void)showSetChatRoomTagWith:(id)arg1 roomId:(id)arg2;
- (void)rpcGetGroupInfoWith:(id)arg1;
- (void)addUnreadCountMonitorPointWith:(long long)arg1;
- (void)refreshChatScene:(id)arg1;
- (void)willEnterforeground:(id)arg1;
- (void)APSnapChapGuildViewWantClose:(id)arg1;
- (void)snapChatVideoWidgetDidPlay:(id)arg1;
- (void)snapChatVideoShowViewDidPlay:(id)arg1;
- (void)onSnapChatVideoShowWithTemplateCode:(id)arg1 avatarView:(id)arg2;
- (void)onSnapChatVideoTapped:(id)arg1;
- (void)onSnapChatWillShowBigImagePreview:(id)arg1;
- (void)onSnapChatMsgDidDelete:(id)arg1;
- (void)onSnapChatTimerUpdate:(id)arg1;
- (void)onSnapchatScreenShot:(id)arg1;
- (_Bool)tryToShowSnapchatGuildView:(_Bool)arg1 didCloseCallback:(CDUnknownBlockType)arg2;
- (void)stopFriendInput;
- (void)friendIsInputing:(_Bool)arg1;
- (void)friendIsInputingNoti:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doCollectMessages:(id)arg1;
- (void)collectMessages:(id)arg1;
- (void)pickContactInfosBeforeForwardMessages:(id)arg1;
- (void)checkForwardMessages:(id)arg1;
- (void)actionToolView:(id)arg1 didPerformSEL:(int)arg2;
- (void)cancelControllerEditAction:(id)arg1;
- (void)refreshPersonBarButtonState;
- (void)refreshBackBarButtonState;
- (void)refreshControllerState;
- (_Bool)canReferenceMessage;
- (void)referenceMessage:(id)arg1;
- (void)originalCell:(id)arg1;
- (void)clearVoiceToWorView;
- (void)cancelVoiceToWord;
- (void)changeChatDataSourceWithVoiceIdentifier:(id)arg1 words:(id)arg2;
- (void)transferVoiceToWordWithCell:(id)arg1;
- (void)transferVocieToWords:(id)arg1;
- (void)changeCellMessageInfo:(id)arg1 translationState:(long long)arg2 clientMsgId:(id)arg3 translaterName:(id)arg4 translaterLog:(id)arg5 translatedText:(id)arg6;
- (void)translateChatMessageWithCell:(id)arg1;
- (void)translateCell:(id)arg1;
- (_Bool)canSendGif:(id)arg1;
- (void)copySendAction:(id)arg1;
- (void)copyCancelAction:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveCell:(id)arg1;
- (void)copyCell:(id)arg1;
- (void)previewCopyImage:(id)arg1;
- (id)getCopyCellCloudImage:(id)arg1;
- (_Bool)isContainImageTemplate:(id)arg1;
- (id)getCellCloudImage:(id)arg1;
- (void)pasteItem:(id)arg1 type:(id)arg2;
- (void)exitEditMode;
- (void)enterEditMode;
- (void)selectedItemWith:(id)arg1;
- (id)orderedSelectedItems;
- (id)selectItemsInEditMode;
- (long long)numOfSelectedItems;
- (void)didChangeSelectionInEditMode:(id)arg1 selected:(_Bool)arg2;
- (void)sendSmallVideo:(id)arg1;
- (void)translateionChatMessageNotification:(id)arg1;
- (void)updateUnreadCount;
- (void)chatBackgroundImageDidUpdate:(id)arg1;
- (void)gotoTimeLineVideoDetail:(id)arg1;
- (id)imageCellsInfoWithVisiableCells;
- (void)cloudImageViewClicked:(id)arg1;
- (void)willShowImagePick:(id)arg1;
- (id)assembleSchemeParameters:(id)arg1 originalLink:(id)arg2;
- (void)didClickShareSoureView:(id)arg1;
- (void)didClickHeadIcon:(id)arg1;
- (void)didLongPressHeadIcon:(id)arg1;
- (void)voiceDownloadTapedWithCell:(id)arg1;
- (void)feedBackIgnoreMessage:(id)arg1 status:(long long)arg2;
- (void)refuseChatMessage:(id)arg1;
- (void)receiveChatMessage:(id)arg1;
- (void)refuseTappedWithCell:(id)arg1;
- (void)retryTapedWithCell:(id)arg1;
- (id)getLog1PramaterWithMenuType:(int)arg1;
- (void)feedBackWithMenuType:(int)arg1;
- (void)cellMenuTypeTaped:(id)arg1 type:(int)arg2;
- (void)cancelSendingSoundWithIndexPaths:(id)arg1 clientMsgIds:(id)arg2;
- (void)deleteCellsWithIndexPaths:(id)arg1 clientMsgIds:(id)arg2;
- (void)deleteCellAtIndexPaths:(id)arg1;
- (void)withDrawCellAtIndexPaths:(id)arg1;
- (void)goBack;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)showNewPersonViewControllerWithRecord:(void *)arg1 exist:(_Bool)arg2;
- (void)showPeoplePickerController;
- (void)performVoiceOverMagicTap:(id)arg1;
- (void)downloadVideoWithCell:(id)arg1 processState:(long long)arg2;
- (void)cancelDownloadVideoWithCell:(id)arg1;
- (void)uploadBigVideoWithCell:(id)arg1 processState:(long long)arg2;
- (void)cancelUploadVideoWithCell:(id)arg1;
- (void)didClickCell:(id)arg1 withLinkData:(id)arg2;
- (_Bool)shouldHanleText:(id)arg1;
- (void)didDoubleClickCell:(id)arg1;
- (void)didTapDetailView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isEnableDownloadVideo:(id)arg1;
- (long long)isEnablePlayVideo:(id)arg1;
- (void)gotoNoticeDetail;
- (void)gotoPersonDetail;
- (void)gotoMoreDetail;
- (void)handleTemplateCode_16:(id)arg1;
- (void)disableClickCloudImageView;
- (void)enableClickCloudImageView;
- (void)disableClickCell;
- (void)enableClickCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)PKStatusBarDidIgnoredByUser:(id)arg1;
- (void)getBizType;
- (void)handleAccecptPersonEvent:(id)arg1;
- (void)handleAddPersonEvent:(id)arg1;
- (void)PKStatusBarMainIconTaped:(id)arg1;
- (void)PKStatusBarTaped:(id)arg1;
- (void)PKStatusBarSubIconTaped:(id)arg1;
- (void)PKStatusBarAlertMessageTaped:(id)arg1;
- (void)PKStatusBarDismissed:(id)arg1;
- (void)onHideLbsStatusBar;
- (void)onJoinLocationShare;
- (void)onCancelLocationShare;
- (void)onTapOfLBSStatusBar2_stat1:(id)arg1;
- (void)onTapOfLBSStatusBar1:(id)arg1;
- (id)makeLBSStatusBar_stat2;
- (id)makeLBSStatusBar_stat1With:(SEL)arg1;
- (id)makeLBSStatusBar2;
- (id)makeLBSStatusBar1;
- (void)handleTemplateCode_18;
- (void)onLBSRealtimeShareNotify:(id)arg1;
- (void)updateLbsStatusBar;
- (_Bool)isLBSRealtimeSharingActive;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getCTGroupInfo;
- (id)getUserNameColor;
- (_Bool)showGroupUserNameSwitchOn;
- (void)loadingViewShow:(_Bool)arg1;
- (void)getGifZoom;
- (id)checkDeleteIndexPaths:(id)arg1;
- (void)mergeLoaclDataWithNewMessages:(id)arg1 animation:(_Bool)arg2 cellDataItems:(id)arg3;
- (void)modifyLayoutInfoWithItem:(id)arg1 currentIndex:(long long)arg2;
- (void)autoScrollWithDataItems:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onLiveShowTipStatusBarClosedByUser;
- (void)closeLiveShowBarActionWithLiveShowInfo:(id)arg1;
- (void)liveShowTipStatusBarSyncUpdate:(id)arg1;
- (void)liveShowLocalCloseTipStatusBarUpdate:(id)arg1;
- (void)multiTransferGroupEntryTiped:(id)arg1;
- (void)handleSpecificGroupService:(id)arg1;
- (void)updateLoadingViewAppendHeight:(long long)arg1;
- (void)updateUnreadPositionFor:(_Bool)arg1 bannerHight:(long long)arg2;
- (void)updateUnreadPositionFor:(_Bool)arg1;
- (void)contentInsetChanged;
- (void)remindViewCheck;
- (void)clearStatusBar;
- (void)updateGroupAddPersonStatusBarAsync:(CDUnknownBlockType)arg1;
- (id)contactInfoFromRPCLiverInfo:(id)arg1;
- (id)queryUserInfoFromGroup:(id)arg1;
- (void)updateLiveShowSyncTipStatusBarWithInfo:(id)arg1;
- (void)updateLiveShowSyncTipBar;
- (void)updateMultiTransferGroupEntryTipStatusBarAsync:(CDUnknownBlockType)arg1;
- (void)updateFundGroupChangeSyncStatusBarAsync:(CDUnknownBlockType)arg1;
- (void)updateAddPersonStatusBarContentWithAcceptFriend:(_Bool)arg1;
- (void)updateAddPersonStatusBar;
- (id)prepareCurrentStatusBarsArray;
- (id)getTopMostStatusBar;
- (id)getFirstStatusBarWhosePriorityGreaterThan:(int)arg1;
- (int)getPriorityOfTopMostStatusBar;
- (int)getPriorityOfStatusBar:(id)arg1;
- (void)updateAllStatusBars;
- (void)showStatusBar:(id)arg1 barPriority:(int)arg2 animated:(_Bool)arg3;
- (void)destryNoticeDisplayView;
- (void)markNoiceDisplayedAndDismiss;
- (void)refreshNoticeFloatingLayerIfNeed;
- (void)refreshTitle;
- (void)scrollTableViewForUnreadLimit:(long long)arg1;
- (_Bool)isTableViewShowBottom:(long long)arg1;
- (void)refreshNoticeRedDotIfNeed;
- (void)updateChatRoomInfo:(id)arg1;
- (void)showNoticeRedDot:(_Bool)arg1;
- (void)refreshNoticeButton;
- (void)refreshBtton;
- (void)refreshMoreButton;
- (void)setupUI;
- (void)setupTitleWithInputState:(_Bool)arg1;
- (void)setupTitle;
- (void)handleVoiceListionStateChange;
- (void)userDidLogin:(id)arg1;
- (void)resumeViewWillApperIsResume:(_Bool)arg1;
- (void)doBack;
- (void)clearAddedUIViews;
- (void)back;
- (void)_clickBackButton;
- (void)_messageVCBack;
- (void)quitChatRoomResultBlock:(CDUnknownBlockType)arg1;
- (void)_chatRoomVCBack;
- (void)showOrHideUnreadCount:(_Bool)arg1;
- (void)dealUnreadCount:(long long)arg1;
- (void)viewWillDestroy;
- (void)rpcCompensationPull:(id)arg1;
- (void)resumeViewDidAppearIsResume:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)doCleanViewControllers;
- (void)checkToCleanViewControllers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)adjustNavigationBarItemsAppearance;
- (void)doResumeWithOptions:(id)arg1 isResume:(_Bool)arg2;
- (void)doResumeWithChatRoomInfo:(id)arg1 options:(id)arg2 isResume:(_Bool)arg3;
- (void)alertAndBackWith:(id)arg1;
- (void)alertAndBackWith:(id)arg1 withErroCode:(int)arg2;
- (void)resumeWithOptions:(id)arg1 isResume:(_Bool)arg2;
- (void)removeNotification;
- (void)setupNotify;
- (_Bool)supportTimeLine;
- (id)cellClaaName;
- (id)strategyId;
- (id)unknowCellTemplateId;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
