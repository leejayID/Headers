//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AppMonitorTable, NSString;

@interface Interface_TBMPBMonitorDependence : NSObject
{
    NSString *_moduleName;
    AppMonitorTable *_firstVideoFrameMonitorTable;
    AppMonitorTable *_firstAudioFrameMonitorTable;
    AppMonitorTable *_bufferLoadMonitorTable;
    AppMonitorTable *_ptsdtsMonitorTable;
    AppMonitorTable *_networkShakeTable;
    AppMonitorTable *_playerErrorTable;
    AppMonitorTable *_playExperienceTable;
    AppMonitorTable *_stalledTable;
    AppMonitorTable *_playingTable;
}

+ (void)commitVideoPlayerMonitorData:(id)arg1;
+ (void)commitUTWithPerformanceData:(id)arg1;
+ (void)commitUTWithAlarmData:(id)arg1;
+ (void)commitAlarmData:(id)arg1;
+ (void)commitPerformanceData:(id)arg1;
+ (id)baseDimensions;
+ (id)Selector_commitAlarmDataWithParameters:(id)arg1;
+ (id)Selector_commitPerformanceDataWithParameters:(id)arg1;
@property(retain, nonatomic) AppMonitorTable *playingTable; // @synthesize playingTable=_playingTable;
@property(retain, nonatomic) AppMonitorTable *stalledTable; // @synthesize stalledTable=_stalledTable;
@property(retain, nonatomic) AppMonitorTable *playExperienceTable; // @synthesize playExperienceTable=_playExperienceTable;
@property(retain, nonatomic) AppMonitorTable *playerErrorTable; // @synthesize playerErrorTable=_playerErrorTable;
@property(retain, nonatomic) AppMonitorTable *networkShakeTable; // @synthesize networkShakeTable=_networkShakeTable;
@property(retain, nonatomic) AppMonitorTable *ptsdtsMonitorTable; // @synthesize ptsdtsMonitorTable=_ptsdtsMonitorTable;
@property(retain, nonatomic) AppMonitorTable *bufferLoadMonitorTable; // @synthesize bufferLoadMonitorTable=_bufferLoadMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstAudioFrameMonitorTable; // @synthesize firstAudioFrameMonitorTable=_firstAudioFrameMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstVideoFrameMonitorTable; // @synthesize firstVideoFrameMonitorTable=_firstVideoFrameMonitorTable;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (id)initWithModuleName:(id)arg1;

@end
