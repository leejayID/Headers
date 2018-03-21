//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "MCScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBMCScrollViewDataSource, TBMCScrollViewDelegate;

@interface TBMCScrollView : UIScrollView <UIScrollViewDelegate, MCScrollViewDelegate>
{
    _Bool _jumpFlag;
    _Bool _isSubviewsUnload;
    int _scrollDirection;
    id <TBMCScrollViewDataSource> _mcDataSource;
    id <TBMCScrollViewDelegate> _mcDelegate;
    NSMutableArray *_layouts;
    double _previewPointY;
    long long _currentOnTopIndex;
    long long _jumpIndex;
    double _lastPositionY;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) double lastPositionY; // @synthesize lastPositionY=_lastPositionY;
@property(nonatomic) _Bool isSubviewsUnload; // @synthesize isSubviewsUnload=_isSubviewsUnload;
@property(nonatomic) long long jumpIndex; // @synthesize jumpIndex=_jumpIndex;
@property(nonatomic) _Bool jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(nonatomic) long long currentOnTopIndex; // @synthesize currentOnTopIndex=_currentOnTopIndex;
@property(nonatomic) double previewPointY; // @synthesize previewPointY=_previewPointY;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) __weak id <TBMCScrollViewDelegate> mcDelegate; // @synthesize mcDelegate=_mcDelegate;
@property(nonatomic) __weak id <TBMCScrollViewDataSource> mcDataSource; // @synthesize mcDataSource=_mcDataSource;
- (void).cxx_destruct;
- (void)mc_scrollViewDidEndDecelerating:(id)arg1;
- (void)mc_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)mc_scrollViewDidScroll:(id)arg1;
- (void)lifeCycleForVisibleCells:(id)arg1;
- (void)lifeCycleForChildComponent;
- (_Bool)checkViewIsOnScreen:(id)arg1;
- (_Bool)checkLayoutIsOnScreen:(id)arg1 forView:(id)arg2;
- (id)getLastIndexPath:(id)arg1;
- (void)viewUnloadSubviews;
- (void)viewReloadSubviews;
- (void)viewDidDisappearForIndex:(long long)arg1;
- (void)viewWillDisappearForIndex:(long long)arg1;
- (void)viewDidAppearForIndex:(long long)arg1;
- (void)viewWillAppearForIndex:(long long)arg1;
- (void)viewDidLoadForComponent:(id)arg1 withLayout:(id)arg2;
- (int)direction:(double)arg1;
- (void)didDisappearComponentForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)willDisappearComponentForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)didAppearComponnetForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)willAppearComponnetForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)handleDirectionNone:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleDirectionDown:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleDirectionUp:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleComponentForIndex:(long long)arg1 direction:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)checkJumpAnimated:(long long)arg1;
- (void)viewAdjustSubviews;
- (_Bool)scrollToRowAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToRowAtIndex:(long long)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)refresh:(id)arg1;
- (_Bool)scrollToRowAtIndex:(long long)arg1 offset:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadScrollViewAtIndex:(long long)arg1;
- (void)reloadScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
