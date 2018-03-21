//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface KSMediaEditRuler : UIView
{
    double _divWidth;
    double _edge;
    UIColor *_lineColor;
    UIColor *_titleColor;
    double _fontSize;
}

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double edge; // @synthesize edge=_edge;
@property(nonatomic) double divWidth; // @synthesize divWidth=_divWidth;
- (void).cxx_destruct;
- (void)_drawLineWithContext:(struct CGContext *)arg1 atOrigin:(struct CGPoint)arg2 size:(struct CGSize)arg3;
- (void)_drawLongLineWithContext:(struct CGContext *)arg1 atX:(double)arg2;
- (void)_drawShotLineWithContext:(struct CGContext *)arg1 atX:(double)arg2;
- (void)_drawTitle:(id)arg1 atCenter:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end
