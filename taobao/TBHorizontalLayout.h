//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface TBHorizontalLayout : UICollectionViewFlowLayout
{
    float _activeDistance;
    unsigned long long _currentIndex;
}

@property(nonatomic) float activeDistance; // @synthesize activeDistance=_activeDistance;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (double)flickVelocity;
- (double)rawPageValue;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (double)pageWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end
