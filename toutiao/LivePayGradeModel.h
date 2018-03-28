//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveAvatarURLModel, NSNumber, NSString;

@interface LivePayGradeModel : MTLModel <MTLJSONSerializing>
{
    LiveAvatarURLModel *_diamondIcon;
    LiveAvatarURLModel *_icon;
    LiveAvatarURLModel *_nextIcon;
    LiveAvatarURLModel *_imIcon;
    LiveAvatarURLModel *_liveIcon;
    NSString *_name;
    NSString *_nextName;
    NSNumber *_totalDiamondCount;
    NSNumber *_currentDiamondCount;
    NSNumber *_nextDiamondCount;
    NSNumber *_gradeLevel;
}

+ (id)nextIconJSONTransformer;
+ (id)imIconJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)diamondIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSNumber *gradeLevel; // @synthesize gradeLevel=_gradeLevel;
@property(readonly, nonatomic) NSNumber *nextDiamondCount; // @synthesize nextDiamondCount=_nextDiamondCount;
@property(readonly, nonatomic) NSNumber *currentDiamondCount; // @synthesize currentDiamondCount=_currentDiamondCount;
@property(readonly, nonatomic) NSNumber *totalDiamondCount; // @synthesize totalDiamondCount=_totalDiamondCount;
@property(readonly, copy, nonatomic) NSString *nextName; // @synthesize nextName=_nextName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) LiveAvatarURLModel *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(readonly, nonatomic) LiveAvatarURLModel *imIcon; // @synthesize imIcon=_imIcon;
@property(readonly, nonatomic) LiveAvatarURLModel *nextIcon; // @synthesize nextIcon=_nextIcon;
@property(readonly, nonatomic) LiveAvatarURLModel *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) LiveAvatarURLModel *diamondIcon; // @synthesize diamondIcon=_diamondIcon;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
