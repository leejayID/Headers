//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBFilterBaseModel : WBModelObject
{
    _Bool showCornerIcon;
    NSString *filterIconPath;
    NSString *filterID;
    NSString *filterNameChinese;
    NSString *filterNameEnglish;
    NSString *filterNameTaiwan;
    NSString *operationTopic;
    NSString *showIconURL;
    NSString *startDate;
    NSString *endDate;
    NSString *cornerTagURL;
    NSString *cornerTagStartDate;
    NSString *cornerTagEndDate;
    NSString *_versionFilter;
    NSString *_cornerIconPath;
    NSString *_squareIconURL;
}

@property(retain, nonatomic) NSString *squareIconURL; // @synthesize squareIconURL=_squareIconURL;
@property(retain, nonatomic) NSString *cornerIconPath; // @synthesize cornerIconPath=_cornerIconPath;
@property(retain, nonatomic) NSString *versionFilter; // @synthesize versionFilter=_versionFilter;
@property(retain, nonatomic) NSString *cornerTagEndDate; // @synthesize cornerTagEndDate;
@property(retain, nonatomic) NSString *cornerTagStartDate; // @synthesize cornerTagStartDate;
@property(retain, nonatomic) NSString *cornerTagURL; // @synthesize cornerTagURL;
@property(retain, nonatomic) NSString *endDate; // @synthesize endDate;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate;
@property(retain, nonatomic) NSString *showIconURL; // @synthesize showIconURL;
@property(nonatomic) _Bool showCornerIcon; // @synthesize showCornerIcon;
@property(retain, nonatomic) NSString *operationTopic; // @synthesize operationTopic;
@property(retain, nonatomic) NSString *filterNameTaiwan; // @synthesize filterNameTaiwan;
@property(retain, nonatomic) NSString *filterNameEnglish; // @synthesize filterNameEnglish;
@property(retain, nonatomic) NSString *filterNameChinese; // @synthesize filterNameChinese;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID;
@property(retain, nonatomic) NSString *filterIconPath; // @synthesize filterIconPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadJsonData:(id)arg1;
- (void)loadMarketData:(id)arg1;
- (void)loadData:(id)arg1;
- (id)initWithDict:(id)arg1;
- (_Bool)isWBCameraItem;
- (_Bool)isOriginalPicItem;
- (_Bool)isMarketItem;

@end

