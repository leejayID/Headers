//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoService.h"

@class NSNumber, NSString;

@interface TTVAccountService : TTVideoService
{
    _Bool _userVerified;
    _Bool _isLogin;
    NSString *_userName;
    NSString *_userID;
    NSString *_avatarURLString;
    NSString *_avatarLargeURLString;
    NSString *_bgImageURLString;
    NSString *_userDescription;
    NSString *_userGender;
    NSNumber *_isNewPlatform;
    NSNumber *_isNewUser;
    NSString *_draftMobile;
    NSString *_mediaID;
    NSString *_showInfo;
    NSString *_followingString;
    long long _followingCount;
    NSString *_followerString;
    long long _followerCount;
    NSString *_visitorString;
    long long _visitorCount;
    NSString *_momentString;
    long long _momentCount;
    NSString *_userAuthInfo;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(nonatomic) long long momentCount; // @synthesize momentCount=_momentCount;
@property(copy, nonatomic) NSString *momentString; // @synthesize momentString=_momentString;
@property(nonatomic) long long visitorCount; // @synthesize visitorCount=_visitorCount;
@property(copy, nonatomic) NSString *visitorString; // @synthesize visitorString=_visitorString;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(copy, nonatomic) NSString *followerString; // @synthesize followerString=_followerString;
@property(nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(copy, nonatomic) NSString *followingString; // @synthesize followingString=_followingString;
@property(copy, nonatomic) NSString *showInfo; // @synthesize showInfo=_showInfo;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(copy, nonatomic) NSString *draftMobile; // @synthesize draftMobile=_draftMobile;
@property(retain, nonatomic) NSNumber *isNewUser; // @synthesize isNewUser=_isNewUser;
@property(retain, nonatomic) NSNumber *isNewPlatform; // @synthesize isNewPlatform=_isNewPlatform;
@property(copy, nonatomic) NSString *userGender; // @synthesize userGender=_userGender;
@property(nonatomic) _Bool userVerified; // @synthesize userVerified=_userVerified;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *bgImageURLString; // @synthesize bgImageURLString=_bgImageURLString;
@property(copy, nonatomic) NSString *avatarLargeURLString; // @synthesize avatarLargeURLString=_avatarLargeURLString;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

@end
