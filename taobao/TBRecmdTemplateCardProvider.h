//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRecmdCardBaseProvider.h"

#import "TBRecmdCardProvider-Protocol.h"

@class NSString, TBDTemplateItem, TBDViewItem;

@interface TBRecmdTemplateCardProvider : TBRecmdCardBaseProvider <TBRecmdCardProvider>
{
    _Bool _hasRenderError;
    TBDViewItem *_viewItem;
    NSString *_viewSizeIdentifier;
    TBDTemplateItem *_exactTemplateItem;
    struct CGSize _cardSize;
}

+ (id)factoryKey;
@property(nonatomic) _Bool hasRenderError; // @synthesize hasRenderError=_hasRenderError;
@property(nonatomic) struct CGSize cardSize; // @synthesize cardSize=_cardSize;
@property(retain, nonatomic) TBDTemplateItem *exactTemplateItem; // @synthesize exactTemplateItem=_exactTemplateItem;
@property(copy, nonatomic) NSString *viewSizeIdentifier; // @synthesize viewSizeIdentifier=_viewSizeIdentifier;
@property(retain, nonatomic) TBDViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void).cxx_destruct;
- (void)updateModel:(id)arg1;
- (void)updateCardWithData;
- (id)selfView;
- (id)selfModel;
- (id)createCard;
- (_Bool)isHalfScreen;
- (_Bool)generateViewItemWithDataIfNeed:(id)arg1;
- (struct CGSize)renderSize;
- (_Bool)canProvideView;
- (void)bindViewAndData;
- (struct CGSize)viewSize;
- (double)height;
- (double)width;
- (Class)cardClass;
- (_Bool)viewCanReuse:(id)arg1;
- (id)reuseIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

