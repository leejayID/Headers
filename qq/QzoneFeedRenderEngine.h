//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QzoneFeedRenderEngine : NSObject
{
}

+ (void)checkMemoryForDeleteImages;
+ (long long)computeCacheImageBytes;
+ (void)releaseMem;
+ (id)renderQueue;
+ (void)memoryLow:(id)arg1;
+ (void)cacheLayoutInfo:(id)arg1 withImage:(id)arg2;
+ (id)cachedImageWithLayoutInfo:(id)arg1;
+ (id)cachedKeyArray;
+ (id)cachedImageList;
+ (long long)getDeviceLevel;
+ (id)sharedInstance;
- (void)preRenderWithFeedModel:(id)arg1;
- (id)renderImageWithLayoutInfo:(id)arg1 inRect:(struct CGRect)arg2 async:(_Bool)arg3 useCache:(_Bool)arg4 complition:(CDUnknownBlockType)arg5;
- (id)renderLayoutInfo:(id)arg1 inRect:(struct CGRect)arg2;

@end

