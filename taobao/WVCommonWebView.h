//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView, UIViewController, WVJavascriptApplication, WVNavigation, WVUserContentController, WVWebViewLongPressImage, WVWebViewPerfRecorder;
@protocol WVWebViewDelegate, WVWebViewProtocol;

@interface WVCommonWebView : NSObject <UIWebViewDelegate, WKNavigationDelegate>
{
    BOOL _bounces;
    _Bool _isWebViewServiceBound;
    long long _visiblity;
    WVUserContentController *_userContentController;
    _Bool _isUIWebView;
    NSMutableDictionary *_frameNavigations;
    NSMutableArray *_privisionalNavigations;
    WVNavigation *_loadedNavigation;
    _Bool _openWebKitLongPress;
    _Bool _openLongPressSaveImage;
    _Bool _usePullToRefresh;
    _Bool _useInfiniteScrolling;
    BOOL _pageEmpty;
    _Bool _pullToRefreshViewCreated;
    _Bool _useCustomPullToRefresh;
    _Bool _infiniteScrollingViewCreated;
    _Bool _pullToRefreshTitleChanged;
    NSString *_identifier;
    UIViewController *_sourceViewController;
    long long _visibleInViewController;
    NSString *_frameId;
    WVNavigation *_navigation;
    WVNavigation *_mainNavigation;
    WVWebViewPerfRecorder *_perfRecorder;
    WVJavascriptApplication *_jsBridgeContext;
    long long _viewportFit;
    id <WVWebViewDelegate> _windVaneDelegate;
    double _estimatedProgress;
    UIView<WVWebViewProtocol> *_webView;
    WVWebViewLongPressImage *_longPressImageHandler;
    NSArray *_defaultPullToRefreshTitles;
    double _adjustedBottomInset;
}

+ (_Bool)isSupportSVPullToRefresh;
+ (void)sendWindVaneReadyEvent:(id)arg1;
@property(nonatomic) double adjustedBottomInset; // @synthesize adjustedBottomInset=_adjustedBottomInset;
@property(nonatomic) _Bool pullToRefreshTitleChanged; // @synthesize pullToRefreshTitleChanged=_pullToRefreshTitleChanged;
@property(copy, nonatomic) NSArray *defaultPullToRefreshTitles; // @synthesize defaultPullToRefreshTitles=_defaultPullToRefreshTitles;
@property(nonatomic) _Bool infiniteScrollingViewCreated; // @synthesize infiniteScrollingViewCreated=_infiniteScrollingViewCreated;
@property(nonatomic) _Bool useCustomPullToRefresh; // @synthesize useCustomPullToRefresh=_useCustomPullToRefresh;
@property(nonatomic) _Bool pullToRefreshViewCreated; // @synthesize pullToRefreshViewCreated=_pullToRefreshViewCreated;
@property(retain, nonatomic) WVWebViewLongPressImage *longPressImageHandler; // @synthesize longPressImageHandler=_longPressImageHandler;
@property(nonatomic) __weak UIView<WVWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) double estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate; // @synthesize windVaneDelegate=_windVaneDelegate;
@property(readonly, nonatomic) long long viewportFit; // @synthesize viewportFit=_viewportFit;
@property(nonatomic, getter=isPageEmpty) BOOL pageEmpty; // @synthesize pageEmpty=_pageEmpty;
@property(readonly, nonatomic) WVJavascriptApplication *jsBridgeContext; // @synthesize jsBridgeContext=_jsBridgeContext;
@property(retain, nonatomic) WVWebViewPerfRecorder *perfRecorder; // @synthesize perfRecorder=_perfRecorder;
@property(readonly, nonatomic) WVNavigation *mainNavigation; // @synthesize mainNavigation=_mainNavigation;
@property(readonly, nonatomic) WVNavigation *navigation; // @synthesize navigation=_navigation;
@property(copy, nonatomic) NSString *frameId; // @synthesize frameId=_frameId;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling; // @synthesize useInfiniteScrolling=_useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh; // @synthesize usePullToRefresh=_usePullToRefresh;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage; // @synthesize openLongPressSaveImage=_openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress; // @synthesize openWebKitLongPress=_openWebKitLongPress;
@property(nonatomic) long long visibleInViewController; // @synthesize visibleInViewController=_visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reuse;
- (void)recycle;
- (void)bindingWebViewService;
- (void)releaseWebViewService;
- (void)safeAreaInsetsDidChange;
- (_Bool)executeURLInterceptor:(id)arg1 withNavigationType:(long long)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)updatePullToRefreshUrl;
- (void)updatePullToRefreshTitleStopped:(id)arg1 triggered:(id)arg2 loading:(id)arg3;
- (void)updatePullToRefreshMeta:(id)arg1;
- (void)updateMeta:(id)arg1;
- (void)initMetaObserve;
- (void)isPageEmpty:(CDUnknownBlockType)arg1;
- (void)checkPageEmpty:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadNavigation:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)interceptRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigation:(id)arg2;
- (BOOL)checkBasicInterception:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)resetEstimatedProgress;
- (void)setEstimatedProgress:(double)arg1;
- (void)initInfiniteScrollingView;
- (void)stopInfiniteScrollingAnimating;
- (void)setShowsInfiniteScrolling:(_Bool)arg1;
- (void)initPullToRefreshView;
- (void)stopPullToRefreshAnimating;
- (void)setShowsPullToRefresh:(_Bool)arg1;
@property(nonatomic) _Bool bounces;
@property(readonly, nonatomic) long long visiblity;
- (void)updateVisiblity;
@property(readonly, nonatomic) WVUserContentController *userContentController;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

