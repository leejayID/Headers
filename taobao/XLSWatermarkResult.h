//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XLSWatermarkResult : NSObject
{
    long long _resultCode;
    NSString *_message;
    NSString *_type;
    NSString *_model;
    NSString *_idss;
    NSString *_timeStamp;
    NSString *_allinfo;
}

@property(copy, nonatomic) NSString *allinfo; // @synthesize allinfo=_allinfo;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *idss; // @synthesize idss=_idss;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end
