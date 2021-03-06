//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class CAShapeLayer, SSThemedLabel;

@interface TTCircleProgressView : SSThemedView
{
    double _progress;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_loopShapeLayer;
    SSThemedLabel *_progressLabel;
}

@property(retain, nonatomic) SSThemedLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) CAShapeLayer *loopShapeLayer; // @synthesize loopShapeLayer=_loopShapeLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animate:(_Bool)arg2;
- (void)pThemeChanged:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

