//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class NSMutableDictionary, NSString;

@interface TBCartDynamicPromotionComponent : TBCartDataComponent
{
    NSString *_title;
    NSString *_nextTitle;
    NSString *_url;
    NSString *_icon;
    NSString *_rule;
    NSString *_color;
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *nextTitle; // @synthesize nextTitle=_nextTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

