//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RPFixSpaceItemView.h>

@class NSArray, NSMutableArray;

@interface RPGourpItemView : RPFixSpaceItemView
{
    NSMutableArray *_items;
    NSArray *_allItems;
}

@property(readonly, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
- (void).cxx_destruct;
- (struct CGSize)layoutSize;
- (void)removeRPItem:(id)arg1;
- (void)addRPItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
