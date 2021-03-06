//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, NSTimer, WBMLVideoGiftRepeatLable, WBMLVideoRepeatButton, WBMLVideoRepeatElementView, WBMLVideoShapeLayer;
@protocol WBMLVideoGiftRepeatViewDelegate;

@interface WBMLVideoGiftRepeatView : UIView <CAAnimationDelegate>
{
    _Bool _isTouchDown;
    _Bool _isTouchDownRepeat;
    WBMLVideoGiftRepeatLable *_repeatLable;
    id <WBMLVideoGiftRepeatViewDelegate> _delegate;
    WBMLVideoRepeatButton *_repeatButton;
    WBMLVideoShapeLayer *_progressLayer;
    WBMLVideoRepeatElementView *_topElement;
    WBMLVideoRepeatElementView *_MiddleElement;
    WBMLVideoRepeatElementView *_bottomElement;
    NSTimer *_timer;
    long long _timerCount;
    struct CGPoint _centerPoint;
}

@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WBMLVideoRepeatElementView *bottomElement; // @synthesize bottomElement=_bottomElement;
@property(retain, nonatomic) WBMLVideoRepeatElementView *MiddleElement; // @synthesize MiddleElement=_MiddleElement;
@property(retain, nonatomic) WBMLVideoRepeatElementView *topElement; // @synthesize topElement=_topElement;
@property(retain, nonatomic) WBMLVideoShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) WBMLVideoRepeatButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(nonatomic) _Bool isTouchDownRepeat; // @synthesize isTouchDownRepeat=_isTouchDownRepeat;
@property(nonatomic) _Bool isTouchDown; // @synthesize isTouchDown=_isTouchDown;
@property(nonatomic) __weak id <WBMLVideoGiftRepeatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBMLVideoGiftRepeatLable *repeatLable; // @synthesize repeatLable=_repeatLable;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)sendGiftWithFinish:(_Bool)arg1 giveNum:(int)arg2 extension:(id)arg3;
- (void)cancelTimer;
- (void)postSendGiftFinish;
- (void)startTimer;
- (void)bottomElementButtonClick:(id)arg1;
- (void)middleElementButtonClick:(id)arg1;
- (void)topElementButtonClick:(id)arg1;
- (void)repeatWithSender:(id)arg1;
- (void)setupRepeatElement:(id)arg1;
- (void)setupRepeatProgress;
- (void)setupRepeatButton;
- (void)addRepeatViews;
- (void)showElementViewToEndPoint;
- (void)repeatFinish;
- (void)dismiss;
- (void)showNormalButtonInView:(id)arg1 center:(struct CGPoint)arg2;
- (void)showRepeatButtonInView:(id)arg1 center:(struct CGPoint)arg2 amount:(id)arg3;
- (void)layoutSubviews;
- (void)applicationDidEnterBackgroundWithSender:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

