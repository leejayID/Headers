//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBMagicCubeEffectMeta : TBJSONModel
{
    NSString *_effectId;
    NSString *_type;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
- (void).cxx_destruct;

@end
