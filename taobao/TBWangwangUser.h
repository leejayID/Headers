//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TBWangwangLoginEventDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSDate, NSString, YWIMCore, YWIMKit;

@interface TBWangwangUser : NSObject <TBWangwangLoginEventDelegate, UIAlertViewDelegate, NSFetchedResultsControllerDelegate>
{
    YWIMCore *_imCore;
    YWIMKit *_imKit;
    id _authEvent;
    NSDate *_lastLoginEventDate;
}

+ (id)currentUser;
@property(retain, nonatomic) NSDate *lastLoginEventDate; // @synthesize lastLoginEventDate=_lastLoginEventDate;
@property(retain, nonatomic) id authEvent; // @synthesize authEvent=_authEvent;
- (void).cxx_destruct;
- (void)wangwangLogoutFinish:(id)arg1;
- (void)wangwangLoginFinish:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)notifyLoginFailWithError:(id)arg1;
- (void)logoutWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)privateLogin;
- (_Bool)demoteLogin:(_Bool)arg1;
- (_Bool)preLogin;
- (void)startLoginPerpare;
- (void)loginLog:(id)arg1;
- (void)forceDisconnect;
- (_Bool)isLoginedOnce;
@property(readonly, nonatomic) _Bool isLogined;
@property(readonly, nonatomic) _Bool isLogining;
- (void)dealloc;
- (void)configureConnectionStatusChangedCallback;
@property(readonly, nonatomic) YWIMCore *imCore;
@property(readonly, nonatomic) YWIMKit *imKit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

