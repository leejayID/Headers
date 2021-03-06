//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, O2OVoucherDetail;

@interface O2OVoucherInstanceDetail : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasVoucherDetail;
    _Bool _hasPassId;
    _Bool _hasTradeNo;
    _Bool _hasGmtEffective;
    _Bool _hasGmtExpire;
    _Bool _hasCanPresent;
    _Bool _hasInstanceStatus;
    _Bool _hasPresentStatus;
    _Bool _hasSerialNumber;
    _Bool _hasPartnerId;
    _Bool _hasItemTicketId;
    _Bool _hasComplain;
    _Bool _hasComplainUrl;
    _Bool _canPresent;
    O2OVoucherDetail *_voucherDetail;
    NSString *_passId;
    NSString *_tradeNo;
    long long _gmtEffective;
    long long _gmtExpire;
    NSString *_instanceStatus;
    NSString *_presentStatus;
    NSString *_serialNumber;
    NSString *_partnerId;
    NSString *_itemTicketId;
    NSString *_complain;
    NSString *_complainUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *complainUrl; // @synthesize complainUrl=_complainUrl;
@property(retain, nonatomic) NSString *complain; // @synthesize complain=_complain;
@property(retain, nonatomic) NSString *itemTicketId; // @synthesize itemTicketId=_itemTicketId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *presentStatus; // @synthesize presentStatus=_presentStatus;
@property(retain, nonatomic) NSString *instanceStatus; // @synthesize instanceStatus=_instanceStatus;
@property(nonatomic) _Bool canPresent; // @synthesize canPresent=_canPresent;
@property(nonatomic) long long gmtExpire; // @synthesize gmtExpire=_gmtExpire;
@property(nonatomic) long long gmtEffective; // @synthesize gmtEffective=_gmtEffective;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) O2OVoucherDetail *voucherDetail; // @synthesize voucherDetail=_voucherDetail;
@property(readonly) _Bool hasComplainUrl; // @synthesize hasComplainUrl=_hasComplainUrl;
@property(readonly) _Bool hasComplain; // @synthesize hasComplain=_hasComplain;
@property(readonly) _Bool hasItemTicketId; // @synthesize hasItemTicketId=_hasItemTicketId;
@property(readonly) _Bool hasPartnerId; // @synthesize hasPartnerId=_hasPartnerId;
@property(readonly) _Bool hasSerialNumber; // @synthesize hasSerialNumber=_hasSerialNumber;
@property(readonly) _Bool hasPresentStatus; // @synthesize hasPresentStatus=_hasPresentStatus;
@property(readonly) _Bool hasInstanceStatus; // @synthesize hasInstanceStatus=_hasInstanceStatus;
@property(readonly) _Bool hasCanPresent; // @synthesize hasCanPresent=_hasCanPresent;
@property(readonly) _Bool hasGmtExpire; // @synthesize hasGmtExpire=_hasGmtExpire;
@property(readonly) _Bool hasGmtEffective; // @synthesize hasGmtEffective=_hasGmtEffective;
@property(readonly) _Bool hasTradeNo; // @synthesize hasTradeNo=_hasTradeNo;
@property(readonly) _Bool hasPassId; // @synthesize hasPassId=_hasPassId;
@property(readonly) _Bool hasVoucherDetail; // @synthesize hasVoucherDetail=_hasVoucherDetail;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

