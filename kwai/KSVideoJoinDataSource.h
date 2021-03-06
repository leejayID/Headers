//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class KSCachedImageArray, NSString;
@protocol KSVideoJoinCellDelegate;

@interface KSVideoJoinDataSource : NSObject <UICollectionViewDataSource>
{
    id <KSVideoJoinCellDelegate> _delegate;
    KSCachedImageArray *_cachedImageArray;
}

@property(retain, nonatomic) KSCachedImageArray *cachedImageArray; // @synthesize cachedImageArray=_cachedImageArray;
@property(nonatomic) __weak id <KSVideoJoinCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteImageAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)cloneImageAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCachedImageArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

