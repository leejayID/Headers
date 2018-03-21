//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSDiskCache;

@interface KSHybridStorage : NSObject
{
    KSDiskCache *_diskCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) KSDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void).cxx_destruct;
- (void)useHybridResource:(id)arg1 requestPath:(id)arg2;
- (void)updatePackage:(id)arg1;
- (id)filePathForRequestPath:(id)arg1 inHybrid:(id)arg2;
- (id)filePathFromRequestURL:(id)arg1;
- (void)removePackageDeprecatedCache:(id)arg1;
- (void)removePackage:(id)arg1;
- (void)storePackage:(id)arg1 filePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
