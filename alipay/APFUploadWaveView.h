//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, UIImageView;

@interface APFUploadWaveView : UIView
{
    CAShapeLayer *_sinWaveLayer;
    CAShapeLayer *_cosWaveLayer;
    CADisplayLink *_displayLink;
    double _waveFrequency;
    double _waveHeight;
    double _waveWidth;
    double _waveMid;
    double _wavePhase;
    double _wavePhaseShift;
    double _waveMaxAmplitude;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double waveMaxAmplitude; // @synthesize waveMaxAmplitude=_waveMaxAmplitude;
@property(nonatomic) double wavePhaseShift; // @synthesize wavePhaseShift=_wavePhaseShift;
@property(nonatomic) double wavePhase; // @synthesize wavePhase=_wavePhase;
@property(nonatomic) double waveMid; // @synthesize waveMid=_waveMid;
@property(nonatomic) double waveWidth; // @synthesize waveWidth=_waveWidth;
@property(nonatomic) double waveHeight; // @synthesize waveHeight=_waveHeight;
@property(nonatomic) double waveFrequency; // @synthesize waveFrequency=_waveFrequency;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAShapeLayer *cosWaveLayer; // @synthesize cosWaveLayer=_cosWaveLayer;
@property(retain, nonatomic) CAShapeLayer *sinWaveLayer; // @synthesize sinWaveLayer=_sinWaveLayer;
- (void).cxx_destruct;
- (id)createWavePathWithType:(long long)arg1;
- (void)updateWave:(long long)arg1;
- (void)stopWave;
- (void)startWave;
- (void)_buildWaveView;
- (id)initWithFrame:(struct CGRect)arg1 andBackgroundImage:(id)arg2;

@end

