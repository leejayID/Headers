//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol NearbyFriendHeaderListViewDelegate;

@interface NearbyFriendHeaderListView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableArray *_dataSource;
    _Bool _isDraging;
    id <NearbyFriendHeaderListViewDelegate> _exDelegate;
}

+ (struct CGSize)itemSize;
+ (double)estimatedHeight;
@property(nonatomic) __weak id <NearbyFriendHeaderListViewDelegate> exDelegate; // @synthesize exDelegate=_exDelegate;
- (void).cxx_destruct;
- (void)updateDragingState:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)containLiveInfo;
- (void)layoutSubviews;
- (void)refresh;
- (void)registerCollectionCell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
