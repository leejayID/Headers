//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTBaseRpcReq.h"

@class NSDictionary, NSString;

@interface KBCONTENTMyQaListQueryReq : KBCONTENTBaseRpcReq
{
    int _hasShowNumber;
    NSString *_tabId;
    NSString *_pageType;
    NSDictionary *_option;
}

+ (Class)optionElementClass;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) int hasShowNumber; // @synthesize hasShowNumber=_hasShowNumber;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
- (void).cxx_destruct;

@end

