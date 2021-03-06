//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class NSMutableArray;
@protocol H5WebViewObserveProtocol;

@interface H5WKWebView : WKWebView
{
    id <H5WebViewObserveProtocol> _h5webViwObserveProtocol;
    NSMutableArray *_keyPaths;
}

@property(retain, nonatomic) NSMutableArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(nonatomic) __weak id <H5WebViewObserveProtocol> h5webViwObserveProtocol; // @synthesize h5webViwObserveProtocol=_h5webViwObserveProtocol;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserveWithKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end

