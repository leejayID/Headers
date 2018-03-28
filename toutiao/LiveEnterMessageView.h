//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveRoomBaseView.h"

@class NSMutableArray;

@interface LiveEnterMessageView : LiveRoomBaseView
{
    NSMutableArray *_goldenUserList;
    NSMutableArray *_normalUserList;
    unsigned long long _goldenUserAnimationState;
}

- (void).cxx_destruct;
- (void)startNormalEnterAnimationWithMessage:(id)arg1;
- (void)startGoldenEnterAnimationWithMessage:(id)arg1;
- (void)animateWithEnterMessage;
- (void)receiveMessage:(id)arg1;
- (void)displayEnterMessageAutomatically;
- (id)initWithFrame:(struct CGRect)arg1 liveRoomModel:(id)arg2;

@end
