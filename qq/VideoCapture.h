//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString;
@protocol VideoCaptureDelegate;

@interface VideoCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput *_videoOutput;
    long long _frameRate;
    struct dispatch_queue_s *_cameraProcessingQueue;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    id <VideoCaptureDelegate> videoDelegate;
}

@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)setFps:(int)arg1;
- (void)setPreset:(id)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (void)swapFrontAndBackCameras;
- (void)setCamera:(_Bool)arg1;
- (void)dealloc;
- (void)releaseVideo;
- (void)stopCapture;
- (id)cameraWithPosition:(long long)arg1;
- (_Bool)isFrontCamera;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)startCapture;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)initPreset:(id)arg1 Format:(int)arg2 Fps:(int)arg3 Discard:(_Bool)arg4 position:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

