//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRichDialogBase.h>

@class ArkUIView;

@interface ArkPopupContainer : QQRichDialogBase
{
    ArkUIView *_arkUIView;
}

+ (id)getInstance;
@property(retain, nonatomic) ArkUIView *arkUIView; // @synthesize arkUIView=_arkUIView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)destroyArkView;
- (void)clickCloseButton;
- (void)closeWithView:(id)arg1;
- (void)showWithView:(id)arg1;
- (id)init;

@end

