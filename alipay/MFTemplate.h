//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MFTemplate : NSObject
{
    NSString *_tid;
    NSString *_manifest;
    NSString *_appId;
    NSString *_biz;
    NSString *_filePath;
    id _htmlParser;
    NSArray *_bodyEntity;
    NSMutableDictionary *_doms;
    NSDictionary *_csses;
    NSDictionary *_databinding;
    NSString *_dataFieldBinding;
    NSDictionary *_events;
}

+ (id)createWithTid:(id)arg1 withHtmlParser:(id)arg2 withDoms:(id)arg3 withCss:(id)arg4 withBinding:(id)arg5 withEvents:(id)arg6;
+ (id)extractEvent:(id)arg1;
+ (id)parseEvent:(id)arg1;
+ (id)parse:(int)arg1 withString:(id)arg2 error:(id *)arg3;
+ (id)templateWithId:(id)arg1 html:(id)arg2 css:(id)arg3 binding:(id)arg4 js:(id)arg5;
@property(retain, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(copy, nonatomic) NSString *dataFieldBinding; // @synthesize dataFieldBinding=_dataFieldBinding;
@property(retain, nonatomic) NSDictionary *databinding; // @synthesize databinding=_databinding;
@property(retain, nonatomic) NSDictionary *csses; // @synthesize csses=_csses;
@property(retain, nonatomic) NSMutableDictionary *doms; // @synthesize doms=_doms;
@property(retain, nonatomic) NSArray *bodyEntity; // @synthesize bodyEntity=_bodyEntity;
@property(retain, nonatomic) id htmlParser; // @synthesize htmlParser=_htmlParser;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (_Bool)valid;
- (id)domWithId:(id)arg1;
- (void)addDom:(id)arg1;
- (id)init;
- (id)loadDom:(id)arg1 withCss:(id)arg2 withDataBinding:(id)arg3 withEvents:(id)arg4;

@end

