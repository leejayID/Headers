//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMOfflineItem;

@interface MMOfflineDownloadTuple : NSObject
{
    id _key;
    MMOfflineItem *_cityItem;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) MMOfflineItem *cityItem; // @synthesize cityItem=_cityItem;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 cityItem:(id)arg2 completeion:(CDUnknownBlockType)arg3;

@end

