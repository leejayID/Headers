//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ACDSSubscribeManager : NSObject
{
}

+ (void)checkSubscribeExpired:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)sendToServer:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)subscribeToServer:(id)arg1 byUserId:(id)arg2 withStatus:(long long)arg3 withCost:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (void)unsubscribe:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)subscribe:(id)arg1 byUserId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

@end
