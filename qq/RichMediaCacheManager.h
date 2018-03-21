//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RichMediaCacheManager : NSObject
{
    NSString *_clientIp;
    int _msfApnReachType;
}

+ (id)getInstance;
- (id)getRdmDownloadInfo:(id)arg1;
- (id)getRdmDownloadEvent:(id)arg1 getPicSizeType:(int)arg2;
- (void)handleDownloadSmallPicIfGif:(id)arg1;
- (_Bool)handleDownloadCachePic:(id)arg1;
- (void)handleNewThumbImageFinish:(id)arg1;
- (_Bool)handleDownloadOriginalPic:(id)arg1 picMd5:(id)arg2 getPicSizeType:(int)arg3;
- (void)handleDownloadGifPic:(id)arg1 picMd5:(id)arg2 getPicSizeType:(int)arg3;
- (void)notfiyApnReachableChange:(int)arg1;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)init;

@end
