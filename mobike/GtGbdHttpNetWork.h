//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GtGbdHttpNetWork : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isValidHttpbody:(id)arg1 andresponseCT_T:(id)arg2 andResponseSign:(id)arg3;
- (void)analysisReturnResponse:(id)arg1 data:(id)arg2 error:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)sendAsyncRequestWithUrl:(id)arg1 andBody:(id)arg2 andGzip:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
- (id)buildUrlRequest:(id)arg1 body:(id)arg2 andGzip:(_Bool)arg3;

@end
