//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "VKSdkDelegate-Protocol.h"

@class NSString;
@protocol VKSdkDelegate;

@interface VKWeakDelegate : NSProxy <VKSdkDelegate>
{
    Class objectClass;
    id <VKSdkDelegate> _weakTarget;
}

+ (id)with:(id)arg1;
@property(nonatomic) __weak id <VKSdkDelegate> weakTarget; // @synthesize weakTarget=_weakTarget;
- (void).cxx_destruct;
- (_Bool)isEqualTarget:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

