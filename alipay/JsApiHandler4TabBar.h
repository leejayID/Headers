//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JsApiHandlerBase.h"

@class NSMutableArray;

@interface JsApiHandler4TabBar : JsApiHandlerBase
{
    NSMutableArray *_tabBarItems;
}

@property(retain, nonatomic) NSMutableArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (void)updateBadgeValue:(id)arg1 tag:(id)arg2 context:(id)arg3;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

