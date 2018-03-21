//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString, QZCommonWidgetInfo, UILabel;
@protocol QZCommonWidgetDelegate;

@interface QZCommonWidget : UIImageView <IQZUrlDownloaderDelegate>
{
    NSString *_refer;
    QZCommonWidgetInfo *_widgetInfo;
    UILabel *_numberLabel;
    UILabel *_descLabel;
    UIImageView *_arrowView;
    long long _needDownloadResourceNum;
    long long _uin;
    id <QZCommonWidgetDelegate> _delegate;
}

@property(nonatomic) __weak id <QZCommonWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
