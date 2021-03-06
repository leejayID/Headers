//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaPreviewViewController.h"

#import "KSPreviewEffectViewControllerDelegate-Protocol.h"

@class KSCachedImageArray, KSLongPictureTableViewController, KSMovieInfo, KSPictureOperationContext, NSString;

@interface KSLongPicturePreviewViewController : KSMediaPreviewViewController <KSPreviewEffectViewControllerDelegate>
{
    _Bool _deduplicated;
    KSCachedImageArray *_pictures;
    KSCachedImageArray *_originalPictures;
    KSLongPictureTableViewController *_tableVC;
    KSPictureOperationContext *_previewContext;
    KSMovieInfo *_movieInfo;
}

@property(retain, nonatomic) KSMovieInfo *movieInfo; // @synthesize movieInfo=_movieInfo;
@property(nonatomic) _Bool deduplicated; // @synthesize deduplicated=_deduplicated;
@property(retain, nonatomic) KSPictureOperationContext *previewContext; // @synthesize previewContext=_previewContext;
@property(retain, nonatomic) KSLongPictureTableViewController *tableVC; // @synthesize tableVC=_tableVC;
@property(retain, nonatomic) KSCachedImageArray *originalPictures; // @synthesize originalPictures=_originalPictures;
@property(retain, nonatomic) KSCachedImageArray *pictures; // @synthesize pictures=_pictures;
- (void).cxx_destruct;
- (void)onNextStep;
- (id)mediaForPickMusic;
- (id)contextForBGM;
- (unsigned int)audioFileType;
- (id)mediaType;
- (void)updatePlayViewSwipable;
- (void)activateEffect:(id)arg1 inContext:(id)arg2;
- (id)createPreviewEffectViewController;
- (id)context;
- (id)createContext;
- (id)createPlayView;
- (id)statisticName;
- (void)recoverWithMovieInfo:(id)arg1;
- (void)recoverWithMusicEffect:(id)arg1;
- (void)recoverWithFilterEffects:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPreviewPictures:(id)arg1 originalPictures:(id)arg2 beautifyEnabled:(_Bool)arg3 atlasDeduplicated:(_Bool)arg4 movieInfo:(id)arg5;
- (void)filterValueDidCancelChangingWithEffect:(id)arg1;
- (void)filterValueDidFinishChangingWithEffect:(id)arg1;
- (void)animateChangeVisiableHeight:(double)arg1;
- (id)displayingEffectForPickingEffect:(id)arg1;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

