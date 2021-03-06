//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSNumber, UIColor, UICountingLabel;

@interface PNCircleChart : UIView
{
    _Bool _displayCountingLabel;
    _Bool _displayAnimated;
    UICountingLabel *_countingLabel;
    UIColor *_strokeColor;
    UIColor *_strokeColorGradientStart;
    NSNumber *_total;
    NSNumber *_current;
    NSNumber *_lineWidth;
    double _duration;
    unsigned long long _chartType;
    CAShapeLayer *_circle;
    CAShapeLayer *_gradientMask;
    CAShapeLayer *_circleBackground;
}

@property(nonatomic) _Bool displayAnimated; // @synthesize displayAnimated=_displayAnimated;
@property(nonatomic) _Bool displayCountingLabel; // @synthesize displayCountingLabel=_displayCountingLabel;
@property(retain, nonatomic) CAShapeLayer *circleBackground; // @synthesize circleBackground=_circleBackground;
@property(retain, nonatomic) CAShapeLayer *gradientMask; // @synthesize gradientMask=_gradientMask;
@property(retain, nonatomic) CAShapeLayer *circle; // @synthesize circle=_circle;
@property(nonatomic) unsigned long long chartType; // @synthesize chartType=_chartType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSNumber *current; // @synthesize current=_current;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) UIColor *strokeColorGradientStart; // @synthesize strokeColorGradientStart=_strokeColorGradientStart;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UICountingLabel *countingLabel; // @synthesize countingLabel=_countingLabel;
- (void).cxx_destruct;
- (void)addAnimationIfNeeded;
- (void)updateChartByCurrent:(id)arg1 byTotal:(id)arg2;
- (void)updateChartByCurrent:(id)arg1;
- (void)growChartByAmount:(id)arg1;
- (void)strokeChart;
- (id)initWithFrame:(struct CGRect)arg1 total:(id)arg2 current:(id)arg3 clockwise:(_Bool)arg4 shadow:(_Bool)arg5 shadowColor:(id)arg6 displayCountingLabel:(_Bool)arg7 overrideLineWidth:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1 total:(id)arg2 current:(id)arg3 clockwise:(_Bool)arg4 shadow:(_Bool)arg5 shadowColor:(id)arg6 displayCountingLabel:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1 total:(id)arg2 current:(id)arg3 clockwise:(_Bool)arg4 shadow:(_Bool)arg5 shadowColor:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 total:(id)arg2 current:(id)arg3 clockwise:(_Bool)arg4;

@end

