//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessage.h"

@class NSString;

@interface PPChatRecallMessage : PPChatMessage
{
    NSString *_recallMsgId;
    NSString *_recallText;
}

@property(retain, nonatomic) NSString *recallText; // @synthesize recallText=_recallText;
@property(retain, nonatomic) NSString *recallMsgId; // @synthesize recallMsgId=_recallMsgId;
- (void).cxx_destruct;
- (id)init;

@end
