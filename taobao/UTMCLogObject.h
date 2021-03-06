//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface UTMCLogObject : NSObject
{
    int _rowID;
    NSString *_eventID;
    NSString *_priority;
    NSData *_content;
    long long _time;
    NSString *_arg1MD5;
    NSString *_page;
}

@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *arg1MD5; // @synthesize arg1MD5=_arg1MD5;
@property(readonly, nonatomic) int rowID; // @synthesize rowID=_rowID;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)description;
- (void)setRowIDValue:(id)arg1;
- (id)appKeyFromContent;

@end

