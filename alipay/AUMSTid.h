//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUMSToString.h"

@class NSString;

@interface AUMSTid : AUMSToString
{
    NSString *_imei;
    NSString *_imsi;
    NSString *_clientKey;
    NSString *_tid;
    NSString *_vimsi;
    NSString *_vimei;
}

@property(retain, nonatomic) NSString *vimei; // @synthesize vimei=_vimei;
@property(retain, nonatomic) NSString *vimsi; // @synthesize vimsi=_vimsi;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
- (void).cxx_destruct;

@end

