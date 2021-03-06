//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIFont;

@interface MQZoneNumberScrollAnimationView : UIView
{
    NSMutableArray *_scrollTexts;
    NSMutableArray *_scrollLayers;
    NSMutableArray *_scrollLabels;
    _Bool _reverseScrollDirection;
    UIColor *_textColor;
    UIFont *_font;
    double _duration;
    double _delay;
}

@property(nonatomic) _Bool reverseScrollDirection; // @synthesize reverseScrollDirection=_reverseScrollDirection;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@end

