//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface AliDetailSkuPropsAddedInfoModel : TBJSONModel
{
    NSString *_macShowNum;
    NSString *_macShowText;
    NSArray *_colorSeries;
}

@property(retain, nonatomic) NSArray *colorSeries; // @synthesize colorSeries=_colorSeries;
@property(copy, nonatomic) NSString *macShowText; // @synthesize macShowText=_macShowText;
@property(copy, nonatomic) NSString *macShowNum; // @synthesize macShowNum=_macShowNum;
- (void).cxx_destruct;

@end
