//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface KSSimpleStackView : UIView
{
    NSMutableArray *_mutableArrangedSubviews;
    NSMutableArray *_distributionConstraints;
    NSMutableArray *_alignmentConstraints;
    long long _alignment;
    double _spacing;
}

+ (Class)layerClass;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)rebuildAlignmentConstraints;
- (void)rebuildDistributionConstraints;
- (void)rebuildArrangedSubviewConstraints;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)commonInitWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

