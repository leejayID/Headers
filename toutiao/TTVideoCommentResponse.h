//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoResponse.h"

@class NSMutableArray, TTArticleV2TabCommentsResponseModel;

@interface TTVideoCommentResponse : TTVideoResponse
{
    NSMutableArray *_commentItems;
    NSMutableArray *_stickCommentItems;
}

@property(copy, nonatomic) NSMutableArray *stickCommentItems; // @synthesize stickCommentItems=_stickCommentItems;
@property(copy, nonatomic) NSMutableArray *commentItems; // @synthesize commentItems=_commentItems;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) TTArticleV2TabCommentsResponseModel *originData;

@end

