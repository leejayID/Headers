//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEMusicCollectionModel : AWEBaseApiModel
{
    NSString *_collectionID;
    NSString *_collectionName;
    AWEURLModel *_coverURL;
}

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(readonly, copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(readonly, copy, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (void).cxx_destruct;

@end

