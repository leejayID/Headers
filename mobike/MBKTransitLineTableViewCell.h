//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MBKTransitLineModel, UILabel, UIView;

@interface MBKTransitLineTableViewCell : UITableViewCell
{
    UIView *_lineIcon;
    UILabel *_lineName;
    MBKTransitLineModel *_line;
}

@property(retain, nonatomic) MBKTransitLineModel *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *lineName; // @synthesize lineName=_lineName;
@property(retain, nonatomic) UIView *lineIcon; // @synthesize lineIcon=_lineIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellWith:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
