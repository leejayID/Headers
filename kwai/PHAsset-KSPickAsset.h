//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import "KSPickAsset-Protocol.h"

@class NSString;

@interface PHAsset (KSPickAsset) <KSPickAsset>
- (void)loadSizedImageCompletion:(CDUnknownBlockType)arg1;
- (void)loadVideoDurationCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isVideoAsset;
- (_Bool)isLivePhoto;
- (_Bool)isPhotoAsset;
@property(copy, nonatomic) CDUnknownBlockType onPickStatusChanged;
@property(nonatomic) unsigned long long pickStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

