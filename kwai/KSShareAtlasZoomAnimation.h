//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface KSShareAtlasZoomAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _reverse;
    CDUnknownBlockType _willStartAnimation;
    CDUnknownBlockType _inAnimation;
    CDUnknownBlockType _didEndAnimation;
    struct CGRect _fromFrame;
    struct CGRect _clipRect;
}

@property(copy, nonatomic) CDUnknownBlockType didEndAnimation; // @synthesize didEndAnimation=_didEndAnimation;
@property(copy, nonatomic) CDUnknownBlockType inAnimation; // @synthesize inAnimation=_inAnimation;
@property(copy, nonatomic) CDUnknownBlockType willStartAnimation; // @synthesize willStartAnimation=_willStartAnimation;
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)cleanClipRectWithView:(id)arg1;
- (void)clipView:(id)arg1 duration:(double)arg2;
- (void)cancelClipView:(id)arg1;
- (void)reverseAnimateTransition:(id)arg1;
- (void)animateTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
