//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>

@class NSString;

@interface QQWalletOpenTenpayViewhandler : NSObject <QQFriendSelectedViewControllerDelegate>
{
    CDUnknownBlockType _block;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)shareToFriendCancelled;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (void)gotoFriendSelectedVCMakeRedGift:(id)arg1 rootVC:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
