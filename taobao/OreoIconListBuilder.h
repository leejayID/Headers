//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface OreoIconListBuilder : NSObject
{
    double _height;
    double _gap;
    double _maxWidth;
    double _fontSize;
    double _padding;
    struct CGPoint _position;
    double _textCornerRadius;
    UIColor *_bgColor;
}

- (void).cxx_destruct;
- (id)disablePaddingWithBgColor:(id)arg1;
- (id)textCornerRadius:(double)arg1;
- (id)position:(struct CGPoint)arg1;
- (id)padding:(double)arg1;
- (id)maxWidth:(double)arg1;
- (id)gap:(double)arg1;
- (id)height:(double)arg1;
- (id)fontSize:(double)arg1;
- (id)renderView:(id)arg1 supportImg:(_Bool)arg2;
- (id)renderView:(id)arg1;
- (id)init;

@end
