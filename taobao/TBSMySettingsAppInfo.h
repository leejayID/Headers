//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSMySettingsAppInfo : TBJSONModel
{
    _Bool _isEnableFingerprint;
    _Bool _isEnableShake;
    _Bool _isEnableShareScreenShot;
    _Bool _isEnableVideoAutoPlay;
    long long _videoPlayType;
}

@property(nonatomic) long long videoPlayType; // @synthesize videoPlayType=_videoPlayType;
@property(nonatomic) _Bool isEnableVideoAutoPlay; // @synthesize isEnableVideoAutoPlay=_isEnableVideoAutoPlay;
@property(nonatomic) _Bool isEnableShareScreenShot; // @synthesize isEnableShareScreenShot=_isEnableShareScreenShot;
@property(nonatomic) _Bool isEnableShake; // @synthesize isEnableShake=_isEnableShake;
@property(nonatomic) _Bool isEnableFingerprint; // @synthesize isEnableFingerprint=_isEnableFingerprint;

@end

