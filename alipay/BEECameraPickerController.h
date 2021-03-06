//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImagePickerController.h>

#import "APAudioSessionManagerDelegate-Protocol.h"

@interface BEECameraPickerController : UIImagePickerController <APAudioSessionManagerDelegate>
{
}

+ (_Bool)supportPictureForSourceType:(long long)arg1;
+ (_Bool)supportPictureForCamera;
- (void)showNoAuthorizationAlertView;
- (void)requestCameraAuthorization;
- (_Bool)isCameraAuthorized;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCamera;

@end

