//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WBNLTransformSettingAvatorCollectionViewCellModel : NSObject
{
    _Bool _isSelected;
    long long _cellType;
    NSString *_avatorUrl;
    UIImage *_avatorImage;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImage *avatorImage; // @synthesize avatorImage=_avatorImage;
@property(copy, nonatomic) NSString *avatorUrl; // @synthesize avatorUrl=_avatorUrl;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;

@end

