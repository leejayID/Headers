//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TVLApiRequestInfo : NSObject
{
    NSString *_liveID;
    NSString *_userID;
    unsigned long long _playType;
}

@property(nonatomic) unsigned long long playType; // @synthesize playType=_playType;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
- (void).cxx_destruct;
- (id)getLiveVideoAPI;

@end
