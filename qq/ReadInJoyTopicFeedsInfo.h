//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSArray, NSString, ReadInJoyTopicTitle;

@interface ReadInJoyTopicFeedsInfo : NSObject <NSCopying>
{
    unsigned int _feedsStyle;
    unsigned long long _feedsId;
    unsigned long long _topicMasterUin;
    NSString *_subscribeId;
    NSString *_topicMasterName;
    NSArray *_topicItemArray;
    ReadInJoyTopicTitle *_leftTitle;
    ReadInJoyTopicTitle *_rightTitle;
    NSString *_topicComments;
}

+ (_Bool)updateTopicFeedsInfoFromIncreasedPbData:(id)arg1 with:(id)arg2;
+ (id)topicFeedsInfoFromPbData:(id)arg1;
@property(copy, nonatomic) NSString *topicComments; // @synthesize topicComments=_topicComments;
@property(retain, nonatomic) ReadInJoyTopicTitle *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) ReadInJoyTopicTitle *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) NSArray *topicItemArray; // @synthesize topicItemArray=_topicItemArray;
@property(copy, nonatomic) NSString *topicMasterName; // @synthesize topicMasterName=_topicMasterName;
@property(copy, nonatomic) NSString *subscribeId; // @synthesize subscribeId=_subscribeId;
@property(nonatomic) unsigned long long topicMasterUin; // @synthesize topicMasterUin=_topicMasterUin;
@property(nonatomic) unsigned int feedsStyle; // @synthesize feedsStyle=_feedsStyle;
@property(nonatomic) unsigned long long feedsId; // @synthesize feedsId=_feedsId;
- (void).cxx_destruct;
- (id)description;
- (id)toPbData;
- (void)toEncoder:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
