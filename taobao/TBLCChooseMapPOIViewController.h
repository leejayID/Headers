//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "MKMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MKMapView, NSString, TBLSPOIEntity, UIAlertView, UIButton, UIImageView, UIView;

@interface TBLCChooseMapPOIViewController : TBViewController <MKMapViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _locationSuccess;
    _Bool _userPanMap;
    CDUnknownBlockType _poiSelectedBlock;
    NSString *_keywords;
    NSString *_naviTitle;
    TBLSPOIEntity *_inputPoiEntity;
    TBLSPOIEntity *_outputPoiEntity;
    UIView *_indicatorView;
    MKMapView *_mapView;
    UIImageView *_annotationShadowView;
    UIImageView *_annotationView;
    UIButton *_confirmButton;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) UIImageView *annotationShadowView; // @synthesize annotationShadowView=_annotationShadowView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) TBLSPOIEntity *outputPoiEntity; // @synthesize outputPoiEntity=_outputPoiEntity;
@property(retain, nonatomic) TBLSPOIEntity *inputPoiEntity; // @synthesize inputPoiEntity=_inputPoiEntity;
@property(retain, nonatomic) NSString *naviTitle; // @synthesize naviTitle=_naviTitle;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) CDUnknownBlockType poiSelectedBlock; // @synthesize poiSelectedBlock=_poiSelectedBlock;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)confirmAction:(id)arg1;
- (void)setupMapView;
- (void)setupViews;
- (void)panAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
