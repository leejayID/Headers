//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GMSDASHConnection, OS_dispatch_group, OS_dispatch_queue;

@interface GMSBillingPointRecorder : NSObject
{
    struct Point2D _lastBilledPoint;
    int _lastBilledZoomLevel;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    reffed_ptr_329922e5 _camera;
    id <GMSDASHConnection> _connection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendBillingPoint:(struct Point2D)arg1 centerPoint:(struct Point2D)arg2 zoomLevel:(int)arg3 viewBound:(struct WrappedRectangle2D)arg4;
- (_Bool)getNewBillPoint:(struct Point2D *)arg1 fromCamera:(const struct Camera *)arg2 lastBillPoint:(const struct Point2D *)arg3;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (void)updateCamera:(const reffed_ptr_329922e5 *)arg1 forced:(_Bool)arg2;
- (id)initWithConnection:(id)arg1;
- (id)init;

@end
