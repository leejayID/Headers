//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, TBShareGroupInfoModel;

@interface TBShareGroupFeedModel : QQModel
{
    _Bool _isEnd;
    unsigned int _date;
    unsigned int _feedSeq;
    unsigned int _seq;
    int _videoTotalNum;
    unsigned int _vidListOrder;
    TBShareGroupInfoModel *_shareGroupInfo;
    NSArray *_videoList;
    NSString *_nextCookie;
    NSString *_feedID;
    NSString *_desc;
    NSArray *_todayNewMember;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int vidListOrder; // @synthesize vidListOrder=_vidListOrder;
@property(retain, nonatomic) NSArray *todayNewMember; // @synthesize todayNewMember=_todayNewMember;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int videoTotalNum; // @synthesize videoTotalNum=_videoTotalNum;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int feedSeq; // @synthesize feedSeq=_feedSeq;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
@property(retain, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(retain, nonatomic, getter=getShareGroupInfo) TBShareGroupInfoModel *shareGroupInfo; // @synthesize shareGroupInfo=_shareGroupInfo;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)updateFeedDescribe:(id)arg1;
- (void)removeFakeFeedVideoInfo;
- (void)delFeedVideoInfoWithVid:(id)arg1;
- (void)insertNewMembers:(id)arg1;
- (void)insertSelfBatchFeedVideoInfo:(id)arg1;
- (void)insertBatchFeedVideoInfo:(id)arg1;
- (void)insertSelfFeedVideoInfo:(id)arg1;
- (void)insertShareGroupVideInfo:(id)arg1;
- (void)dealloc;

@end
