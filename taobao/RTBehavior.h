//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;
@protocol RTEvent;

@interface RTBehavior : TBJSONModel
{
    unsigned long long _behaviorMatchTpe;
    NSArray<RTEvent> *_events;
}

@property(retain, nonatomic) NSArray<RTEvent> *events; // @synthesize events=_events;
@property(nonatomic) unsigned long long behaviorMatchTpe; // @synthesize behaviorMatchTpe=_behaviorMatchTpe;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMatchType:(unsigned long long)arg1 events:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

