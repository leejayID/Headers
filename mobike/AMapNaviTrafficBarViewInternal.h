//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSArray, NSDictionary, NSMutableDictionary, UIImageView;

@interface AMapNaviTrafficBarViewInternal : UIView
{
    _Bool _showCar;
    float _currentHeight;
    float _posPercent;
    UIImageView *_carImageView;
    CAShapeLayer *_outterBorderLayer;
    CALayer *_lightBlueLayer;
    CALayer *_greyLayer;
    CALayer *_trafficStatusesContainerLayer;
    NSArray *_trafficStatusLayerArray;
    NSArray *_trafficStatus;
    NSMutableDictionary *_colors;
}

@property(retain, nonatomic) NSMutableDictionary *colors; // @synthesize colors=_colors;
@property(nonatomic) float posPercent; // @synthesize posPercent=_posPercent;
@property(nonatomic) float currentHeight; // @synthesize currentHeight=_currentHeight;
@property(nonatomic) __weak NSArray *trafficStatus; // @synthesize trafficStatus=_trafficStatus;
@property(retain, nonatomic) NSArray *trafficStatusLayerArray; // @synthesize trafficStatusLayerArray=_trafficStatusLayerArray;
@property(retain, nonatomic) CALayer *trafficStatusesContainerLayer; // @synthesize trafficStatusesContainerLayer=_trafficStatusesContainerLayer;
@property(retain, nonatomic) CALayer *greyLayer; // @synthesize greyLayer=_greyLayer;
@property(retain, nonatomic) CALayer *lightBlueLayer; // @synthesize lightBlueLayer=_lightBlueLayer;
@property(retain, nonatomic) CAShapeLayer *outterBorderLayer; // @synthesize outterBorderLayer=_outterBorderLayer;
@property(retain, nonatomic) UIImageView *carImageView; // @synthesize carImageView=_carImageView;
@property(nonatomic) _Bool showCar; // @synthesize showCar=_showCar;
- (void).cxx_destruct;
- (id)defaultColorForStatus:(long long)arg1;
- (id)getColorWithStatus:(long long)arg1;
- (id)createShapeLayr:(float)arg1 andStrokeColor:(id)arg2;
- (void)updateTrafficBarWithTrafficStatuses:(id)arg1;
- (void)updateTrafficBarWithCarPositionPercent:(double)arg1;
@property(copy, nonatomic) NSDictionary *statusColors;
- (void)layoutSubviews;
- (void)drawOutterBorder;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

