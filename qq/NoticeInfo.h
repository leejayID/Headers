//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/AutoPbModel.h>

@class NSString;

@interface NoticeInfo : AutoPbModel
{
    unsigned int _type;
    unsigned int _expireTime;
    unsigned int _hideMode;
    NSString *_notificationId;
    NSString *_title;
    NSString *_summary;
    NSString *_jumpUrl;
    NSString *_iconUrl;
    unsigned long long _appid;
}

@property(nonatomic) unsigned long long appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned int hideMode; // @synthesize hideMode=_hideMode;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
- (id)getPropertyInfos;

@end

