//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WXRDMARArrowViewProtocol-Protocol.h"
#import "WXRDMCameraComponent-Protocol.h"

@class EZEntity, EZMatrix4, EZVector3, NSString, TBARLBSViewController, UILongPressGestureRecognizer, UITapGestureRecognizer, WXRDM3DManager, WXRDMARArrowText, WXRDMARArrowView;

@interface WXRDMARComponent : WXComponent <UIGestureRecognizerDelegate, WXRDMARArrowViewProtocol, WXRDMCameraComponent>
{
    _Bool _supportRealityDirection;
    _Bool _motionEnabled;
    _Bool _realityEnabled;
    _Bool _eventError;
    _Bool _eventInit;
    _Bool _eventHeading;
    _Bool _eventRotate;
    _Bool _eventCurHeading;
    _Bool _eventCameraReady;
    float _beginRealityDirection;
    float _curHeading;
    TBARLBSViewController *_lbsVC;
    WXRDM3DManager *_rdm3DManager;
    NSString *_arrowSrc;
    EZMatrix4 *_matrix4;
    EZMatrix4 *_rotateMatrix4;
    EZMatrix4 *_viewMatrix4;
    EZVector3 *_modelInWindowVec;
    WXRDMARArrowView *_arrowView;
    WXRDMARArrowText *_arrowText;
    EZEntity *_modelEntity;
    EZEntity *_catchModelEntity;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_pressGesture;
    unsigned long long _renderFrame;
}

+ (id)wx_export_method_68;
+ (id)wx_export_method_67;
@property(nonatomic) unsigned long long renderFrame; // @synthesize renderFrame=_renderFrame;
@property(retain, nonatomic) UILongPressGestureRecognizer *pressGesture; // @synthesize pressGesture=_pressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak EZEntity *catchModelEntity; // @synthesize catchModelEntity=_catchModelEntity;
@property(nonatomic) __weak EZEntity *modelEntity; // @synthesize modelEntity=_modelEntity;
@property(retain, nonatomic) WXRDMARArrowText *arrowText; // @synthesize arrowText=_arrowText;
@property(retain, nonatomic) WXRDMARArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) _Bool eventCameraReady; // @synthesize eventCameraReady=_eventCameraReady;
@property(nonatomic) _Bool eventCurHeading; // @synthesize eventCurHeading=_eventCurHeading;
@property(nonatomic) _Bool eventRotate; // @synthesize eventRotate=_eventRotate;
@property(nonatomic) _Bool eventHeading; // @synthesize eventHeading=_eventHeading;
@property(nonatomic) _Bool eventInit; // @synthesize eventInit=_eventInit;
@property(nonatomic) _Bool eventError; // @synthesize eventError=_eventError;
@property(retain, nonatomic) EZVector3 *modelInWindowVec; // @synthesize modelInWindowVec=_modelInWindowVec;
@property(retain, nonatomic) EZMatrix4 *viewMatrix4; // @synthesize viewMatrix4=_viewMatrix4;
@property(retain, nonatomic) EZMatrix4 *rotateMatrix4; // @synthesize rotateMatrix4=_rotateMatrix4;
@property(retain, nonatomic) EZMatrix4 *matrix4; // @synthesize matrix4=_matrix4;
@property(copy, nonatomic) NSString *arrowSrc; // @synthesize arrowSrc=_arrowSrc;
@property(nonatomic) float curHeading; // @synthesize curHeading=_curHeading;
@property(nonatomic) _Bool realityEnabled; // @synthesize realityEnabled=_realityEnabled;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(nonatomic) float beginRealityDirection; // @synthesize beginRealityDirection=_beginRealityDirection;
@property(nonatomic) _Bool supportRealityDirection; // @synthesize supportRealityDirection=_supportRealityDirection;
@property(retain, nonatomic) WXRDM3DManager *rdm3DManager; // @synthesize rdm3DManager=_rdm3DManager;
@property(retain, nonatomic) TBARLBSViewController *lbsVC; // @synthesize lbsVC=_lbsVC;
- (void).cxx_destruct;
- (void)onLongPress:(id)arg1;
- (void)onTapped:(id)arg1;
- (void)bindGestureRecognizer:(id)arg1;
- (void)unbindGestureRecognizer:(id)arg1;
- (id)cameraOfComponent;
- (void)getEyeDirPostionAtEquator:(float)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getCurHeading:(CDUnknownBlockType)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)updateAttributes:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)didUpdateDirection:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
