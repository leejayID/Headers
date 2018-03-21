//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PageLoadCalculate : NSObject
{
    _Bool _isCurrentPageLoaded;
    char *_screenWidthBitMap;
    char *_screenHeightBitMap;
    unsigned long long _screenWidth;
    unsigned long long _screenHeight;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isCurrentPageLoaded; // @synthesize isCurrentPageLoaded=_isCurrentPageLoaded;
@property(nonatomic) unsigned long long screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) unsigned long long screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) char *screenHeightBitMap; // @synthesize screenHeightBitMap=_screenHeightBitMap;
@property(nonatomic) char *screenWidthBitMap; // @synthesize screenWidthBitMap=_screenWidthBitMap;
- (void)runMainThreadHeartbeatTest:(CDUnknownBlockType)arg1;
- (_Bool)fillAndCheckScreenBitMap:(id)arg1;
- (void)recursiveCheckUIView:(id)arg1;
- (void)resetPageLoadCalculate;
- (_Bool)isPageRenderFinished;
- (void)checkPageRenderStatus:(id)arg1;

@end
