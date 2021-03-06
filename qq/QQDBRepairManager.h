//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQDBRepairManager : NSObject
{
    NSString *_pathname;
    int _flag;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)notifyRepairComplete;
- (void)handleMalformDBWithPath:(id)arg1;
- (void)showProgressWindow;
- (void)showPrompt;
- (void)resetShowCountForPath:(id)arg1;
- (void)increaseShowCountForPath:(id)arg1;
- (_Bool)shouldShowPromptForPath:(id)arg1;
- (_Bool)isMessageDBRepairInProgress;
- (void)handleLogout;
- (void)handleEnterForeground;
- (void)dealloc;
- (id)init;

@end

