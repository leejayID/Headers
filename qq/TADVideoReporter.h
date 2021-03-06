//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TADMediaItem, TADQLMediaPing;

@interface TADVideoReporter : NSObject
{
    NSString *_requestID;
    NSMutableDictionary *_videoInfo;
    TADMediaItem *_currentMediaItem;
    NSArray *_allItems;
    TADQLMediaPing *_pingService;
    unsigned long long _currentIndex;
    long long _playStartIndex;
    long long _playEndIndex;
    _Bool _isPlay;
    _Bool _isReported;
    double _adTotalDurationComplete;
    double _adMediaItemDurationFinished;
    NSMutableArray *_urlArray;
}

@property(readonly, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray=_urlArray;
- (void).cxx_destruct;
- (void)adClicked;
- (_Bool)findNextValidItem;
- (void)adItemEndWithIndex:(unsigned long long)arg1;
- (void)adItemStartWithIndex:(unsigned long long)arg1;
- (void)willRemoveFromClient;
- (void)adPlayFinished;
- (void)adPlaySkipped:(unsigned long long)arg1;
- (void)adPlayAtTime:(double)arg1;
- (void)adRequestFinishWithJSON:(id)arg1;
- (void)fillVideoInfo:(id)arg1 CookieStr:(id)arg2 url:(id)arg3;
- (void)reset;
- (void)dealloc;
- (id)initWithRequestID:(id)arg1;

@end

