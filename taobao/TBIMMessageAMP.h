//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMMessageAdapter-Protocol.h"

@class NSString, TBAMPMessage;

@interface TBIMMessageAMP : NSObject <TBIMMessageAdapter>
{
    TBAMPMessage *_data;
    struct CGSize _text1Size;
    struct CGSize _text2Size;
}

@property(retain, nonatomic) TBAMPMessage *data; // @synthesize data=_data;
@property(nonatomic) struct CGSize text2Size; // @synthesize text2Size=_text2Size;
@property(nonatomic) struct CGSize text1Size; // @synthesize text1Size=_text1Size;
- (void).cxx_destruct;
- (_Bool)hasAitaInfo;
- (_Bool)isCenterDisplay;
- (_Bool)canShowPush;
- (id)remark;
- (id)toJsonDictionary;
- (long long)Compare:(id)arg1;
- (_Bool)isSilent;
- (id)getSenderName;
- (id)getSender;
- (id)getSenderId;
- (_Bool)isEqual:(id)arg1;
- (id)summary;
- (_Bool)isTemp;
- (id)code;
- (id)getSendTime;
- (id)getSessionId;
- (unsigned long long)getReadStatus;
- (void)updateReadStatus:(unsigned long long)arg1;
- (unsigned long long)getSendStatus;
- (long long)getBizSubId;
- (unsigned long long)getDirection;
- (id)getContent;
- (int)getMessageType;
- (id)getMessageID;
- (void)updateMessageID:(id)arg1;
- (id)getLocalMessageID;
- (id)initWithData:(id)arg1;
- (id)getMessageContext;
- (id)getInerData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
