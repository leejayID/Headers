//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont;

@protocol AMPAttributedStringHandler <NSObject>
- (struct CGSize)sizeOfAttributeText:(NSAttributedString *)arg1 withMessageStyleKey:(NSString *)arg2;
- (NSAttributedString *)parserStringContent:(NSAttributedString *)arg1 withMessageStyleKey:(NSString *)arg2 withCustomParser:(NSArray *)arg3;
- (UIColor *)textMessageStyleTextColorWithKey:(NSString *)arg1;
- (UIColor *)textMessageStyleTextHighlightColorWithKey:(NSString *)arg1;
- (UIFont *)textMessageStyleFontWithKey:(NSString *)arg1;
- (long long)textMessageStyleVersionWithKey:(NSString *)arg1;
@end

