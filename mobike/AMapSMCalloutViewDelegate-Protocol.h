//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapSMCalloutView;

@protocol AMapSMCalloutViewDelegate <NSObject>

@optional
- (void)calloutViewDidDisappear:(AMapSMCalloutView *)arg1;
- (void)calloutViewWillDisappear:(AMapSMCalloutView *)arg1;
- (void)calloutViewDidAppear:(AMapSMCalloutView *)arg1;
- (void)calloutViewWillAppear:(AMapSMCalloutView *)arg1;
- (double)calloutView:(AMapSMCalloutView *)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)calloutViewClicked:(AMapSMCalloutView *)arg1;
- (_Bool)calloutViewShouldHighlight:(AMapSMCalloutView *)arg1;
@end
