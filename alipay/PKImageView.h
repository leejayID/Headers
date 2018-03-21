//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUImageView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSString, UIImageView, UITapGestureRecognizer;

@interface PKImageView : SUImageView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _corner;
    _Bool _aspectFit;
    _Bool _touchEnabled;
    _Bool _side;
    _Bool _isHeadIcon;
    _Bool _socialadaptpro;
    NSDictionary *_extends;
    double _leftEdgeWidth;
    double _rightEdgeWidth;
    double _leftShareEdgeWidth;
    double _rightShareEdgeWidth;
    NSString *_style;
    NSString *_styleCaps;
    double _leftCap;
    double _rightCap;
    double _topCap;
    long long _alignmentType;
    long long _align;
    long long _state;
    NSDictionary *_chatDataSource;
    UITapGestureRecognizer *_singleTap;
    UIImageView *_maskImageView;
    struct CGRect _rawRect;
}

@property(nonatomic) struct CGRect rawRect; // @synthesize rawRect=_rawRect;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(nonatomic) _Bool socialadaptpro; // @synthesize socialadaptpro=_socialadaptpro;
@property(nonatomic) _Bool isHeadIcon; // @synthesize isHeadIcon=_isHeadIcon;
@property(retain, nonatomic) NSDictionary *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long align; // @synthesize align=_align;
@property(nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
@property(nonatomic) double topCap; // @synthesize topCap=_topCap;
@property(nonatomic) double rightCap; // @synthesize rightCap=_rightCap;
@property(nonatomic) double leftCap; // @synthesize leftCap=_leftCap;
@property(retain, nonatomic) NSString *styleCaps; // @synthesize styleCaps=_styleCaps;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) double rightShareEdgeWidth; // @synthesize rightShareEdgeWidth=_rightShareEdgeWidth;
@property(nonatomic) double leftShareEdgeWidth; // @synthesize leftShareEdgeWidth=_leftShareEdgeWidth;
@property(nonatomic) double rightEdgeWidth; // @synthesize rightEdgeWidth=_rightEdgeWidth;
@property(nonatomic) double leftEdgeWidth; // @synthesize leftEdgeWidth=_leftEdgeWidth;
@property(nonatomic) _Bool side; // @synthesize side=_side;
@property(nonatomic) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
@property(nonatomic) _Bool aspectFit; // @synthesize aspectFit=_aspectFit;
@property(nonatomic) _Bool corner; // @synthesize corner=_corner;
@property(retain, nonatomic) NSDictionary *extends; // @synthesize extends=_extends;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (id)styleRightImageWithId:(id)arg1;
- (id)styleLeftImageWithId:(id)arg1;
- (id)styleCenterImageWithId:(id)arg1;
- (double)leftCapWithImage:(id)arg1 imageName:(id)arg2 styleLeft:(_Bool)arg3;
- (double)topCapWithImage:(id)arg1 imageName:(id)arg2;
- (id)transStyleImageWithName:(id)arg1;
- (void)handleSingleFingerEvent:(id)arg1;
- (void)releaseTapGestureRecognizer;
- (void)setupTapGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
