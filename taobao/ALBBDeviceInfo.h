//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ALBBDeviceInfo : NSObject
{
    _Bool _isMasterDevice;
    _Bool _isCurrentDevice;
    int _deviceType;
    NSString *_itemId;
    NSString *_deviceName;
    NSString *_gmtCreate;
}

@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool isCurrentDevice; // @synthesize isCurrentDevice=_isCurrentDevice;
@property(nonatomic) _Bool isMasterDevice; // @synthesize isMasterDevice=_isMasterDevice;
@property(copy, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

