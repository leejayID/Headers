//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSMutableArray;

@interface ARERPCEngine : NSObject
{
    _Bool _isLoading;
    double _lastRotationDegree;
    CLLocation *_lastRequestedLocation;
    NSMutableArray *_rpcAsyncCallers;
}

@property(retain, nonatomic) NSMutableArray *rpcAsyncCallers; // @synthesize rpcAsyncCallers=_rpcAsyncCallers;
@property(retain, nonatomic) CLLocation *lastRequestedLocation; // @synthesize lastRequestedLocation=_lastRequestedLocation;
@property(nonatomic) double lastRotationDegree; // @synthesize lastRotationDegree=_lastRotationDegree;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (_Bool)shouldReloadEnvelopesForLocation:(id)arg1;
- (void)queryOpenResultCouponWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryEnvelopeDetailWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryHomeEnvelopesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)executeRPCMethod:(CDUnknownBlockType)arg1 withRequest:(id)arg2;
- (id)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3;
- (void)cancelAll;
- (void)dealloc;

@end
