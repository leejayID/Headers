//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface APScanTabBar : UIView
{
    NSMutableArray *_buttonArray;
}

@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (void)layoutSubviews;
- (id)contructButtonWithConfig:(id)arg1;
- (void)simulateTabClick:(id)arg1;
- (void)setSelectedConfig:(id)arg1;
- (void)updateWithConfigArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
