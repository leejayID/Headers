//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APCustomStorage;
@protocol APSocialTagDAOProxy;

@interface APSocialTagDAO : NSObject
{
    APCustomStorage *_storage;
    id <APSocialTagDAOProxy> _proxy;
}

@property(readonly, nonatomic) id <APSocialTagDAOProxy> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)deleteSocialTagTexts:(id)arg1 userId:(id)arg2;
- (id)selectAllSocialTagTexts;
- (id)updateSocialTagWeightSocialTagTextAndUserId:(id)arg1;
- (id)selectSocialTagsWithUserId:(id)arg1;
- (id)selectSocialTagsWithRecordIds:(id)arg1;
- (id)selectSocialTagWithSocialTagId:(id)arg1;
- (id)deleteUsersForSocialTag:(id)arg1 userIds:(id)arg2;
- (id)insertOrUpdateSocialTags:(id)arg1;
- (id)deleteSocialTag:(id)arg1;
- (id)selectAllSocialTagList;
- (id)init;

@end

