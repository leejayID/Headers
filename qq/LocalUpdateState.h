//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class NSDictionary, NSString;

@interface LocalUpdateState : QQGroupPropertyModel
{
}

- (_Bool)isChecking;
- (_Bool)serverNeedUpdate;
- (_Bool)isForceUpdate;
- (int)escapedSeconds;
- (id)init;
- (id)LtoString:(id)arg1;

// Remaining properties
@property(nonatomic) long long mCheckTimeStamp; // @dynamic mCheckTimeStamp;
@property(nonatomic) int mDeviceResult; // @dynamic mDeviceResult;
@property(copy, nonatomic) NSDictionary *mDeviceUpdateInfo; // @dynamic mDeviceUpdateInfo;
@property(nonatomic) NSString *mDin; // @dynamic mDin;
@property(nonatomic) _Bool mIsAutoCheck; // @dynamic mIsAutoCheck;
@property(nonatomic) _Bool mIsDeviceChecking; // @dynamic mIsDeviceChecking;
@property(nonatomic) _Bool mIsServerChecking; // @dynamic mIsServerChecking;
@property(nonatomic) _Bool mIsUpdateDeviceStatus; // @dynamic mIsUpdateDeviceStatus;
@property(nonatomic) int mLastCheckVersion; // @dynamic mLastCheckVersion;
@property(nonatomic) int mServerResult; // @dynamic mServerResult;
@property(copy, nonatomic) NSDictionary *mServerUpdateInfo; // @dynamic mServerUpdateInfo;
@property(nonatomic) long long mUpgradeTimeout; // @dynamic mUpgradeTimeout;
@property(nonatomic) int mode; // @dynamic mode;

@end

