//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <QQMainProject/MCTempManagerDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>

@class MCGridVideoItem, NSMutableArray, NSString, UICollectionViewFlowLayout;
@protocol QQPendantItemPanelDelegate;

@interface QQPendantItemPanel : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, MCTempManagerDelegate>
{
    NSMutableArray *_reloadIndexPaths;
    NSMutableArray *_pendantArray;
    long long _classificationID;
    NSString *_categoryName;
    id <QQPendantItemPanelDelegate> _pendantDelegate;
    UICollectionViewFlowLayout *_pendantLayout;
    NSMutableArray *_downloadArray;
    MCGridVideoItem *_unLoadSelectedItem;
}

@property(retain, nonatomic) MCGridVideoItem *unLoadSelectedItem; // @synthesize unLoadSelectedItem=_unLoadSelectedItem;
@property(retain, nonatomic) NSMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
@property(retain, nonatomic) UICollectionViewFlowLayout *pendantLayout; // @synthesize pendantLayout=_pendantLayout;
@property(nonatomic) __weak id <QQPendantItemPanelDelegate> pendantDelegate; // @synthesize pendantDelegate=_pendantDelegate;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long classificationID; // @synthesize classificationID=_classificationID;
@property(retain, nonatomic) NSMutableArray *pendantArray; // @synthesize pendantArray=_pendantArray;
- (void).cxx_destruct;
- (void)danceResoureDownloadResult:(id)arg1;
- (_Bool)isDanceItem:(id)arg1;
- (_Bool)isFaceDanceItem:(id)arg1;
- (void)setSelectEmpty;
- (id)setSelectedIDWhenVisible:(id)arg1;
- (id)setSelectedID:(id)arg1;
- (void)removeItemByID:(id)arg1;
- (void)downloadResource:(id)arg1;
- (void)resourcefailed:(id)arg1;
- (void)resourceSuccess:(id)arg1;
- (void)selectTmplItem:(id)arg1 temState:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)setPendantArray:(id)arg1 withoutAdItem:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

