//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetReader, AVAssetReaderTrackOutput, EAGLContext, NSURL;

@interface VSVideoPasterDecoder : NSObject
{
    struct opaqueCMSampleBuffer *firstTrackSample;
    struct opaqueCMSampleBuffer *lastTrackSample;
    struct __CVOpenGLESTextureCache *cacheRef;
    struct __CVBuffer *luminanceTextureRef;
    struct __CVBuffer *chrominanceTextureRef;
    struct __CVBuffer *aTextureRef;
    _Bool _needRebuildDecoder;
    NSURL *_videoURL;
    EAGLContext *_context;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_yuvReaderOutput;
    AVAssetReaderTrackOutput *_aReaderOutput;
}

@property(nonatomic) _Bool needRebuildDecoder; // @synthesize needRebuildDecoder=_needRebuildDecoder;
@property(retain, nonatomic) AVAssetReaderTrackOutput *aReaderOutput; // @synthesize aReaderOutput=_aReaderOutput;
@property(retain, nonatomic) AVAssetReaderTrackOutput *yuvReaderOutput; // @synthesize yuvReaderOutput=_yuvReaderOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (struct __CVOpenGLESTextureCache *)cacheRef;
- (void)releaseCurrentFrame;
- (id)createFrameWithIndex:(long long)arg1;
- (_Bool)creatVideoReader;
- (void)decodeVideoURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
