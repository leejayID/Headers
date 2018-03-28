//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"
#import "YSWebViewDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSString, NSURLRequest, SSJSBridgeWebView, TTRWebViewProgressView, UILongPressGestureRecognizer;

@interface SSWebViewContainer : SSViewBase <UIGestureRecognizerDelegate, UIActionSheetDelegate, UIViewControllerErrorHandler, YSWebViewDelegate>
{
    _Bool _userHasClickLink;
    _Bool _disableTTUserAgent;
    SSJSBridgeWebView *_ssWebView;
    NSString *_adID;
    NSString *_logExtra;
    NSString *_webViewTrackKey;
    NSDictionary *_gdExtJsonDict;
    UILongPressGestureRecognizer *_longPressGesture;
    NSString *_tmpSaveImgURLString;
    TTRWebViewProgressView *_progressView;
    NSDate *_startLoadDate;
    NSMutableArray *_jumpLinks;
    NSURLRequest *_request;
    long long _webStayStat;
    double _loadTime;
    NSString *_loadState;
    long long _preload_num;
    long long _match_num;
}

+ (void)load;
@property(nonatomic) long long match_num; // @synthesize match_num=_match_num;
@property(nonatomic) long long preload_num; // @synthesize preload_num=_preload_num;
@property(copy, nonatomic) NSString *loadState; // @synthesize loadState=_loadState;
@property(nonatomic) double loadTime; // @synthesize loadTime=_loadTime;
@property(nonatomic) long long webStayStat; // @synthesize webStayStat=_webStayStat;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *jumpLinks; // @synthesize jumpLinks=_jumpLinks;
@property(retain, nonatomic) NSDate *startLoadDate; // @synthesize startLoadDate=_startLoadDate;
@property(retain, nonatomic) TTRWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSString *tmpSaveImgURLString; // @synthesize tmpSaveImgURLString=_tmpSaveImgURLString;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool disableTTUserAgent; // @synthesize disableTTUserAgent=_disableTTUserAgent;
@property(copy, nonatomic) NSDictionary *gdExtJsonDict; // @synthesize gdExtJsonDict=_gdExtJsonDict;
@property(copy, nonatomic) NSString *webViewTrackKey; // @synthesize webViewTrackKey=_webViewTrackKey;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(retain, nonatomic) SSJSBridgeWebView *ssWebView; // @synthesize ssWebView=_ssWebView;
- (void).cxx_destruct;
- (id)scrollView;
- (void)_sendJumpOutAppEvent;
- (void)_sendLandingPageEvent;
- (void)_sendStatEvent:(long long)arg1 error:(id)arg2;
- (void)_sendJumpLinks;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)loadRequest:(id)arg1 shouldAppendQuery:(_Bool)arg2;
- (void)loadRequest:(id)arg1;
- (void)hiddenProgressView:(_Bool)arg1;
- (void)p_registerADInfo;
- (id)initWithFrame:(struct CGRect)arg1 baseCondition:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
