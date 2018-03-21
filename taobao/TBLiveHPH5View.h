//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WVWebViewDelegate-Protocol.h"

@class NSString, TBHUDActivityView, TBLiveWebBaseView;

@interface TBLiveHPH5View : UIView <WVWebViewDelegate>
{
    _Bool _hasLoadH5;
    TBLiveWebBaseView *_webView;
    TBHUDActivityView *_activityView;
    NSString *_url;
    CDUnknownBlockType _reloadBlock;
    long long _tabIndex;
}

@property(nonatomic) _Bool hasLoadH5; // @synthesize hasLoadH5=_hasLoadH5;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TBHUDActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) TBLiveWebBaseView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)reloadH5Page:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)addActivityShowView;
- (void)setupWebViewWithViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 url:(id)arg2 tabIndex:(long long)arg3 viewController:(id)arg4 reload:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
