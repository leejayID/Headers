//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, TTVReplyManagedObject;
@protocol TTVCommentModelProtocol><TTCommentDetailModelProtocol;

@interface TTVReplyViewModel : NSObject
{
    _Bool _loading;
    _Bool _hasMore;
    _Bool _reloadFlag;
    id <TTVCommentModelProtocol><TTCommentDetailModelProtocol> _commentModel;
    double _containViewWidth;
    NSIndexPath *_needMarkedIndexPath;
    TTVReplyManagedObject *_managedObject;
    unsigned long long _totalReplyCount;
    long long _currentOffset;
}

@property(nonatomic) _Bool reloadFlag; // @synthesize reloadFlag=_reloadFlag;
@property(nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) unsigned long long totalReplyCount; // @synthesize totalReplyCount=_totalReplyCount;
@property(retain, nonatomic) TTVReplyManagedObject *managedObject; // @synthesize managedObject=_managedObject;
@property(retain, nonatomic) NSIndexPath *needMarkedIndexPath; // @synthesize needMarkedIndexPath=_needMarkedIndexPath;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) double containViewWidth; // @synthesize containViewWidth=_containViewWidth;
@property(retain, nonatomic) id <TTVCommentModelProtocol><TTCommentDetailModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
- (void).cxx_destruct;
- (void)p_setShouldRefreshReplyTableView;
- (void)deleteReplyedComment:(id)arg1 InHostComment:(id)arg2;
- (void)handleReplyCommentDigWithCommentID:(id)arg1 replayID:(id)arg2 ifDigg:(_Bool)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)handleReplyCommentDigWithCommentID:(id)arg1 replayID:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)startLoadReplyListFinishBlock:(CDUnknownBlockType)arg1;
- (void)refreshLayoutsWithWidth:(double)arg1;
- (void)addToTopWithReplyModel:(id)arg1;
- (id)curReplyItemWithCommentID:(id)arg1;
- (id)allReplyItemAtIndex:(unsigned long long)arg1;
- (id)hotReplyItemAtIndex:(unsigned long long)arg1;
- (void)removeReplyItemWithCommentID:(id)arg1;
- (void)removeReplyItemWithReplyModel:(id)arg1;
- (unsigned long long)totalReplyItemsCount;
- (id)curAllReplyItems;
- (id)curHotReplyItems;
- (id)initWithCommentModel:(id)arg1 containViewWidth:(double)arg2;

@end
