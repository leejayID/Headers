//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class FMDatabase, IndexSearchResultModel, NSArray, NSSet, NSString, QQMessageModel;

@protocol FTSIndexDBServerProtocol <NSObject>
+ (QQMessageModel *)ConvertIndexSearchResultModelToQQMessageModel:(IndexSearchResultModel *)arg1;
- (long long)MySessionType;
- (long long)MyFilterType;
- (QQMessageModel *)getMsg:(NSString *)arg1 conversationUin:(NSString *)arg2 inDb:(FMDatabase *)arg3;
- (NSArray *)getSearchResults:(NSArray *)arg1 keyWord:(NSString *)arg2;
- (NSArray *)getSearchResultsList:(NSArray *)arg1 isNeedExtSearch:(_Bool)arg2;

@optional
- (NSSet *)getExtSearchResultList:(NSArray *)arg1 inDB:(FMDatabase *)arg2;
@end

