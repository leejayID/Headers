//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNoticeDialog.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface MVAlertView : AUNoticeDialog <UIAlertViewDelegate>
{
    CDUnknownBlockType _tapHandler;
}

+ (id)alertTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapHandler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
- (void).cxx_destruct;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

