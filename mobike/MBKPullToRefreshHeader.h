//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class UIActivityIndicatorView, UIImageView;

@interface MBKPullToRefreshHeader : MJRefreshHeader
{
    UIImageView *_arrowView;
    UIActivityIndicatorView *_loadingView;
}

@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (id)stateLabel;

@end

