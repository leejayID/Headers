//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKTransitGuideCacheModel;

@interface MBKTransitGuideManager : NSObject
{
    MBKTransitGuideCacheModel *_guideCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MBKTransitGuideCacheModel *guideCache; // @synthesize guideCache=_guideCache;
- (void).cxx_destruct;
- (id)init;

@end

