//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LiveUserPreviewDataManager : NSObject
{
}

+ (id)sharedInstance;
- (void)unblockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unForbiddenUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forbiddenUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowUser:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)followUser:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUserProfile:(id)arg1 roomID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUserProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
