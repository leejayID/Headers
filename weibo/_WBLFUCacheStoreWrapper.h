//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_WBCacheStoreWrapper.h"

@class NSMapTable, NSMutableArray, WBCachedObject;
@protocol WBIndexCachedCollectionDeleage;

@interface _WBLFUCacheStoreWrapper : _WBCacheStoreWrapper
{
    NSMutableArray *_LFUSortedCacheKeys;
    WBCachedObject<WBIndexCachedCollectionDeleage> *_target;
    NSMapTable *_keyIndex;
}

@property(retain, nonatomic) NSMapTable *keyIndex; // @synthesize keyIndex=_keyIndex;
@property(nonatomic) WBCachedObject<WBIndexCachedCollectionDeleage> *target; // @synthesize target=_target;
- (id)sortedCacheKeys;
- (void).cxx_destruct;
- (void)_removeAllImages;
- (void)_removeCachedCollectionForKey:(id)arg1;
- (void)_removeCachedImageForKey:(id)arg1;
- (void)_addCachedImage:(id)arg1 forKey:(id)arg2;
- (id)_cachedImageForKey:(id)arg1;
- (void)dealloc;
- (void)_initializeSelf;
- (id)init;

@end

