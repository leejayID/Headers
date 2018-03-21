//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DWComponent.h"

@class DWWebBaseView, TBDWWebBaseController;

@interface TBDWWebViewComponent : DWComponent
{
    DWWebBaseView *_baseView;
    TBDWWebBaseController *_webViewVC;
}

@property(retain, nonatomic) TBDWWebBaseController *webViewVC; // @synthesize webViewVC=_webViewVC;
@property(retain, nonatomic) DWWebBaseView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)onHidden;
- (void)onShow;
- (void)destroy;
- (id)getView;
- (void)refreshComponent:(id)arg1;
- (void)renderView;
- (void)setInstanceFrame:(struct CGRect)arg1;
- (void)initWebView;
- (id)init;

@end
