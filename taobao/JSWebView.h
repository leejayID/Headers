//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface JSWebView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;
}

+ (void)attrsTNodeMapper:(id)arg1;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

