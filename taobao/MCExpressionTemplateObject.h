//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCExpressionTemplateObject : NSObject
{
    NSString *_dataKey;
    NSString *_expressionTemplateText;
    NSArray *_containExpressions;
}

@property(retain, nonatomic) NSArray *containExpressions; // @synthesize containExpressions=_containExpressions;
@property(copy, nonatomic) NSString *expressionTemplateText; // @synthesize expressionTemplateText=_expressionTemplateText;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void).cxx_destruct;

@end

