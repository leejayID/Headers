//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface WVWeakObjectWrapper : NSProxy
{
    id _weakObject;
    Class _instanceClass;
}

+ (id)wrapWeakObject:(id)arg1;
@property(nonatomic) Class instanceClass; // @synthesize instanceClass=_instanceClass;
@property(readonly, nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithWeakObject:(id)arg1;

@end

