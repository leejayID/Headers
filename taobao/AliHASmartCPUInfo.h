//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AliHASmartCPUInfo : NSObject
{
    float _total_cpu;
    unsigned int _high_thread;
    float _high_thread_usage;
    int _thread_index;
    int _count;
    NSMutableDictionary *_thread_cpu_infos;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int thread_index; // @synthesize thread_index=_thread_index;
@property(nonatomic) float high_thread_usage; // @synthesize high_thread_usage=_high_thread_usage;
@property(nonatomic) unsigned int high_thread; // @synthesize high_thread=_high_thread;
@property(retain, nonatomic) NSMutableDictionary *thread_cpu_infos; // @synthesize thread_cpu_infos=_thread_cpu_infos;
@property(nonatomic) float total_cpu; // @synthesize total_cpu=_total_cpu;
- (void).cxx_destruct;

@end

