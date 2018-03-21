//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnnotationView.h"

@class MMMapContext, UIImageView, UILabel, UIView;

@interface MBKMocarParkLotAnnotationView : MMAnnotationView
{
    _Bool _rendered;
    UIImageView *_iconView;
    UILabel *_numLabel;
    UIView *_infoWindow;
    MMMapContext *_context;
    struct CGSize _bgsize;
}

+ (void)renderWithContext:(id)arg1 annotations:(id)arg2;
+ (id)annatationViewWith:(id)arg1 annotation:(id)arg2;
@property(nonatomic) __weak MMMapContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *infoWindow; // @synthesize infoWindow=_infoWindow;
@property(nonatomic) struct CGSize bgsize; // @synthesize bgsize=_bgsize;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool rendered; // @synthesize rendered=_rendered;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)buildUI;
- (void)setAnnotation:(id)arg1;
- (void)reSetLayer;
- (void)updateLayer;
- (void)showWithInfo:(id)arg1;
- (void)updateAnnotationInfoWith:(long long)arg1 duration:(long long)arg2;

@end
