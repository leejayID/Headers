//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/PTLayoutItem.h>

@class NSString;

@interface QZCachedButton : PTLayoutItem
{
    _Bool _selected;
    _Bool _enabled;
    NSString *_normalImageName;
    NSString *_highlightImageName;
    NSString *_disabledImageName;
    NSString *_selectedImageName;
    NSString *_selecter;
    NSString *_backgroundImage;
    NSString *_selectedIconUrl;
    NSString *_normalIconUrl;
    NSString *_highlightIconUrl;
    NSString *_disableIconUrl;
    NSString *_selectedDefaultUrl;
    NSString *_normalDefaultUrl;
    NSString *_highlightDefaultUrl;
    NSString *_disableDefaultUrl;
}

+ (id)cacheImageQueue;
@property(retain, nonatomic) NSString *disableDefaultUrl; // @synthesize disableDefaultUrl=_disableDefaultUrl;
@property(retain, nonatomic) NSString *highlightDefaultUrl; // @synthesize highlightDefaultUrl=_highlightDefaultUrl;
@property(retain, nonatomic) NSString *normalDefaultUrl; // @synthesize normalDefaultUrl=_normalDefaultUrl;
@property(retain, nonatomic) NSString *selectedDefaultUrl; // @synthesize selectedDefaultUrl=_selectedDefaultUrl;
@property(retain, nonatomic) NSString *disableIconUrl; // @synthesize disableIconUrl=_disableIconUrl;
@property(retain, nonatomic) NSString *highlightIconUrl; // @synthesize highlightIconUrl=_highlightIconUrl;
@property(retain, nonatomic) NSString *normalIconUrl; // @synthesize normalIconUrl=_normalIconUrl;
@property(retain, nonatomic) NSString *selectedIconUrl; // @synthesize selectedIconUrl=_selectedIconUrl;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *selecter; // @synthesize selecter=_selecter;
@property(retain, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(retain, nonatomic) NSString *disabledImageName; // @synthesize disabledImageName=_disabledImageName;
@property(retain, nonatomic) NSString *highlightImageName; // @synthesize highlightImageName=_highlightImageName;
@property(retain, nonatomic) NSString *normalImageName; // @synthesize normalImageName=_normalImageName;
- (void).cxx_destruct;
- (void)configView:(id)arg1 context:(id)arg2;
- (void)setImageUrl:(id)arg1 defaultImageUrl:(id)arg2 defaultImageName:(id)arg3 toButton:(id)arg4 forState:(unsigned long long)arg5;
- (void)updateView:(id)arg1 context:(id)arg2;
- (void)setImage:(id)arg1 toButton:(id)arg2 forState:(unsigned long long)arg3 isBg:(_Bool)arg4;
- (id)createView;

@end

