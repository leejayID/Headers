//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEPieRenderViewDataSource-Protocol.h"
#import "BEEPieRenderViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class APButton, APCircleProgressingIndicator, APStorageSpaceView, AUToast, BEEPieRenderView, NSMutableArray, NSString, UIColor, UILabel, UIView;

@interface APCacheStatisticsViewController : DTViewController <BEEPieRenderViewDelegate, BEEPieRenderViewDataSource, UIActionSheetDelegate>
{
    double _scale;
    UIView *_topView;
    APCircleProgressingIndicator *_indicator;
    BEEPieRenderView *_pieView;
    UILabel *_cleanedInfoText;
    UILabel *_hintInfoText;
    APButton *_chatDataButton;
    APButton *_avatarDataButton;
    APStorageSpaceView *_walletView;
    APStorageSpaceView *_freeView;
    APStorageSpaceView *_otherView;
    UIColor *_pieColors[3];
    float _pieRadius[3];
    double _calculateTime;
    _Bool _oldFileCleaned;
    unsigned long long _walletSize;
    unsigned long long _totalSize;
    unsigned long long _freeSize;
    unsigned long long _oldFilesSize;
    unsigned long long _avatarSize;
    unsigned long long _precleanSize;
    NSMutableArray *_chatSessionModels;
    AUToast *_toastView;
}

@property(retain, nonatomic) AUToast *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) NSMutableArray *chatSessionModels; // @synthesize chatSessionModels=_chatSessionModels;
@property(retain, nonatomic) APCircleProgressingIndicator *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (id)pieChart:(id)arg1 colorForSliceAtIndex:(unsigned long long)arg2;
- (double)pieChart:(id)arg1 valueForSliceAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSlicesInPieChart:(id)arg1;
- (void)clearAvatarData;
- (void)viewChatDetail;
- (void)viewDidLoad;
- (void)collectCacheStatistics;
- (void)calculatePie;
- (void)showStatistics;
- (void)updateProgressText:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteOldFiles;
- (void)shouldRecalculatePie;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setRightBarButtonItemEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
