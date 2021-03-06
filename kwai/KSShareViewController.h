//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShareBaseViewController.h"

#import "KSAtFriendsViewControllerDelegate-Protocol.h"
#import "KSPoiPickerDelegate-Protocol.h"
#import "KSShareButtonBarDelegate-Protocol.h"
#import "KSShareCustomSettingViewControllerDelegate-Protocol.h"
#import "KSSharePrivacyBarDelegate-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BFCancellationTokenSource, BFTask, KSEncodeConfig, KSMagicFaceShareBar, KSMusicItem, KSMusicTagShareBar, KSPoi, KSPoiListDataSource, KSRecentTagDataSource, KSRecentTagModel, KSShareArrowBar, KSShareAtlasPreviewViewController, KSShareBottomBtnsView, KSShareButtonBar, KSSharePrivacyBar, KSUploadItem, NSArray, NSMutableSet, NSNumber, NSString, UIImage, UITableView, UIView;

@interface KSShareViewController : KSShareBaseViewController <KSURLPortalAnnotation, KSAtFriendsViewControllerDelegate, UITextViewDelegate, UITableViewDelegate, KSPoiPickerDelegate, KSShareButtonBarDelegate, KSSharePrivacyBarDelegate, KSShareCustomSettingViewControllerDelegate>
{
    UIView *_secondCenterBarView;
    KSPoiListDataSource *_cachedLocationDataSource;
    _Bool _isInChina;
    _Bool _forceOpenMusicTag;
    _Bool _forceOpenMagicFaceTag;
    _Bool _isLiveCover;
    _Bool _forceNotDeleteUploadFile;
    _Bool _fromPreviewPage;
    _Bool _shouldDismissToRootViewController;
    _Bool _disableNearbyShow;
    KSMusicItem *_defaultMusic;
    KSPoi *_defaultPoi;
    NSArray *_magicFaces;
    KSEncodeConfig *_encodeConfig;
    UIImage *_customCoverImage;
    NSNumber *_customCoverTimestamp;
    NSString *_customCoverBannerText;
    NSArray *_durationScaleList;
    UITableView *_tableView;
    KSShareButtonBar *_atAndPoiBar;
    KSSharePrivacyBar *_privacyBar;
    KSShareArrowBar *_customSettingBar;
    KSMusicTagShareBar *_musicTagShareBar;
    KSMagicFaceShareBar *_magicFaceShareBar;
    UIView *_firstCenterView;
    long long _recoGenderFirst;
    NSString *_merchantName;
    NSString *_merchantInfo;
    KSShareBottomBtnsView *_shareBottomBtnsView;
    NSMutableSet *_atFriends;
    NSMutableSet *_tags;
    KSRecentTagModel *_recentTagModel;
    KSRecentTagDataSource *_recentTagDataSource;
    KSUploadItem *_currentItem;
    BFCancellationTokenSource *_videoTaskCancellationTokenSource;
    BFTask *_videoTask;
    BFTask *_photoCollectionTask;
    long long _photoType;
    NSArray *_atlasAssets;
    NSString *_atlasMusicPath;
    KSShareAtlasPreviewViewController *_atlasPreviewViewController;
}

+ (id)ks_portalViewControllerWithContext:(id)arg1;
+ (id)ks_portalPath;
@property(nonatomic) __weak KSShareAtlasPreviewViewController *atlasPreviewViewController; // @synthesize atlasPreviewViewController=_atlasPreviewViewController;
@property(retain, nonatomic) NSString *atlasMusicPath; // @synthesize atlasMusicPath=_atlasMusicPath;
@property(retain, nonatomic) NSArray *atlasAssets; // @synthesize atlasAssets=_atlasAssets;
@property(nonatomic) long long photoType; // @synthesize photoType=_photoType;
@property(retain, nonatomic) BFTask *photoCollectionTask; // @synthesize photoCollectionTask=_photoCollectionTask;
@property(retain, nonatomic) BFTask *videoTask; // @synthesize videoTask=_videoTask;
@property(retain, nonatomic) BFCancellationTokenSource *videoTaskCancellationTokenSource; // @synthesize videoTaskCancellationTokenSource=_videoTaskCancellationTokenSource;
@property(retain, nonatomic) KSUploadItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) KSRecentTagDataSource *recentTagDataSource; // @synthesize recentTagDataSource=_recentTagDataSource;
@property(retain, nonatomic) KSRecentTagModel *recentTagModel; // @synthesize recentTagModel=_recentTagModel;
@property(retain, nonatomic) NSMutableSet *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSMutableSet *atFriends; // @synthesize atFriends=_atFriends;
@property(retain, nonatomic) KSShareBottomBtnsView *shareBottomBtnsView; // @synthesize shareBottomBtnsView=_shareBottomBtnsView;
@property(retain, nonatomic) NSString *merchantInfo; // @synthesize merchantInfo=_merchantInfo;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(nonatomic) _Bool disableNearbyShow; // @synthesize disableNearbyShow=_disableNearbyShow;
@property(nonatomic) long long recoGenderFirst; // @synthesize recoGenderFirst=_recoGenderFirst;
@property(retain, nonatomic) UIView *firstCenterView; // @synthesize firstCenterView=_firstCenterView;
@property(retain, nonatomic) KSMagicFaceShareBar *magicFaceShareBar; // @synthesize magicFaceShareBar=_magicFaceShareBar;
@property(retain, nonatomic) KSMusicTagShareBar *musicTagShareBar; // @synthesize musicTagShareBar=_musicTagShareBar;
@property(retain, nonatomic) KSShareArrowBar *customSettingBar; // @synthesize customSettingBar=_customSettingBar;
@property(retain, nonatomic) KSSharePrivacyBar *privacyBar; // @synthesize privacyBar=_privacyBar;
@property(retain, nonatomic) KSShareButtonBar *atAndPoiBar; // @synthesize atAndPoiBar=_atAndPoiBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldDismissToRootViewController; // @synthesize shouldDismissToRootViewController=_shouldDismissToRootViewController;
@property(nonatomic) _Bool fromPreviewPage; // @synthesize fromPreviewPage=_fromPreviewPage;
@property(nonatomic) _Bool forceNotDeleteUploadFile; // @synthesize forceNotDeleteUploadFile=_forceNotDeleteUploadFile;
@property(nonatomic) _Bool isLiveCover; // @synthesize isLiveCover=_isLiveCover;
@property(retain, nonatomic) NSArray *durationScaleList; // @synthesize durationScaleList=_durationScaleList;
@property(nonatomic) _Bool forceOpenMagicFaceTag; // @synthesize forceOpenMagicFaceTag=_forceOpenMagicFaceTag;
@property(nonatomic) _Bool forceOpenMusicTag; // @synthesize forceOpenMusicTag=_forceOpenMusicTag;
@property(retain, nonatomic) NSString *customCoverBannerText; // @synthesize customCoverBannerText=_customCoverBannerText;
@property(retain, nonatomic) NSNumber *customCoverTimestamp; // @synthesize customCoverTimestamp=_customCoverTimestamp;
@property(retain, nonatomic) UIImage *customCoverImage; // @synthesize customCoverImage=_customCoverImage;
@property(retain, nonatomic) KSEncodeConfig *encodeConfig; // @synthesize encodeConfig=_encodeConfig;
@property(retain, nonatomic) NSArray *magicFaces; // @synthesize magicFaces=_magicFaces;
@property(retain, nonatomic) KSPoi *defaultPoi; // @synthesize defaultPoi=_defaultPoi;
@property(retain, nonatomic) KSMusicItem *defaultMusic; // @synthesize defaultMusic=_defaultMusic;
- (void).cxx_destruct;
- (void)didTapPreviewImage:(id)arg1;
- (id)getNewSepLineView;
- (id)secondCenterBar;
- (id)firstCenterBar;
- (void)poiPicker:(id)arg1 didSelectPoi:(id)arg2;
- (void)displayTableView;
- (void)didTapBackBtn;
- (void)didTapPublishBtn;
- (id)thirdPartString;
- (void)didTapLocationButtonOfBar:(id)arg1;
- (void)sharePrivacyBar:(id)arg1 didChangePrivacyMode:(long long)arg2;
- (void)didTapAtButtonOfBar:(id)arg1;
- (void)customSettingDidSelectMerchant:(id)arg1 info:(id)arg2;
- (void)customSettingNoNearbyShowChanged:(_Bool)arg1;
- (void)customSettingRecoGenderChanged:(long long)arg1;
- (void)updateCustomSettingBar;
- (void)atFriendsViewController:(id)arg1 didFinishSelectFriends:(id)arg2;
- (void)showMaxTagsAlert;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updatePositionForSubViews;
- (void)setupViewsUnderCoverView;
- (void)_handleError:(id)arg1;
- (void)removePhotoCollectionFileAfterMaking;
- (void)removeVideoFileAfterMaking;
- (void)_cleanUpTempFile;
- (void)picturesReadyWithAssets:(id)arg1 tempAssets:(id)arg2 musicPath:(id)arg3 volume:(float)arg4 workspace:(id)arg5;
- (void)videoReadyWithPath:(id)arg1;
- (void)previewImageReady:(id)arg1;
- (void)showStoryBubbleAlertIfNeeded;
- (_Bool)_needShowStoryBubbleAlert;
- (_Bool)needShowWatermarkGuide;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithPhotoCollectionSourceTask:(id)arg1 type:(long long)arg2;
- (id)initWithVideoSourceTask:(id)arg1 cancellationTokenSource:(id)arg2 customCoverTimestamp:(id)arg3 videoProcessState:(id)arg4;
- (id)initWithVideoSourceTask:(id)arg1 cancellationTokenSource:(id)arg2;
- (id)initWithPhoto:(id)arg1 movieInfo:(id)arg2;
- (_Bool)ks_presentViewControllerWithContext:(id)arg1;
- (_Bool)ks_presentViewNeedUserAvailable;
- (void)updateWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

