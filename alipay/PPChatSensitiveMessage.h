//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatTextMessage.h"

@class NSString;

@interface PPChatSensitiveMessage : PPChatTextMessage
{
    int _cellSensitiveHeight;
    NSString *_sensitiveText;
}

@property(nonatomic) int cellSensitiveHeight; // @synthesize cellSensitiveHeight=_cellSensitiveHeight;
@property(retain, nonatomic) NSString *sensitiveText; // @synthesize sensitiveText=_sensitiveText;
- (void).cxx_destruct;
- (id)init;

@end
