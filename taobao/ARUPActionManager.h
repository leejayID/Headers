//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface ARUPActionManager : NSObject
{
    NSMutableDictionary *_actions;
    NSLock *_lock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)actionOverWork:(id)arg1;
- (void)uploadWithTask:(id)arg1;
- (id)init;

@end

