//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasEditAssetElement-Protocol.h"

@class NSString;

@interface KSAtlasEditLocalAssetElement : NSObject <KSAtlasEditAssetElement>
{
    NSString *_identifier;
    NSString *_path;
    struct CGSize _pixelSize;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 pixelSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

