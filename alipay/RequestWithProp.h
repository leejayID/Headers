//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface RequestWithProp : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasTargetUserId;
    _Bool _hasAlipayAccount;
    _Bool _hasMaxNum;
    int _maxNum;
    NSString *_targetUserId;
    NSString *_alipayAccount;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int maxNum; // @synthesize maxNum=_maxNum;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *targetUserId; // @synthesize targetUserId=_targetUserId;
@property(readonly) _Bool hasMaxNum; // @synthesize hasMaxNum=_hasMaxNum;
@property(readonly) _Bool hasAlipayAccount; // @synthesize hasAlipayAccount=_hasAlipayAccount;
@property(readonly) _Bool hasTargetUserId; // @synthesize hasTargetUserId=_hasTargetUserId;
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

