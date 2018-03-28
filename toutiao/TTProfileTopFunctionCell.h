//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, TTAlphaThemedButton;

@interface TTProfileTopFunctionCell : SSThemedTableViewCell <CAAnimationDelegate>
{
    TTAlphaThemedButton *_historyBtn;
    TTAlphaThemedButton *_favBtn;
    TTAlphaThemedButton *_nightSwitchBtn;
    TTAlphaThemedButton *_resurfaceBtn;
    CDUnknownBlockType _enterTouchHandler;
}

@property(copy, nonatomic) CDUnknownBlockType enterTouchHandler; // @synthesize enterTouchHandler=_enterTouchHandler;
@property(nonatomic) __weak TTAlphaThemedButton *resurfaceBtn; // @synthesize resurfaceBtn=_resurfaceBtn;
@property(nonatomic) __weak TTAlphaThemedButton *nightSwitchBtn; // @synthesize nightSwitchBtn=_nightSwitchBtn;
@property(nonatomic) __weak TTAlphaThemedButton *favBtn; // @synthesize favBtn=_favBtn;
@property(nonatomic) __weak TTAlphaThemedButton *historyBtn; // @synthesize historyBtn=_historyBtn;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showResurfaceIconRefreshAnimation;
- (void)themeChanged:(id)arg1;
- (void)enterTouched:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
