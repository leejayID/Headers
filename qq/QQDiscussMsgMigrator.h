//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabase, NSArray;
@protocol IQQDiscussMsgMigratorProtocol;

@interface QQDiscussMsgMigrator : NSObject
{
    FMDatabase *_db;
    id <IQQDiscussMsgMigratorProtocol> _delegate;
    NSArray *_discussList;
}

- (void).cxx_destruct;
- (_Bool)doMigration;
- (void)deleteOldTable;
- (_Bool)migrateMsgWithDiscuss:(unsigned long long)arg1;
- (_Bool)createRecentTable;
- (_Bool)createMsgTableWithDiscuss:(unsigned long long)arg1;
- (void)updateOldTable;
- (id)getDiscussGroupListInDb;
- (id)getTableWithDiscussGrp:(unsigned long long)arg1;
- (id)initWithDb:(id)arg1 delegate:(id)arg2;

@end

