//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface QZDownloadRouteManager : NSObject
{
    NSArray *_routeInfoArray;
    NSMutableArray *_failedRouteInfoMutlArray;
    NSMutableArray *_failedErrCodeMutlArray;
}

- (void).cxx_destruct;
- (id)findRouteinfo:(id)arg1;
- (void)recordFailedRequest:(id)arg1 error:(id)arg2;
- (void)updateRoute:(_Bool)arg1 url:(id)arg2 speed:(double)arg3 error:(id)arg4;
- (long long)getIpType:(id)arg1;
- (id)getIpListArray:(id)arg1 apn:(long long)arg2;

@end
