//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTCommentDetailCellContentLayout, TTCommentDetailCellDeleteLayout, TTCommentDetailCellDiggLayout, TTCommentDetailCellNameLayout, TTCommentDetailCellTimeLayout, TTCommentDetailCellUserInfoLayout;

@interface TTCommentDetailCellLayout : NSObject
{
    _Bool _hasQuotedContent;
    NSString *_identifier;
    double _cellHeight;
    double _cellWidth;
    TTCommentDetailCellNameLayout *_nameLayout;
    TTCommentDetailCellContentLayout *_contentLayout;
    TTCommentDetailCellDeleteLayout *_deleteLayout;
    TTCommentDetailCellDiggLayout *_diggLayout;
    TTCommentDetailCellUserInfoLayout *_userInfoLayout;
    TTCommentDetailCellTimeLayout *_timeLayout;
}

+ (double)heightForContentLabel:(id)arg1 constraintsWidth:(double)arg2;
+ (id)arrayOfLayoutsFromModels:(id)arg1 containViewWidth:(double)arg2;
@property(nonatomic) _Bool hasQuotedContent; // @synthesize hasQuotedContent=_hasQuotedContent;
@property(retain, nonatomic) TTCommentDetailCellTimeLayout *timeLayout; // @synthesize timeLayout=_timeLayout;
@property(retain, nonatomic) TTCommentDetailCellUserInfoLayout *userInfoLayout; // @synthesize userInfoLayout=_userInfoLayout;
@property(retain, nonatomic) TTCommentDetailCellDiggLayout *diggLayout; // @synthesize diggLayout=_diggLayout;
@property(retain, nonatomic) TTCommentDetailCellDeleteLayout *deleteLayout; // @synthesize deleteLayout=_deleteLayout;
@property(retain, nonatomic) TTCommentDetailCellContentLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) TTCommentDetailCellNameLayout *nameLayout; // @synthesize nameLayout=_nameLayout;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)userInfoLabelTextWith:(id)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (void)setCellLayoutWithCommentModel:(id)arg1 containViewWidth:(double)arg2;
- (id)initWithCommentModel:(id)arg1 containViewWidth:(double)arg2;

@end

