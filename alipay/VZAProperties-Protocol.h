//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol VZAProperties <NSObject>
@property(nonatomic) struct CGPoint originPointOffset;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) struct CGColor *borderColor;
@property(nonatomic, getter=isOpaque) _Bool opaque;
@property(nonatomic) double borderWidth;
@property(nonatomic) double contentsScale;
@property(nonatomic) double cornerRadius;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) double zPosition;
@property(nonatomic) struct CGPoint origin;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
@end

