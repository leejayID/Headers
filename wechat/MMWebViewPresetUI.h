//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString, UIColor;

@interface MMWebViewPresetUI : MMObject
{
    _Bool _bUseBlurBackground;
    UIColor *_navigationBarColor;
    UIColor *_navigationBarTitleColor;
    UIColor *_navigationLeftItemFontColor;
    UIColor *_navigationRightItemColor;
    unsigned long long _statusBarColor;
    UIColor *_backgroundColor;
    UIColor *_backcontainerColor;
    NSString *_navigationLeftIconName;
    NSString *_navigationBarTitle;
    UIColor *_addressLabelColor;
}

@property(retain, nonatomic) UIColor *addressLabelColor; // @synthesize addressLabelColor=_addressLabelColor;
@property(nonatomic) _Bool bUseBlurBackground; // @synthesize bUseBlurBackground=_bUseBlurBackground;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) NSString *navigationLeftIconName; // @synthesize navigationLeftIconName=_navigationLeftIconName;
@property(retain, nonatomic) UIColor *backcontainerColor; // @synthesize backcontainerColor=_backcontainerColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long statusBarColor; // @synthesize statusBarColor=_statusBarColor;
@property(retain, nonatomic) UIColor *navigationRightItemColor; // @synthesize navigationRightItemColor=_navigationRightItemColor;
@property(retain, nonatomic) UIColor *navigationLeftItemFontColor; // @synthesize navigationLeftItemFontColor=_navigationLeftItemFontColor;
@property(retain, nonatomic) UIColor *navigationBarTitleColor; // @synthesize navigationBarTitleColor=_navigationBarTitleColor;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
- (void).cxx_destruct;

@end

