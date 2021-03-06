//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class KSMetalRender;
@protocol FMHandGestureDelegate;

@interface FMHandGestureFilter : GPUImageFilter
{
    unsigned int _maskTexture;
    unsigned long long _maskTexWidth;
    unsigned long long _maskTexHeight;
    unsigned long long _maskTexChannel;
    struct ProgramObject *_programObject;
    struct CGRect rtMaskRange;
    unsigned int _depthTexture;
    CDStruct_1b6d18a9 _frameTime;
    int _maskID;
    _Bool _metalRenderResult;
    int _rotation;
    id <FMHandGestureDelegate> _handGestureDelegate;
    KSMetalRender *_ksMetalRender;
}

@property(retain, nonatomic) KSMetalRender *ksMetalRender; // @synthesize ksMetalRender=_ksMetalRender;
@property(nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool metalRenderResult; // @synthesize metalRenderResult=_metalRenderResult;
@property(nonatomic) __weak id <FMHandGestureDelegate> handGestureDelegate; // @synthesize handGestureDelegate=_handGestureDelegate;
- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)generateMask;
- (void)selectMaskRange:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithMetal:(id)arg1 model:(id)arg2;

@end

