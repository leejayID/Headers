//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString;

@interface QMScaleView : UIView
{
    long long scaleShowValue_;
    double width_;
    NSString *_labelScale;
    NSMutableDictionary *_dictionaryScaleImages;
}

+ (long long *)scaleMeterForShow;
@property(retain, nonatomic) NSMutableDictionary *dictionaryScaleImages; // @synthesize dictionaryScaleImages=_dictionaryScaleImages;
@property(copy, nonatomic) NSString *labelScale; // @synthesize labelScale=_labelScale;
@property(nonatomic) double width; // @synthesize width=width_;
@property(nonatomic) long long scaleShowValue; // @synthesize scaleShowValue=scaleShowValue_;
- (void).cxx_destruct;
- (id)imageOfLabel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 withTextLayer:(id)arg2 inContext:(struct CGContext *)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

