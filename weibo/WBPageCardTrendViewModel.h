//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage, WBPageTrendCard, WBTimelineLargeCardText;
@protocol WBPageCardTrendViewModelProtocol;

@interface WBPageCardTrendViewModel : NSObject
{
    WBPageTrendCard<WBPageCardTrendViewModelProtocol> *_trendCard;
    NSString *_displayImageUrl;
    UIImage *_placeholderImage;
    double _trendCardHeight;
    double _trendCardWidth;
    double _imageRatio;
    NSArray *_textLines;
    NSString *_nameString;
    NSString *_descString;
    WBTimelineLargeCardText *_trendTitleText;
    NSArray *_buttonModelArray;
    NSArray *_customStrings;
}

+ (void)reloadViewModelWithCard:(id)arg1;
+ (void)removeViewModelFromCacheWithCard:(id)arg1;
+ (id)trendViewModelFromCacheWithCard:(id)arg1;
+ (id)sharedCache;
@property(retain, nonatomic) NSArray *customStrings; // @synthesize customStrings=_customStrings;
@property(retain, nonatomic) NSArray *buttonModelArray; // @synthesize buttonModelArray=_buttonModelArray;
@property(retain, nonatomic) WBTimelineLargeCardText *trendTitleText; // @synthesize trendTitleText=_trendTitleText;
@property(retain, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(retain, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(retain, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
@property(nonatomic) double trendCardWidth; // @synthesize trendCardWidth=_trendCardWidth;
@property(nonatomic) double trendCardHeight; // @synthesize trendCardHeight=_trendCardHeight;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) NSString *displayImageUrl; // @synthesize displayImageUrl=_displayImageUrl;
@property(retain, nonatomic) WBPageTrendCard<WBPageCardTrendViewModelProtocol> *trendCard; // @synthesize trendCard=_trendCard;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *delLog;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool isAudioEnabled;
@property(readonly, nonatomic) _Bool isVideoEnabled;
- (id)init;

@end

