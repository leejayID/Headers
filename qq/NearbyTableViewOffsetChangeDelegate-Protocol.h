//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class UITableView;

@protocol NearbyTableViewOffsetChangeDelegate <NSObject>
- (void)tableViewDidEndScrollingAnimation:(UITableView *)arg1 offsetY:(double)arg2;
- (void)tableViewDidEndDecelerating:(UITableView *)arg1 offsetY:(double)arg2;
- (void)tableViewDidEndDragging:(UITableView *)arg1 offsetY:(double)arg2;
- (void)tableViewScroll:(UITableView *)arg1 offsetY:(double)arg2;
@end
