//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ConfigCrashInsightProtocolForPoplayer-Protocol.h"

@class NSString;

@interface TBPLConfigInsight : NSObject <ConfigCrashInsightProtocolForPoplayer>
{
}

+ (id)getOrangeVersion:(id)arg1;
+ (id)getConfigVersion:(id)arg1 sourceType:(id)arg2;
+ (id)getConfigNameByType:(unsigned long long)arg1;
+ (void)configEffect:(id)arg1 configType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

