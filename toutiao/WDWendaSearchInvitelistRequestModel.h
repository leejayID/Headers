//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString;
@protocol Optional;

@interface WDWendaSearchInvitelistRequestModel : TTRequestModel
{
    NSString<Optional> *_search_text;
    NSString<Optional> *_qid;
}

@property(retain, nonatomic) NSString<Optional> *qid; // @synthesize qid=_qid;
@property(retain, nonatomic) NSString<Optional> *search_text; // @synthesize search_text=_search_text;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

