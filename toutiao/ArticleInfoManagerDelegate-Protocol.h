//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ArticleInfoManager, NSDictionary, NSString;

@protocol ArticleInfoManagerDelegate <NSObject>

@optional
- (void)articleInfoManagerFetchInfoFailed:(ArticleInfoManager *)arg1;
- (void)articleInfoManager:(ArticleInfoManager *)arg1 scriptString:(NSString *)arg2;
- (void)articleInfoManager:(ArticleInfoManager *)arg1 fetchedJSContext:(NSString *)arg2;
- (void)articleInfoManager:(ArticleInfoManager *)arg1 getStatus:(NSDictionary *)arg2;
- (void)articleInfoManagerLoadDataFinished:(ArticleInfoManager *)arg1;
@end

