//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGPUImageFilterWrapper.h"

@interface KSImageMakeupFilterAdaptation : CGPUImageFilterWrapper
{
    struct MakeupFilterGroup group;
    _Bool _showMesh;
}

@property(nonatomic) _Bool showMesh; // @synthesize showMesh=_showMesh;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)updateFeatures:(const vector_6a9a9531 *)arg1;
- (id)initWithFilePath:(id)arg1 configFileName:(id)arg2;
- (id)init;

@end

