//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APSharedPreferencesMemoryPolicy, RavenPreferences;

@protocol APSharedPreferencesRunMode <NSObject>
@property(retain, nonatomic) RavenPreferences *raven;
@property _Bool orphanPreferences;
@property(readonly) APSharedPreferencesMemoryPolicy *memoryPolicy;
@property _Bool shouldReportConnnectionEvent;
@property double lastUsedTimestamp;
@property int daoProxyReferenceCount;
@property unsigned int preferencesType;
@property _Bool asynchronousMode;
- (_Bool)databaseLocked;
- (void)unregisterNotifications;
- (void)vacuumDatabase;
@end

