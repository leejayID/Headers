//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _KSNavigationBackgroundView;

@interface KSNavigationView : UIView
{
    long long _backgroundStyle;
    _KSNavigationBackgroundView *_backgroundView;
}

@property(retain, nonatomic) _KSNavigationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void).cxx_destruct;
- (void)_configBackGround;
- (_Bool)backgroundAlpha;
- (void)setBackgroundAlpha:(double)arg1;
- (_Bool)backgroundTranslucent;
- (void)setBackgroundTranslucent:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithNavigationBackgroundStyle:(long long)arg1;

@end

