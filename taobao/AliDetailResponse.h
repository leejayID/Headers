//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSURL;

@interface AliDetailResponse : NSObject
{
    NSData *_responseData;
    NSURL *_URL;
    NSDictionary *_headerFields;
}

@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;

@end
