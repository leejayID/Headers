//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FMVideoBlendResource : NSObject
{
    _Bool _restoreAlpha;
    _Bool _keepRender;
    int _blendMode;
    NSString *_fileName;
    NSArray *_position;
    NSArray *_size;
}

+ (id)objectWithKeyValues:(id)arg1;
@property(retain, nonatomic) NSArray *size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *position; // @synthesize position=_position;
@property(nonatomic) _Bool keepRender; // @synthesize keepRender=_keepRender;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) _Bool restoreAlpha; // @synthesize restoreAlpha=_restoreAlpha;
@property(nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (int)blendType:(id)arg1;

@end

