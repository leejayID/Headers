//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMScene-Protocol.h"

@class CMMotionManager, FMAudioRecognizer, FMBeatItem, FMFilterManagerResource, FMHandGestureRecognizerInfo, FMPoseFeature, FMResource, GPUImageOutput, NSArray, NSString;
@protocol FMSceneMaterialProvider><FMSceneDelegate, GPUImageInput;

@interface FMSceneLayer : NSObject <FMScene>
{
    void *cacheManager;
    NSArray *_filteredFaces;
    _Bool _active;
    _Bool _expressionEnabled;
    _Bool _filterEnabled;
    _Bool _recording;
    _Bool _middleScale;
    _Bool _shouldRender;
    _Bool _audioRecognizationEnable;
    int _keepFramesCount;
    NSArray *_faces;
    FMResource *_resource;
    id <FMSceneMaterialProvider><FMSceneDelegate> _materialProvider;
    GPUImageOutput<GPUImageInput> *_sceneFilter;
    NSString *_layerName;
    double _audioRealTimeSchedule;
    double _filterStartTime;
    double _currentTime;
    double _activeTime;
    FMBeatItem *_beatItem;
    FMAudioRecognizer *_audioDetector;
    FMHandGestureRecognizerInfo *_handGestureInfo;
    FMPoseFeature *_poseFeature;
    CMMotionManager *_motionManager;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) FMPoseFeature *poseFeature; // @synthesize poseFeature=_poseFeature;
@property(retain, nonatomic) FMHandGestureRecognizerInfo *handGestureInfo; // @synthesize handGestureInfo=_handGestureInfo;
@property(retain, nonatomic) FMAudioRecognizer *audioDetector; // @synthesize audioDetector=_audioDetector;
@property(nonatomic) _Bool audioRecognizationEnable; // @synthesize audioRecognizationEnable=_audioRecognizationEnable;
@property(retain, nonatomic) FMBeatItem *beatItem; // @synthesize beatItem=_beatItem;
@property(nonatomic) double activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool shouldRender; // @synthesize shouldRender=_shouldRender;
@property(nonatomic) double filterStartTime; // @synthesize filterStartTime=_filterStartTime;
@property(nonatomic) int keepFramesCount; // @synthesize keepFramesCount=_keepFramesCount;
@property(nonatomic) double audioRealTimeSchedule; // @synthesize audioRealTimeSchedule=_audioRealTimeSchedule;
@property(retain, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(nonatomic) _Bool middleScale; // @synthesize middleScale=_middleScale;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) _Bool filterEnabled; // @synthesize filterEnabled=_filterEnabled;
@property(nonatomic) _Bool expressionEnabled; // @synthesize expressionEnabled=_expressionEnabled;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) GPUImageOutput<GPUImageInput> *sceneFilter; // @synthesize sceneFilter=_sceneFilter;
@property(retain, nonatomic) id <FMSceneMaterialProvider><FMSceneDelegate> materialProvider; // @synthesize materialProvider=_materialProvider;
@property(retain, nonatomic) FMResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSArray *faces; // @synthesize faces=_faces;
- (void).cxx_destruct;
- (void)clear;
- (void)didReceiveDidBecomeActive:(id)arg1;
- (void)didReceiveWillResignActive:(id)arg1;
- (void)dealloc;
- (void)setIsHandGestureSuccess:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setCacheMananger:(void *)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 touchPosition:(struct CGPoint)arg3;
- (_Bool)faceRequired;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
@property(readonly, nonatomic) FMFilterManagerResource *managerResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

