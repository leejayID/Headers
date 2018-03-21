//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, QZAdvViewInfoModel, UIButton, UIImageView, UILabel;
@protocol QZPhotoAdvViewDelegate;

@interface QZPhotoAdvView : UIView <QZPhotoModuleDownloaderInterfaceDelegate, UIGestureRecognizerDelegate>
{
    UIView *_advPanelView;
    UIImageView *_imageView;
    UILabel *_titleLabelView;
    UILabel *_desLabelView;
    UIView *_dividerView;
    UIButton *_advButton;
    id <QZPhotoAdvViewDelegate> _delegate;
    QZAdvViewInfoModel *_infoModel;
    NSString *_shownKey;
}

@property(retain, nonatomic) NSString *shownKey; // @synthesize shownKey=_shownKey;
@property(retain, nonatomic) QZAdvViewInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) __weak id <QZPhotoAdvViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
