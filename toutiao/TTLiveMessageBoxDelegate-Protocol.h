//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, NSURL, TTLiveMessageBox, UIImage, UIView;

@protocol TTLiveMessageBoxDelegate <NSObject>

@optional
- (void)ttLiveMediaMessageEditDidFinished:(TTLiveMessageBox *)arg1;
- (void)ttLiveMediaMessageEditPrepared:(TTLiveMessageBox *)arg1;
- (void)ttMessageBox:(TTLiveMessageBox *)arg1 textBack:(NSString *)arg2;
- (void)ttMessageAudioRecordFinishedWithURL:(NSURL *)arg1 duration:(double)arg2;
- (void)ttMessageCameraVideoBack:(NSURL *)arg1 previewImage:(UIImage *)arg2;
- (void)ttMessageCameraPhotoBackAssetUrl:(NSURL *)arg1 image:(UIImage *)arg2;
- (void)ttMessageAlbumPhotoLibraryBack:(NSMutableArray *)arg1;
- (void)ttMessageTextEndEditing:(UIView *)arg1;
- (void)ttMessageTextEditDidChange:(UIView *)arg1;
- (void)ttMessageTextBeginEditing:(UIView *)arg1;
- (void)ttMessagePrepareToSendOut;
- (void)tt_clickPariseByUserWithCommonImage:(NSString *)arg1;
@end
