//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WDImageHelper : NSObject
{
}

+ (id)compressImage:(id)arg1 size:(long long)arg2 limitWidth:(double)arg3 limitHeight:(double)arg4;
+ (double)imgLimitValue;
+ (id)scaledImageWithImage:(id)arg1 limitHeight:(double)arg2 limitWidth:(double)arg3;
+ (id)webpForImage:(id)arg1;
+ (id)processImageDataForUploadImage:(id)arg1;

@end
