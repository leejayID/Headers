//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/SpriteBulletProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface SpriteBulletManagerView : UIView <SpriteBulletProtocol>
{
    NSMutableArray *bulletQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *bulletQueue; // @synthesize bulletQueue;
- (void)spriteBulletDidStop:(id)arg1;
- (void)resumeLayer;
- (void)pauseLayer;
- (void)hideBulletViews;
- (double)getMaxFontSizeWithHeight:(double)arg1;
- (void)showBulletViews:(id)arg1 containView:(id)arg2 glView:(id)arg3 spriteScale:(double)arg4;
- (void)preShowBulletViewsWithInput:(id)arg1 containView:(id)arg2 glView:(id)arg3 spriteScale:(double)arg4;
- (void)setOrgYWithGlViewMaxY:(double)arg1 height:(double)arg2;
- (id)init;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

