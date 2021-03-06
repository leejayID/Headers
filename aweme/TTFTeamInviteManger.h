//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTFQuizShowLiveRoomViewModel, TTFTeamInviteJoinAlertView;

@interface TTFTeamInviteManger : NSObject
{
    TTFQuizShowLiveRoomViewModel *_model;
    TTFTeamInviteJoinAlertView *_alertView;
    NSString *_commandStr;
}

@property(copy, nonatomic) NSString *commandStr; // @synthesize commandStr=_commandStr;
@property(retain, nonatomic) TTFTeamInviteJoinAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak TTFQuizShowLiveRoomViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)_topViewController:(id)arg1;
- (id)topViewController;
- (void)checkShowInviteAlertIfNeeded;
- (void)joinTeamBattle:(id)arg1;
- (void)showJoinTeamBattleAlertInView:(id)arg1 title:(id)arg2 description:(id)arg3;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

