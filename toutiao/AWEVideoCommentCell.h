//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWECommentModel, NSNumber, NSString, TTAsyncCornerImageView, UIButton, UILabel;
@protocol AWEVideoCommentCellOperateDelegate;

@interface AWEVideoCommentCell : SSThemedTableViewCell <UIGestureRecognizerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSNumber *_videoId;
    AWECommentModel *_commentModel;
    id <AWEVideoCommentCellOperateDelegate> _delegate;
    NSNumber *_authorId;
    TTAsyncCornerImageView *_thumbView;
    UILabel *_userLabel;
    UILabel *_commentLabel;
    UILabel *_timeLabel;
    UIButton *_likeButton;
}

+ (void)motionInView:(id)arg1 image:(id)arg2 offsetPoint:(struct CGPoint)arg3;
+ (id)dataFormatter;
+ (double)heightForTableView:(id)arg1 withCommentModel:(id)arg2;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) NSNumber *authorId; // @synthesize authorId=_authorId;
@property(nonatomic) __weak id <AWEVideoCommentCellOperateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWECommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)showStringFromNumber:(id)arg1;
- (id)_formattedTimeString:(id)arg1;
- (void)cellLongPress:(id)arg1;
- (void)likeButtonTapped;
- (void)avatarTapped;
- (void)nameTapped;
- (void)refreshCellWithDiggModel:(id)arg1 cancelDigg:(_Bool)arg2;
- (void)configCellWithCommentModel:(id)arg1 videoId:(id)arg2 authorId:(id)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

