//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, UIImageView, UILabel;

@interface TBChatItemCommonViewCell : UITableViewCell
{
    UIImageView *_itemImageView;
    UILabel *_itemTitle;
    UILabel *_itemPrice;
    UILabel *_itemLikeTitle;
    UILabel *_likeLabel;
    CALayer *_separatorLine;
}

+ (double)heightForCell;
- (void).cxx_destruct;
- (void)setShareItem:(id)arg1 isLastCell:(_Bool)arg2;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
