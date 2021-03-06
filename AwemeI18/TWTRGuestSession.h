//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRBaseSession-Protocol.h"

@class NSDate, NSString;

@interface TWTRGuestSession : NSObject <TWTRBaseSession>
{
    NSString *_accessToken;
    NSString *_guestToken;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *guestToken; // @synthesize guestToken=_guestToken;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool probablyNeedsRefreshing;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqualToGuestSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAccessToken:(id)arg1 guestToken:(id)arg2 creationDate:(id)arg3;
- (id)initWithAccessToken:(id)arg1 guestToken:(id)arg2;
- (id)initWithSessionDictionary:(id)arg1 creationDate:(id)arg2;
- (id)initWithSessionDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

