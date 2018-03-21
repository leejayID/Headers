//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDate;

@interface KSBarrage : NSObject
{
    double _space;
    NSAttributedString *_content;
    double _speed;
    NSDate *_launchTimestamp;
    CDUnknownBlockType _onTapBarrage;
    double _longPressMinDuration;
    CDUnknownBlockType _onLongPressBarrage;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) CDUnknownBlockType onLongPressBarrage; // @synthesize onLongPressBarrage=_onLongPressBarrage;
@property(nonatomic) double longPressMinDuration; // @synthesize longPressMinDuration=_longPressMinDuration;
@property(copy, nonatomic) CDUnknownBlockType onTapBarrage; // @synthesize onTapBarrage=_onTapBarrage;
@property(retain, nonatomic) NSDate *launchTimestamp; // @synthesize launchTimestamp=_launchTimestamp;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(nonatomic) double space; // @synthesize space=_space;
- (void).cxx_destruct;
- (id)init;

@end
