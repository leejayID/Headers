//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface MQZFacePicModel : NSObject
{
    _Bool _hasScanFace;
    _Bool _hasScanFeture;
    _Bool _hasDetectUinFromFeature;
    int _detectPage;
    NSDictionary *_markUinInPhotos;
    NSDictionary *_recommendFaceUins;
    NSArray *_faceModelArr;
    UIImage *_image;
    NSArray *_faceList;
    NSString *_albumId;
    NSDictionary *_getFetureDict;
    NSDictionary *_featureDicts;
    double _originScale;
}

@property(nonatomic) int detectPage; // @synthesize detectPage=_detectPage;
@property(nonatomic) double originScale; // @synthesize originScale=_originScale;
@property(retain, nonatomic) NSDictionary *featureDicts; // @synthesize featureDicts=_featureDicts;
@property(nonatomic) _Bool hasDetectUinFromFeature; // @synthesize hasDetectUinFromFeature=_hasDetectUinFromFeature;
@property(retain, nonatomic) NSDictionary *getFetureDict; // @synthesize getFetureDict=_getFetureDict;
@property(nonatomic) _Bool hasScanFeture; // @synthesize hasScanFeture=_hasScanFeture;
@property(nonatomic) _Bool hasScanFace; // @synthesize hasScanFace=_hasScanFace;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSArray *faceList; // @synthesize faceList=_faceList;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSArray *faceModelArr; // @synthesize faceModelArr=_faceModelArr;
@property(retain, nonatomic) NSDictionary *recommendFaceUins; // @synthesize recommendFaceUins=_recommendFaceUins;
@property(retain, nonatomic) NSDictionary *markUinInPhotos; // @synthesize markUinInPhotos=_markUinInPhotos;
- (void).cxx_destruct;
- (void)updateFeedsStFaceItem:(id)arg1;
- (id)getTargetModelWithTextRect:(struct CGRect)arg1;
- (id)getStFaceItemWithSelectRectModel:(id)arg1;
- (id)getTableViewDataSourceWithRectModel:(id)arg1 localRecommendInfos:(id)arg2;
- (void)convertFromFaceList:(id)arg1 localRecommendInfos:(id)arg2;
- (id)getFaceItemWithRectModel:(id)arg1;
- (void)updateFileUploadMarkUinInphoto:(id)arg1 uin:(id)arg2 nick:(id)arg3;
- (id)getFaceRectModelWithMarkUinInPhoto:(id)arg1;
- (id)init;

@end
