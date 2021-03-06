//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class NSString, UIImage;

@interface SCFFriendListModel : QQGroupPropertyModel
{
    unsigned int _praiseHotLevel;
    unsigned int _chatHotLevel;
    unsigned int _closeLevel;
    unsigned int _praiseHotDays;
    unsigned int _chatHotDays;
    unsigned int _closeDays;
    unsigned int _qzoneLevel;
    unsigned int _qzoneDays;
    unsigned int _loverFlag;
    UIImage *_networkImage;
    unsigned long long _dstUin;
    unsigned long long _lastChatTime;
    unsigned long long _lastPraiseTime;
    unsigned long long _lastQzoneTime;
    NSString *_iconStr;
}

@property(copy, nonatomic) NSString *iconStr; // @synthesize iconStr=_iconStr;
@property(nonatomic) unsigned int loverFlag; // @synthesize loverFlag=_loverFlag;
@property(nonatomic) unsigned long long lastQzoneTime; // @synthesize lastQzoneTime=_lastQzoneTime;
@property(nonatomic) unsigned int qzoneDays; // @synthesize qzoneDays=_qzoneDays;
@property(nonatomic) unsigned int qzoneLevel; // @synthesize qzoneLevel=_qzoneLevel;
@property(nonatomic) unsigned long long lastPraiseTime; // @synthesize lastPraiseTime=_lastPraiseTime;
@property(nonatomic) unsigned long long lastChatTime; // @synthesize lastChatTime=_lastChatTime;
@property(nonatomic) unsigned int closeDays; // @synthesize closeDays=_closeDays;
@property(nonatomic) unsigned int chatHotDays; // @synthesize chatHotDays=_chatHotDays;
@property(nonatomic) unsigned int praiseHotDays; // @synthesize praiseHotDays=_praiseHotDays;
@property(nonatomic) unsigned int closeLevel; // @synthesize closeLevel=_closeLevel;
@property(nonatomic) unsigned int chatHotLevel; // @synthesize chatHotLevel=_chatHotLevel;
@property(nonatomic) unsigned int praiseHotLevel; // @synthesize praiseHotLevel=_praiseHotLevel;
@property(nonatomic) unsigned long long dstUin; // @synthesize dstUin=_dstUin;
@property(copy, nonatomic) UIImage *networkImage; // @synthesize networkImage=_networkImage;
- (void).cxx_destruct;
- (id)getOfflinePrompt:(long long)arg1;
- (id)getOnlineStatusPrompt;
- (long long)setSCFVipTypeByFriendModel:(id)arg1;
- (void)syncDataFromFriendModel:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *dynamicPrompt; // @dynamic dynamicPrompt;
@property(nonatomic) int dynamicType; // @dynamic dynamicType;
@property(nonatomic) long long lastLoginState; // @dynamic lastLoginState;
@property(copy, nonatomic) NSString *netStateVoiceStr; // @dynamic netStateVoiceStr;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) int onlineState; // @dynamic onlineState;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;
@property(nonatomic) long long vipType; // @dynamic vipType;

@end

