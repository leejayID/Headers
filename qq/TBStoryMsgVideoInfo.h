//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBStoryMsgVideoInfo : NSObject
{
    _Bool _isAuthorBigV;
    unsigned int _videoTime;
    NSString *_vid;
    NSString *_coverURL;
    unsigned long long _authorUid;
    NSString *_authorUnionId;
}

@property(copy, nonatomic) NSString *authorUnionId; // @synthesize authorUnionId=_authorUnionId;
@property(nonatomic) _Bool isAuthorBigV; // @synthesize isAuthorBigV=_isAuthorBigV;
@property(nonatomic) unsigned int videoTime; // @synthesize videoTime=_videoTime;
@property(nonatomic) unsigned long long authorUid; // @synthesize authorUid=_authorUid;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)dealloc;

@end
