//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIBezierPath, UIColor;

@interface TBPHPath : NSObject
{
    UIColor *_pathColor;
    double _lineWidth;
    UIBezierPath *_bezierPath;
    struct CGPoint _beginPoint;
}

+ (id)pathToPoint:(struct CGPoint)arg1 lineWidth:(double)arg2;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *pathColor; // @synthesize pathColor=_pathColor;
- (void).cxx_destruct;
- (void)pathLineToPoint:(struct CGPoint)arg1;

@end
