//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class NSString;

@interface NearbyAdInfo : QQGroupPropertyModel
{
    _Bool _hasAvatarAnimation;
    int _picType;
    NSString *_contentColorHex;
    NSString *_avatarBgGif;
    NSString *_nowBoardcastGif;
    NSString *_nowBoardcastWording;
    NSString *_actionData;
}

+ (id)sourceTitleBackgroundColorWithType:(long long)arg1;
+ (id)sourceTitleWithType:(long long)arg1;
@property(nonatomic) int picType; // @synthesize picType=_picType;
@property(retain, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) NSString *nowBoardcastWording; // @synthesize nowBoardcastWording=_nowBoardcastWording;
@property(retain, nonatomic) NSString *nowBoardcastGif; // @synthesize nowBoardcastGif=_nowBoardcastGif;
@property(retain, nonatomic) NSString *avatarBgGif; // @synthesize avatarBgGif=_avatarBgGif;
@property(nonatomic) _Bool hasAvatarAnimation; // @synthesize hasAvatarAnimation=_hasAvatarAnimation;
@property(copy, nonatomic) NSString *contentColorHex; // @synthesize contentColorHex=_contentColorHex;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) int adPosition; // @dynamic adPosition;
@property(nonatomic) long long adSource; // @dynamic adSource;
@property(nonatomic) long long adType; // @dynamic adType;
@property(retain, nonatomic) NSString *clickUrl; // @dynamic clickUrl;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *content2; // @dynamic content2;
@property(copy, nonatomic) NSString *cornerBgColorHex; // @dynamic cornerBgColorHex;
@property(copy, nonatomic) NSString *cornerFontColorHex; // @dynamic cornerFontColorHex;
@property(copy, nonatomic) NSString *cornerWording; // @dynamic cornerWording;
@property(copy, nonatomic) NSString *distance; // @dynamic distance;
@property(retain, nonatomic) NSString *exposeUrl; // @dynamic exposeUrl;
@property(nonatomic) _Bool hasExposured; // @dynamic hasExposured;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *posid; // @dynamic posid;
@property(nonatomic) long long productType; // @dynamic productType;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

