//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTSLiveCocosUser, NSNumber, NSString;

@interface HTSLiveEnterMessageNode : NSObject
{
    _Bool _isTopUser;
    _Bool _isSetToAdmin;
    NSNumber *_messageID;
    NSNumber *_roomID;
    NSString *_topUserNo;
    NSString *_topVipNo;
    NSNumber *_enterType;
    NSString *_desc;
    HTSLiveCocosUser *_user;
}

@property(retain, nonatomic) HTSLiveCocosUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool isSetToAdmin; // @synthesize isSetToAdmin=_isSetToAdmin;
@property(nonatomic) _Bool isTopUser; // @synthesize isTopUser=_isTopUser;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSNumber *enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *topVipNo; // @synthesize topVipNo=_topVipNo;
@property(copy, nonatomic) NSString *topUserNo; // @synthesize topUserNo=_topUserNo;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;

@end

