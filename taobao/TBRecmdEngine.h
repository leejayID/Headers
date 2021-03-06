//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBRecmdConfiguration, TBRecmdProcessor, TBRecmdQueryRequest;

@interface TBRecmdEngine : NSObject
{
    NSString *_sourceChannel;
    TBRecmdProcessor *_processor;
    TBRecmdQueryRequest *_request;
}

@property(retain, nonatomic) TBRecmdQueryRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) TBRecmdProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (void).cxx_destruct;
- (void)removeActionBlockForKey:(unsigned long long)arg1;
- (void)registerActionBlock:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
- (void)queryWithCurrentPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 specailParam:(id)arg3;
- (void)queryNextPageWithPageSize:(unsigned long long)arg1 param:(id)arg2;
- (void)queryFirstPageWithPageSize:(unsigned long long)arg1 param:(id)arg2;
- (void)queryWithCurrentPage:(unsigned long long)arg1 specailParam:(id)arg2;
- (void)queryNextPageWithParam:(id)arg1;
- (void)queryFirstPageWithParam:(id)arg1;
- (void)forceDataExpired;
- (void)readyForNewData:(id)arg1;
- (void)free;
- (void)setPageName:(id)arg1;
- (id)initWithSoureChannel:(id)arg1 outputType:(unsigned long long)arg2;
- (id)initWithSoureChannel:(id)arg1;
- (id)init;
@property(retain, nonatomic) TBRecmdConfiguration *config;

@end

