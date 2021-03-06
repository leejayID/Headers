//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIImageView;

@interface SpritePreview : UIView
{
    UIImageView *_backView;
    UIImageView *_preView;
    NSString *_path;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)showPreviewWithImagePath:(id)arg1;
- (void)showPreviewWithImagePath:(id)arg1 atPoint:(struct CGPoint)arg2 resReady:(_Bool)arg3;
- (id)init;
- (void)dealloc;

@end

