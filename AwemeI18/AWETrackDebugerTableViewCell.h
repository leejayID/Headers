//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWETrackDebugerTableViewCellLayout, UILabel;

@interface AWETrackDebugerTableViewCell : UITableViewCell
{
    UILabel *_timeLabel;
    UILabel *_contentLabel;
    AWETrackDebugerTableViewCellLayout *_layout;
}

+ (id)identifier;
@property(retain, nonatomic) AWETrackDebugerTableViewCellLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)_layoutCell:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

