//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DOUAudioFileProvider.h"

@class DOUMPMediaLibraryAssetLoader;

@interface _DOUAudioMediaLibraryFileProvider : DOUAudioFileProvider
{
    DOUMPMediaLibraryAssetLoader *_assetLoader;
    _Bool _loaderCompleted;
}

- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isReady;
- (unsigned long long)downloadSpeed;
- (id)sha256;
- (void)_createAssetLoader;
- (void)_assetLoaderDidComplete;
- (void)_invokeEventBlock;
- (void)dealloc;
- (id)_initWithAudioFile:(id)arg1;

@end

