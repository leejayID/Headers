//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBKHomeViewController, MBKHomeViewControllerTab, RACTwoTuple;

@protocol MBKHomeChildViewControllerProtocol <NSObject>

@optional
- (RACTwoTuple *)homeViewController:(MBKHomeViewController *)arg1 canSwitchTabFromTab:(MBKHomeViewControllerTab *)arg2 toTab:(MBKHomeViewControllerTab *)arg3;
- (void)homeViewController:(MBKHomeViewController *)arg1 didSwitchToSelfWithTabType:(unsigned long long)arg2;
@end

