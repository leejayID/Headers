//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class NSMutableArray;

@interface WBPageCardBriefAppsListView : WBPageCardViewBase
{
    NSMutableArray *appViews;
    NSMutableArray *separators;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (_Bool)allowBubble;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) NSMutableArray *separators; // @synthesize separators;
@property(retain, nonatomic) NSMutableArray *appViews; // @synthesize appViews;
- (void).cxx_destruct;
- (void)reloadUIElements;
- (void)setPageCard:(id)arg1;
- (id)addSeparatorViewAtX:(unsigned long long)arg1;
- (_Bool)highlightCellBackgroundWhenPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

