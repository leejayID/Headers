//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMTextureItem.h"

#import "KSAdvTextBannerViewDelegate-Protocol.h"
#import "KSAdvTextViewDelegate-Protocol.h"
#import "KSAdvTextureEdit-Protocol.h"

@class KSChartletToolItem, KSVideoShapePrototype, NSString, UIView;
@protocol KSChartletView;

@interface KSTextItem : KSMTextureItem <KSAdvTextViewDelegate, KSAdvTextBannerViewDelegate, KSAdvTextureEdit>
{
    _Bool _editing;
    NSString *_text;
    KSVideoShapePrototype *_imageMaterial;
    KSChartletToolItem *_viewMaterial;
    CDUnknownBlockType _onTapItem;
    CDUnknownBlockType _onTapCloseBtn;
    CDUnknownBlockType _onChanged;
    UIView<KSChartletView> *_textureView;
    struct CGSize _canvasSize;
}

@property(retain, nonatomic) UIView<KSChartletView> *textureView; // @synthesize textureView=_textureView;
@property(copy, nonatomic) CDUnknownBlockType onChanged; // @synthesize onChanged=_onChanged;
@property(copy, nonatomic) CDUnknownBlockType onTapCloseBtn; // @synthesize onTapCloseBtn=_onTapCloseBtn;
@property(copy, nonatomic) CDUnknownBlockType onTapItem; // @synthesize onTapItem=_onTapItem;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) KSChartletToolItem *viewMaterial; // @synthesize viewMaterial=_viewMaterial;
@property(retain, nonatomic) KSVideoShapePrototype *imageMaterial; // @synthesize imageMaterial=_imageMaterial;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)textDidChangeOfChartletView:(id)arg1;
- (void)didEndEditTextOfChartletView:(id)arg1;
- (void)willBeginEditTextOfChartletView:(id)arg1;
- (void)didMoveChartletView:(id)arg1;
- (void)didLongPressChartletView:(id)arg1;
- (void)didSelectChartletView:(id)arg1;
- (void)didTapCloseButtonOfShapeView:(id)arg1;
- (void)didTapMenuButtonOfShapeView:(id)arg1;
- (id)generateTextureWithResolution:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
