//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface MCOfficialSubscribeButtonStyle : NSObject
{
    _Bool _iconHidden;
    double _iconSize;
    UIColor *_iconColor;
    NSString *_buttonText;
    double _textFontSize;
    UIColor *_buttonTextColor;
    UIColor *_borderColor;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(nonatomic) double textFontSize; // @synthesize textFontSize=_textFontSize;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool iconHidden; // @synthesize iconHidden=_iconHidden;
- (void).cxx_destruct;

@end
