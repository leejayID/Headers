//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PMDispatchManager : NSObject
{
    long long _bizCode;
    NSString *_topic;
    CDUnknownBlockType _bizCallback;
}

+ (void)processInfoMsg:(id)arg1;
+ (void)processP2PMsg:(id)arg1;
+ (id)toPMMessage:(id)arg1;
+ (void)processCommandMsg:(id)arg1;
+ (void)msgArrive:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType bizCallback; // @synthesize bizCallback=_bizCallback;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;

@end

