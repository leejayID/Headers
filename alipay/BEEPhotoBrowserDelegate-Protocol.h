//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BEECaptionView, BEEPhoto, BEEPhotoBrowser, NSArray, NSString, UIImage, UIView;

@protocol BEEPhotoBrowserDelegate <NSObject>
- (BEEPhoto *)photoBrowser:(BEEPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(BEEPhotoBrowser *)arg1;

@optional
- (void)snapChatImageDidShow;
- (_Bool)isReceivedSnapChatMessage;
- (void)snapVideoDidEndPlay;
- (void)snapVideoDidStartPlay;
- (double)snapChatTotalTime;
- (_Bool)isReceivedMessageAtIndex:(long long)arg1;
- (_Bool)enableSupportOrientationChanged:(BEEPhotoBrowser *)arg1;
- (_Bool)shouldCancelAllDownloadingWhenDismissPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (void)didDismissPhotoBrowser:(BEEPhotoBrowser *)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (void)didDismissPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (void)willDismissPhotoBrowser:(BEEPhotoBrowser *)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (struct CGRect)changedOrigFrameInPhotoBrowser:(BEEPhotoBrowser *)arg1 atIndex:(long long)arg2;
- (UIImage *)imageForZoomAnimationInPhotoBrowser:(BEEPhotoBrowser *)arg1 atIndex:(long long)arg2;
- (void)willAppearPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (_Bool)autoPlayOnlineVideoOnWWLAN:(BEEPhotoBrowser *)arg1;
- (_Bool)enableMutedForShortVideo:(BEEPhotoBrowser *)arg1;
- (_Bool)enableShowTapToExitViewForShortVideo:(BEEPhotoBrowser *)arg1;
- (double)photoBrowser:(BEEPhotoBrowser *)arg1 maximumVideoDurationAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 startEditVideoAtIndex:(unsigned long long)arg2;
- (_Bool)photoBrowser:(BEEPhotoBrowser *)arg1 enableVideoEditAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 startDoodlePhotoAtIndex:(unsigned long long)arg2;
- (_Bool)photoBrowser:(BEEPhotoBrowser *)arg1 shouldEnableDoodlePhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowserDidFinishSelectPhoto:(BEEPhotoBrowser *)arg1;
- (NSString *)photoBrowserConfirmButtonTitle:(BEEPhotoBrowser *)arg1;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 loadAsset:(unsigned long long)arg2 completion:(void (^)(ALAsset *))arg3;
- (void)photoBrowserNeedOriginPhotoChanged:(BEEPhotoBrowser *)arg1;
- (_Bool)photoBrowserNeedOriginPhoto:(BEEPhotoBrowser *)arg1;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)shouldChangePhotoBrowser:(BEEPhotoBrowser *)arg1 photoSelected:(_Bool)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)selectedPhotosInPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (_Bool)photoBrowser:(BEEPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSelectedPhotosInPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (unsigned long long)maxNumberOfSelectPhotosInPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 doActionAtIndex:(unsigned long long)arg2 photoIndex:(unsigned long long)arg3;
- (NSArray *)photoBrowserActionTitleArray:(BEEPhotoBrowser *)arg1;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 didChangeToIndex:(unsigned long long)arg2;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 willChangeFromIndex:(unsigned long long)arg2;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 doActionAtIndex:(long long)arg2 title:(NSString *)arg3 photoIndex:(long long)arg4;
- (NSArray *)photoBrowserActionItemArray:(BEEPhotoBrowser *)arg1 photoIndex:(unsigned long long)arg2;
- (NSArray *)photoBrowserActionItemArray:(BEEPhotoBrowser *)arg1;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 deletePhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(BEEPhotoBrowser *)arg1 deleteTipForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(BEEPhotoBrowser *)arg1 singleTapPhotoAtIndex:(unsigned long long)arg2;
- (void)doActionOnRightBarButtonItemForPhotoBrowser:(BEEPhotoBrowser *)arg1 withPhoto:(BEEPhoto *)arg2 atIndex:(long long)arg3;
- (UIView *)rightBarItemCustomViewForPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (NSString *)backButtonTitleForPhotoBrowser:(BEEPhotoBrowser *)arg1;
- (UIView *)photoBrowser:(BEEPhotoBrowser *)arg1 titleViewAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(BEEPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (BEECaptionView *)photoBrowser:(BEEPhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (BEEPhoto *)photoBrowser:(BEEPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2 isVideo:(_Bool *)arg3;
- (BEEPhoto *)photoBrowser:(BEEPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end

