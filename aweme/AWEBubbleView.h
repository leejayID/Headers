//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEBubbleAnchor-Protocol.h"

@class NSString, UIImageView;

@interface AWEBubbleView : UIView <AWEBubbleAnchor>
{
    UIImageView *_bodyImageView;
    double _adjustedBodyOffset;
    CDUnknownBlockType _adjustFrameBlock;
    unsigned long long _direction;
    UIImageView *_cornerImageView;
    struct CGPoint _anchorAdjustment;
}

@property(nonatomic) struct CGPoint anchorAdjustment; // @synthesize anchorAdjustment=_anchorAdjustment;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) CDUnknownBlockType adjustFrameBlock; // @synthesize adjustFrameBlock=_adjustFrameBlock;
@property(nonatomic) double adjustedBodyOffset; // @synthesize adjustedBodyOffset=_adjustedBodyOffset;
@property(retain, nonatomic) UIImageView *bodyImageView; // @synthesize bodyImageView=_bodyImageView;
- (void).cxx_destruct;
- (struct CGPoint)anchorPositionRelatedToLeftTop;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithDirection:(unsigned long long)arg1 anchorAdjustment:(struct CGPoint)arg2;
- (id)initWithDirection:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
