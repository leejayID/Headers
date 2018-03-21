//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSNavAlertView, UIButton, UIImageView, UILabel, UIProgressView;

@interface KSOnlineResourceAlertView : UIView
{
    CDUnknownBlockType _download;
    CDUnknownBlockType _onClose;
    UIButton *_closeButton;
    UIImageView *_backgroundView;
    UILabel *_tipsLabel;
    UIButton *_downloadButton;
    UIProgressView *_progressView;
    UIView *_contentView;
    KSNavAlertView *_alertView;
}

+ (_Bool)alertDownloadResourceIfNeed;
+ (_Bool)alertDownloadFaceMagicResourceWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) KSNavAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) CDUnknownBlockType download; // @synthesize download=_download;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showDownloadIfNeed:(_Bool)arg1 show3G4GIfNeed:(_Bool)arg2;
- (void)show;
- (void)startDownload;
- (void)didTapDownloadButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)setError;
- (void)setProgress:(double)arg1;
- (void)setDownloading;
- (void)commonInit;

@end
