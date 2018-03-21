//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOInfoModel.h>

@class NSMutableArray, NSString;

@interface DiscussGroupTipMsgModel : QQAIOInfoModel
{
    int _tipType;
    unsigned int _sMsgSeq;
    NSMutableArray *_addMemArray;
    NSMutableArray *_quitMemArray;
    NSMutableArray *_memArray;
    double _time;
    long long _msgID;
    NSString *_content;
    long long _discussGroupUin;
    long long _discussUin;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) long long discussUin; // @synthesize discussUin=_discussUin;
@property(nonatomic) long long discussGroupUin; // @synthesize discussGroupUin=_discussGroupUin;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int sMsgSeq; // @synthesize sMsgSeq=_sMsgSeq;
@property(nonatomic) long long msgID; // @synthesize msgID=_msgID;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSMutableArray *memArray; // @synthesize memArray=_memArray;
@property(retain, nonatomic) NSMutableArray *quitMemArray; // @synthesize quitMemArray=_quitMemArray;
@property(retain, nonatomic) NSMutableArray *addMemArray; // @synthesize addMemArray=_addMemArray;
@property(nonatomic) int tipType; // @synthesize tipType=_tipType;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
- (id)GetContent;
- (id)getTipShowText;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
