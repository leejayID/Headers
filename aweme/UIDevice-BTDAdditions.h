//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (BTDAdditions)
+ (double)btd_onePixel;
+ (struct CGSize)btd_resolution;
+ (_Bool)isPadDevice;
+ (double)btd_screenHeight;
+ (double)btd_screenWidth;
+ (struct CGSize)btd_screenSize;
+ (_Bool)btd_isScreenWidthLarge320;
+ (_Bool)btd_is736Screen;
+ (_Bool)btd_is667Screen;
+ (_Bool)btd_is568Screen;
+ (_Bool)btd_is480Screen;
+ (double)btd_screenScale;
+ (_Bool)btd_poorDevice;
+ (id)btd_carrierMNC;
+ (id)btd_carrierMCC;
+ (id)btd_carrierName;
+ (_Bool)btd_isJailBroken;
+ (id)btd_currentLanguage;
+ (id)btd_MACAddress;
+ (id)btd_OSVersion;
+ (id)btd_idfaString;
+ (id)btd_platformString;
+ (unsigned long long)btd_platformType;
+ (id)btd_hwmodel;
+ (id)btd_platform;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)btd_runningProcesses;
@end

