//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/ARSCNViewDelegate-Protocol.h>
#import <QQMainProject/ARSessionDelegate-Protocol.h>

@class ARBinhaiGameView, ARSCNView, NSString;
@protocol ARBinhaiViewDelegate;

@interface ARBinhaiView : UIView <ARSCNViewDelegate, ARSessionDelegate>
{
    ARBinhaiGameView *_gameView;
    NSString *_resourcePath;
    _Bool _iOSARKitEnabled;
    ARSCNView *_sceneView;
    id <ARBinhaiViewDelegate> _delegate;
    _Bool _isARkitRunFail;
    _Bool _hasReportARKitInit;
    unsigned long long _arKitRunStartTime;
}

- (void).cxx_destruct;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)pauseARKit;
- (void)runARKit;
- (void)createSceneView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)stop;
- (void)stopUpdating;
- (void)startUpdating;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
@property(readonly, nonatomic) _Bool isMotioning;
@property(readonly, nonatomic) _Bool isUpdating;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 resourcePath:(id)arg2 rainTime:(int)arg3 packCountLimt:(int)arg4 actId:(id)arg5 delayOpenTime:(int)arg6 isFudaiBoom:(_Bool)arg7 boomTime:(unsigned long long)arg8 boomRemainTime:(unsigned int)arg9 iOSUseARKit:(_Bool)arg10 delegate:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

