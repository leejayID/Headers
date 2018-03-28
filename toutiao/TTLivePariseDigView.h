//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAKeyframeAnimation, NSMutableArray, NSString, TTImageView;

@interface TTLivePariseDigView : SSThemedView <CAAnimationDelegate>
{
    NSMutableArray *lines;
    CAKeyframeAnimation *moveAnimation;
    CAKeyframeAnimation *scaleAnimation;
    CAKeyframeAnimation *opacityAnimation;
    CAKeyframeAnimation *userMoveAnimation;
    CAKeyframeAnimation *imageAnimation;
    CAKeyframeAnimation *lineStrokeStart;
    CAKeyframeAnimation *lineStrokeEnd;
    CAKeyframeAnimation *lineOpacity;
    _Bool _isUsing;
    double _maxHeight;
    double _maxWidth;
    TTImageView *_imageView;
    TTImageView *_commonImageView;
    unsigned long long _type;
    struct CGPoint _startPosition;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TTImageView *commonImageView; // @synthesize commonImageView=_commonImageView;
@property(retain, nonatomic) TTImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) _Bool isUsing; // @synthesize isUsing=_isUsing;
- (void).cxx_destruct;
- (struct CGPoint)randomXWithMaxWidth:(double)arg1 height:(double)arg2 constWidthOffset:(double)arg3;
- (struct CGPoint)randomXWithMaxWidth:(double)arg1 height:(double)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startOthersAnimation;
- (void)setupOthersAnimation;
- (void)startUserAnimation;
- (void)setupUserAnimation;
- (void)willMoveToSuperview:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)setCommonImage:(id)arg1;
- (id)initWithUserImage:(id)arg1 commonImage:(id)arg2 maxHeight:(double)arg3 maxWidth:(double)arg4 startPosition:(struct CGPoint)arg5;
- (id)initWithCommonImage:(id)arg1 maxHeight:(double)arg2 maxWidth:(double)arg3 startPosition:(struct CGPoint)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
