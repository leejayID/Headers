//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MKTRespManager : NSObject
{
    NSMutableDictionary *_msgDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *msgDict; // @synthesize msgDict=_msgDict;
- (void).cxx_destruct;
- (id)setTimeout:(id)arg1;
- (void)removeContext:(id)arg1;
- (id)getContext:(id)arg1;
- (void)saveContext:(id)arg1 key:(id)arg2;
- (void)timeout:(id)arg1;
- (void)messageResp:(id)arg1;
- (void)sendResult:(id)arg1 result:(id)arg2;
- (void)add:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
