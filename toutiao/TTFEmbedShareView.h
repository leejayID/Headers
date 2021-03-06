//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIImage;
@protocol TTFEmbedShareViewButtonStyle;

@interface TTFEmbedShareView : UIView
{
    id <TTFEmbedShareViewButtonStyle> _style;
    CDUnknownBlockType _shareCompleteBlock;
    CDUnknownBlockType _shareButtonClickBlock;
    CDUnknownBlockType _willShareBlock;
    CDUnknownBlockType _getShareParamsBlock;
    NSArray *_buttonIcons;
    NSMutableArray *_shareButtons;
    NSMutableArray *_shareButtonShadowViews;
    NSString *_shareSource;
    UIImage *_preloadedShareImage;
}

@property(retain, nonatomic) UIImage *preloadedShareImage; // @synthesize preloadedShareImage=_preloadedShareImage;
@property(copy, nonatomic) NSString *shareSource; // @synthesize shareSource=_shareSource;
@property(retain, nonatomic) NSMutableArray *shareButtonShadowViews; // @synthesize shareButtonShadowViews=_shareButtonShadowViews;
@property(retain, nonatomic) NSMutableArray *shareButtons; // @synthesize shareButtons=_shareButtons;
@property(retain, nonatomic) NSArray *buttonIcons; // @synthesize buttonIcons=_buttonIcons;
@property(copy, nonatomic) CDUnknownBlockType getShareParamsBlock; // @synthesize getShareParamsBlock=_getShareParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType willShareBlock; // @synthesize willShareBlock=_willShareBlock;
@property(copy, nonatomic) CDUnknownBlockType shareButtonClickBlock; // @synthesize shareButtonClickBlock=_shareButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType shareCompleteBlock; // @synthesize shareCompleteBlock=_shareCompleteBlock;
@property(retain, nonatomic) id <TTFEmbedShareViewButtonStyle> style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)getShareParamForDest:(unsigned long long)arg1;
- (void)shareTitle:(id)arg1 text:(id)arg2 url:(id)arg3 toDest:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)shareImage:(id)arg1 toDest:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)preloadShareImageIfNeededForDest:(unsigned long long)arg1;
- (void)shareButtonTouch:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)reloadShareCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithShareSource:(id)arg1;

@end

