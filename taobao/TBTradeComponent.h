//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TBTradeComponentEngine;

@interface TBTradeComponent : NSObject
{
    NSMutableDictionary *_data;
    NSMutableDictionary *_fields;
    NSString *_tag;
    NSString *_cid;
    NSString *_type;
    NSDictionary *_render;
    NSMutableDictionary *_storage;
    TBTradeComponentEngine *_engine;
    TBTradeComponent *_parent;
    unsigned long long _linkageAction;
}

@property(nonatomic) unsigned long long linkageAction; // @synthesize linkageAction=_linkageAction;
@property(nonatomic) __weak TBTradeComponent *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak TBTradeComponentEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSDictionary *render; // @synthesize render=_render;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)validateContent;
- (void)notifyLinkageDelegate;
- (id)validate;
- (id)submitData;
- (id)adjustData;
- (_Bool)submit;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)key;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1;

@end

