//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewComponent.h"

#import "TBXSearchTopBarItemDelegate-Protocol.h"

@class NSMutableArray, NSString, TBXSearchTopBarViewModel, UIView;
@protocol TBXSearchTopBarComponentDelegate;

@interface TBXSearchTopBarComponent : TBSearchViewComponent <TBXSearchTopBarItemDelegate>
{
    _Bool _hasLoadView;
    TBXSearchTopBarViewModel *_viewModel;
    UIView *_topBarParentView;
    UIView *_hostView;
    id <TBXSearchTopBarComponentDelegate> _delegate;
    NSMutableArray *_topBarCollection;
    unsigned long long _adpaterItemNum;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) unsigned long long adpaterItemNum; // @synthesize adpaterItemNum=_adpaterItemNum;
@property(retain, nonatomic) NSMutableArray *topBarCollection; // @synthesize topBarCollection=_topBarCollection;
@property(nonatomic) __weak id <TBXSearchTopBarComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasLoadView; // @synthesize hasLoadView=_hasLoadView;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) __weak UIView *topBarParentView; // @synthesize topBarParentView=_topBarParentView;
@property(retain, nonatomic) TBXSearchTopBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)topBarSearchWxWithData:(id)arg1;
- (_Bool)hasFilterButton;
- (void)setFilterIconHighlightState;
- (void)setFilterItemFloatingLayerToNotOpen;
- (void)setFilterItemHightlight:(_Bool)arg1;
- (void)setLayoutStyleItemDisabled:(_Bool)arg1;
- (double)getItemWidthWithType:(long long)arg1;
- (double)get320ScreenSortItemWidth;
- (void)turnStyle:(int)arg1;
- (void)closeTopBarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)openTopBarFloatingLayer:(long long)arg1 withIndex:(int)arg2;
- (void)topBarSearchWithData:(id)arg1;
- (void)setIconWithLayoutStyle:(int)arg1;
- (void)closeAllFloatingLayer;
- (void)refresh;
- (void)clearAll;
- (void)buildItem;
- (void)changeToImmersedStyle:(_Bool)arg1;
- (void)loadMainView;
- (id)initWithSearchService:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
