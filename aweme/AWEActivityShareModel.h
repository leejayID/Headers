//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber;

@interface AWEActivityShareModel : AWEBaseApiModel
{
    NSNumber *_useMusicCount;
    NSNumber *_diggCount;
    AWEURLModel *_musicCoverURL;
    AWEURLModel *_musicQRCodeURL;
}

+ (id)musicQRCodeURLJSONTransformer;
+ (id)musicCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEURLModel *musicQRCodeURL; // @synthesize musicQRCodeURL=_musicQRCodeURL;
@property(retain, nonatomic) AWEURLModel *musicCoverURL; // @synthesize musicCoverURL=_musicCoverURL;
@property(retain, nonatomic) NSNumber *diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) NSNumber *useMusicCount; // @synthesize useMusicCount=_useMusicCount;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;
- (id)init;

@end
