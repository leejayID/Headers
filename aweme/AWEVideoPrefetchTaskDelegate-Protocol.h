//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoPrefetchTask, NSError;

@protocol AWEVideoPrefetchTaskDelegate <NSObject>
- (void)requestTask:(AWEVideoPrefetchTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestTaskDidFinishLoading:(AWEVideoPrefetchTask *)arg1;
- (void)requestTaskDidReceiveData:(AWEVideoPrefetchTask *)arg1;
- (void)requestTaskDidReceiveResponse:(AWEVideoPrefetchTask *)arg1;
@end
