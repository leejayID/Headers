//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSkinToneFilter : GPUImageFilter
{
    int skinToneAdjustUniform;
    int skinHueUniform;
    int skinHueThresholdUniform;
    int maxHueShiftUniform;
    int maxSaturationShiftUniform;
    int upperSkinToneColorUniform;
    double skinToneAdjust;
    double skinHue;
    double skinHueThreshold;
    double maxHueShift;
    double maxSaturationShift;
    unsigned long long upperSkinToneColor;
}

@property(nonatomic) unsigned long long upperSkinToneColor; // @synthesize upperSkinToneColor;
@property(nonatomic) double maxSaturationShift; // @synthesize maxSaturationShift;
@property(nonatomic) double maxHueShift; // @synthesize maxHueShift;
@property(nonatomic) double skinHueThreshold; // @synthesize skinHueThreshold;
@property(nonatomic) double skinHue; // @synthesize skinHue;
@property(nonatomic) double skinToneAdjust; // @synthesize skinToneAdjust;
- (id)init;

@end
