//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface FaceScoreUserSummaryCardModel : QQModel
{
    unsigned int _entryAbility;
    unsigned int _leftTextColor;
    unsigned int _rightTextColor;
    NSString *_leftText;
    NSString *_rightText;
    NSString *_iconUrl;
}

@property(nonatomic) unsigned int rightTextColor; // @synthesize rightTextColor=_rightTextColor;
@property(nonatomic) unsigned int leftTextColor; // @synthesize leftTextColor=_leftTextColor;
@property(nonatomic) unsigned int entryAbility; // @synthesize entryAbility=_entryAbility;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
- (void)dealloc;

@end

