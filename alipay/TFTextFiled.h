//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface TFTextFiled : UITextField
{
    double _textHeight;
}

@property(nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)textInsets;
- (void)setFont:(id)arg1;

@end
