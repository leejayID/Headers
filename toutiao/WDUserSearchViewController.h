//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class NSString, WDUserSearchView, WDUserSearchViewModel;

@interface WDUserSearchViewController : SSViewControllerBase
{
    _Bool _animatedWhenDismiss;
    WDUserSearchView *_searchView;
    WDUserSearchViewModel *_viewModel;
    NSString *_queryStr;
}

@property(copy, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(copy, nonatomic) WDUserSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool animatedWhenDismiss; // @synthesize animatedWhenDismiss=_animatedWhenDismiss;
@property(retain, nonatomic) WDUserSearchView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;
- (void)dismissFromViewWithCustomAnimation:(id)arg1;
- (void)showInViewWithCustomAnimation:(id)arg1 searchViewDelegate:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGRect)frameForSearchView;
- (id)initWithQid:(id)arg1 queryStr:(id)arg2 gdExtJson:(id)arg3 apiParams:(id)arg4;
- (id)initWithRouteParamObj:(id)arg1;

@end
