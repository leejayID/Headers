//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QQAvatarView, UIImageView, UILabel;

@interface LCSharedDocumentAuthorityTableViewCell : UITableViewCell
{
    _Bool _isAddEntryCell;
    QQAvatarView *_headImgView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImgView;
}

@property(nonatomic) _Bool isAddEntryCell; // @synthesize isAddEntryCell=_isAddEntryCell;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QQAvatarView *headImgView; // @synthesize headImgView=_headImgView;
- (void)updateWithUin:(id)arg1 name:(id)arg2 detail:(id)arg3;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
