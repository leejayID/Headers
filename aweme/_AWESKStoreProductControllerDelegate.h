//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString, UIWindow;

@interface _AWESKStoreProductControllerDelegate : NSObject <SKStoreProductViewControllerDelegate>
{
    UIWindow *_lastKeyWindow;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
