//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

#import "TTRNViewDelegate-Protocol.h"

@class ExploreOrderedData, NSString, SSThemedView, TTRNView;

@interface TTRNCellView : ExploreCellViewBase <TTRNViewDelegate>
{
    TTRNView *_rnView;
    SSThemedView *_loadingView;
    SSThemedView *_bottomLineView;
    ExploreOrderedData *_orderedData;
    NSString *_dislikeAction;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(copy, nonatomic) NSString *dislikeAction; // @synthesize dislikeAction=_dislikeAction;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) SSThemedView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TTRNView *rnView; // @synthesize rnView=_rnView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)RNBundleUrl;
- (void)rootViewDidChangeIntrinsicSize:(struct CGSize)arg1;
- (void)exploreDislikeViewOKBtnClicked:(id)arg1;
- (void)showDislike:(id)arg1;
- (void)closeCell:(id)arg1;
- (void)reloadCell;
- (void)refreshFeedList;
- (id)cellData;
- (void)updateProperties;
- (void)refreshWithData:(id)arg1;
- (void)refreshUI;
- (void)refreshCustomStyle;
- (void)fontSizeChanged;
- (void)themeChanged:(id)arg1;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

