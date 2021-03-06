//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTIMHttpDeliveSilenceModel, TTIMHttpGroupSendMessageModel;
@protocol Optional;

@interface TTIMHttpSendMessageResponseModel : JSONModel
{
    NSNumber *_cmd;
    NSString *_seqId;
    NSNumber<Optional> *_statusCode;
    TTIMHttpGroupSendMessageModel<Optional> *_groupSendMessage;
    TTIMHttpDeliveSilenceModel<Optional> *_deliveSilence;
}

+ (id)keyMapper;
@property(retain, nonatomic) TTIMHttpDeliveSilenceModel<Optional> *deliveSilence; // @synthesize deliveSilence=_deliveSilence;
@property(retain, nonatomic) TTIMHttpGroupSendMessageModel<Optional> *groupSendMessage; // @synthesize groupSendMessage=_groupSendMessage;
@property(retain, nonatomic) NSNumber<Optional> *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *seqId; // @synthesize seqId=_seqId;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)transformToGroupPBModel;

@end

