//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GSPointProto, GMSx_PBMutableArray, NSString;

@interface GMSx_GMINDIndoorBuildingProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GSPointProto *center; // @dynamic center;
@property(nonatomic) int defaultLevelIndex; // @dynamic defaultLevelIndex;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasDefaultLevelIndex; // @dynamic hasDefaultLevelIndex;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLevelArray; // @dynamic hasLevelArray;
@property(nonatomic) _Bool hasMinRenderingZoom; // @dynamic hasMinRenderingZoom;
@property(nonatomic) _Bool hasUnderground; // @dynamic hasUnderground;
@property(retain, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) GMSx_PBMutableArray *levelArray; // @dynamic levelArray;
@property(nonatomic) int minRenderingZoom; // @dynamic minRenderingZoom;
@property(nonatomic) _Bool underground; // @dynamic underground;

@end
