//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/PhotoBrowserViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQFaceWallPhotoBrowserBottomBarDelegate-Protocol.h>
#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface QQGroupAnnouncementPlugin : QQWebViewPluginQQBizBase <QQMultiImagePickerControllerDelegate, PhotoBrowserViewControllerDelegate, QQFaceWallPhotoBrowserBottomBarDelegate>
{
    NSMutableArray *_seletedPhotoList;
    NSMutableDictionary *_sendImageReqs;
    NSMutableArray *_localImageArray;
    NSMutableArray *_onlineImageArray;
    NSDictionary *_requestQuery;
}

@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
- (void)callJsCallBack:(id)arg1 query:(id)arg2;
- (void)endSendRequest:(id)arg1;
- (id)findKeyForRequest:(id)arg1;
- (void)qqHttpClientSessionFailWithError:(id)arg1 error:(id)arg2;
- (void)qqHttpClientSessionRequestDidLoad:(id)arg1 respObj:(id)arg2;
- (void)handleJsBridgeRequest_troopNotice_sendPicture:(id)arg1;
- (void)handleJsBridgeRequest_troopNotice_sendBatchPicture:(id)arg1;
- (int)getBkn;
- (void)photoBrowserViewContoller:(id)arg1 didSelectImage:(id)arg2;
- (void)clickBottomBarJumpDetailBtnWithIndex:(long long)arg1;
- (void)clickBottomBarCommentBtnWithIndex:(long long)arg1;
- (void)clickBottomBarLikeBtnWithIndex:(long long)arg1;
- (void)handleJsBridgeRequest_troopNotice_showMedia:(id)arg1;
- (void)handleJsBridgeRequest_troopNotice_showPicture:(id)arg1;
- (void)finishShowPicturs;
- (void)getImageErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (void)removeOnlineImageTask:(id)arg1;
- (_Bool)isUrlRequestValid:(id)arg1;
- (void)finishLoadingOnlineImage;
- (_Bool)isLoadingImageFinished;
- (id)imageForAssertURLString:(id)arg1;
- (void)clearSendReqs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

