//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QQAllTroopMemManager : NSObject
{
    NSMutableArray *_policyKeys;
    NSMutableArray *_troopListShouldReq;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)ActionGetTroopMember:(id)arg1 result:(_Bool)arg2;
- (void)p_postResultGroupCodeNotify:(id)arg1 isReqedSvr:(_Bool)arg2;
- (void)p_reqTroopMemByIssuedConfig:(id)arg1 allTroopList:(id)arg2 needUpTroopList:(id)arg3;
- (void)ftsGetTroopMemByConfig:(id)arg1;

@end
