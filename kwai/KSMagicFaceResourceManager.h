//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSMagicFacePickModel-Protocol.h"

@class KSDiskCache, KSMagicFaceListFetcher, KSMagicFaceResourceDownloadManager, NSArray, NSDictionary, NSString;

@interface KSMagicFaceResourceManager : NSObject <KSMagicFacePickModel>
{
    NSArray *_magicFaceGroups;
    NSString *_cacheKey;
    NSDictionary *_resources;
    KSMagicFaceResourceDownloadManager *_downloadManager;
    KSMagicFaceListFetcher *_listFetcher;
    KSDiskCache *_resourceCache;
}

+ (id)defaultManager;
+ (id)liveAnchorMagicFaceResourceManager;
+ (id)photographyMagicFaceResourceManager;
@property(retain, nonatomic) KSDiskCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) KSMagicFaceListFetcher *listFetcher; // @synthesize listFetcher=_listFetcher;
@property(retain, nonatomic) KSMagicFaceResourceDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) NSDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSArray *magicFaceGroups; // @synthesize magicFaceGroups=_magicFaceGroups;
- (void).cxx_destruct;
- (void)downloadImageForResources:(id)arg1;
- (id)resourceWithMagicFaceGroups:(id)arg1 oldResources:(id)arg2;
- (void)removeResourceForKey:(id)arg1;
- (id)resourceInPath:(id)arg1;
- (id)resourcesForGroupId:(id)arg1;
- (id)resourceOfMagicFace:(id)arg1;
- (void)reloadStatusFromCache;
- (void)cleanUpResourceCache;
- (void)cancelAllDownloaders;
- (void)downloadResource:(id)arg1 completedCallback:(CDUnknownBlockType)arg2;
- (void)downloadResourceIfNeeded:(id)arg1;
- (void)updateMagicFaceList;
- (void)diskCachePurged:(id)arg1;
- (id)initWithListFetcher:(id)arg1 cachedKey:(id)arg2 resourceCache:(id)arg3;
- (id)initWithListFetcher:(id)arg1 cachedKey:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
