//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQFilterConfigCategory : NSObject
{
    long long _categoryId;
    NSString *_categoryName;
    NSArray *_filterArr;
}

@property(retain, nonatomic) NSArray *filterArr; // @synthesize filterArr=_filterArr;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInfo:(id)arg1;

@end

