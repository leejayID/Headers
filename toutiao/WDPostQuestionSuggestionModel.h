//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WDPostQuestionSuggestionModel : NSObject
{
    NSString *_title;
    NSString *_schema;
    NSNumber *_ansCount;
}

@property(retain, nonatomic) NSNumber *ansCount; // @synthesize ansCount=_ansCount;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)answerCountString;
- (id)initWithTitle:(id)arg1 schema:(id)arg2 ansCount:(id)arg3;

@end
