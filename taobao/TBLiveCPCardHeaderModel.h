//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveCPCardHeaderModel : TBJSONModel
{
    NSString *_text;
    NSString *_textColor;
    NSString *_iconUrl;
    NSString *_startLineColor;
    NSString *_endLineColor;
}

@property(copy, nonatomic) NSString *endLineColor; // @synthesize endLineColor=_endLineColor;
@property(copy, nonatomic) NSString *startLineColor; // @synthesize startLineColor=_startLineColor;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
