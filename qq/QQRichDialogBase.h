//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FullscreenOverlayView.h>

@protocol RichMsgPreviewDialogDelegate;

@interface QQRichDialogBase : FullscreenOverlayView
{
    id <RichMsgPreviewDialogDelegate> _dialogDelegate;
}

@property(nonatomic) __weak id <RichMsgPreviewDialogDelegate> dialogDelegate; // @synthesize dialogDelegate=_dialogDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImage:(id)arg1 withDelegate:(id)arg2;

@end
