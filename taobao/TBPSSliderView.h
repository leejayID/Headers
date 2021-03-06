//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, TBPSSliderIndicatorView, UIColor, UIScrollView;

@interface TBPSSliderView : UIView <UIScrollViewDelegate>
{
    TBPSSliderIndicatorView *_indicatorView;
    NSTimer *_autoPlayTimer;
    _Bool _indicator;
    _Bool _loop;
    _Bool _autoplay;
    int _selectedIndex;
    int _autoplayInterval;
    UIScrollView *_scrollView;
    NSArray *_contentViews;
    UIView *_selectionIndicator;
    UIColor *_indicatorTintColor;
    UIColor *_currentIndicatorTintColor;
    long long _numberOfPages;
}

@property(nonatomic) int autoplayInterval; // @synthesize autoplayInterval=_autoplayInterval;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool indicator; // @synthesize indicator=_indicator;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(retain, nonatomic) UIColor *currentIndicatorTintColor; // @synthesize currentIndicatorTintColor=_currentIndicatorTintColor;
@property(retain, nonatomic) UIColor *indicatorTintColor; // @synthesize indicatorTintColor=_indicatorTintColor;
@property(readonly, nonatomic) UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(copy, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAutoPlaying;
- (void)autoPlaying:(id)arg1;
- (void)resetAutoPlaying;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) int indicatorIndex;
- (void)setSelectedIndex:(int)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

