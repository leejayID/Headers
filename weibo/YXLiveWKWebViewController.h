//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "YXLiveShowcaseWebViewDelegate-Protocol.h"

@class NSString, UIView, YXLiveViewController;

@interface YXLiveWKWebViewController : WBViewController <YXLiveShowcaseWebViewDelegate>
{
    YXLiveViewController *_liveViewController;
    NSString *_orightUrl;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSString *orightUrl; // @synthesize orightUrl=_orightUrl;
@property(nonatomic) __weak YXLiveViewController *liveViewController; // @synthesize liveViewController=_liveViewController;
- (void).cxx_destruct;
- (void)notificationHandle:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)showUserInfoPanel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)showToastTypeText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)getWkViewTitle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWebURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

