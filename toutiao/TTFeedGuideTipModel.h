//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTFeedGuideTipModel : NSObject
{
    double _targetRectCornerRadius;
    NSString *_tip;
    double _radius;
    unsigned long long _arrowDirection;
    struct CGPoint _arrowPoint;
    struct CGRect _targetRect;
}

@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(nonatomic) double targetRectCornerRadius; // @synthesize targetRectCornerRadius=_targetRectCornerRadius;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
- (void).cxx_destruct;

@end

