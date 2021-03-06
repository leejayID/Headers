//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ScheduleActionDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;

@interface ScheduleDataCenter : NSObject <ScheduleActionDelegate>
{
    unsigned long long _nDataUpdteTime;
    unsigned long long _nOutDataUpdateTime;
    _Bool _nNeedUpdateUI;
    _Bool _nNeedUpdateOutUI;
    unsigned long long _nOptId;
    unsigned long long _nGetIndex;
    unsigned long long _nGetOutDataIndex;
    _Bool _bIsGetTop;
    NSMapTable *_delegateMgr;
    NSArray *_arrayScheduleStateInfoList;
    NSArray *_arrayScheduleContentInfoList;
}

+ (id)getInstance;
@property(retain, nonatomic) NSArray *arrayScheduleContentInfoList; // @synthesize arrayScheduleContentInfoList=_arrayScheduleContentInfoList;
@property(retain, nonatomic) NSArray *arrayScheduleStateInfoList; // @synthesize arrayScheduleStateInfoList=_arrayScheduleStateInfoList;
- (_Bool)getAlarmByScheduleID:(id)arg1;
- (void)updateItem:(id)arg1 alarm:(_Bool)arg2;
- (id)getCalenderIdByScheduleId:(id)arg1;
- (_Bool)deleteScheduleCalender:(id)arg1;
- (void)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2;
- (void)OnActionResult:(id)arg1;
- (_Bool)SetScheduleAlarmById:(id)arg1 isAlarm:(_Bool)arg2 delegate:(id)arg3 sep:(int)arg4;
- (_Bool)GetScheuleDataForID:(id)arg1 delegate:(id)arg2;
- (_Bool)ModifiedScheule:(id)arg1 delegate:(id)arg2;
- (_Bool)CreateScheule:(id)arg1 delegate:(id)arg2;
- (_Bool)RecallScheuleForID:(id)arg1 delegate:(id)arg2 sep:(int)arg3;
- (_Bool)DeleteScheuleForID:(id)arg1 delegate:(id)arg2 sep:(int)arg3;
- (void)initTimeAndIdentifier;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

