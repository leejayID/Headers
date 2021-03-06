//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSLocalAlbumWorkspacePicturesDataSource-Protocol.h"

@protocol KSPostPicturesDataSource;

@interface _KSPostPictureMakerAlbumDataSource : NSObject <KSLocalAlbumWorkspacePicturesDataSource>
{
    id <KSPostPicturesDataSource> _backendDataSource;
}

@property(retain, nonatomic) id <KSPostPicturesDataSource> backendDataSource; // @synthesize backendDataSource=_backendDataSource;
- (void).cxx_destruct;
@property(readonly) unsigned long long numberOfPictures;
@property(readonly) _Bool hasFilteredImages;
- (id)originalImageAtIndex:(unsigned long long)arg1;
- (id)filteredImageAtIndex:(unsigned long long)arg1;

@end

