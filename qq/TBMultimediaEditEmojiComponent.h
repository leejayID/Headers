//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBMultimediaEditComponent.h>

#import <QQMainProject/TBEmojiScrollViewDelegate-Protocol.h>
#import <QQMainProject/TBInteractiveElementViewDelegate-Protocol.h>

@class NSMutableArray, NSString, TBEmojiScrollView, TBExtendedHitButton, TBGPSModel;

@interface TBMultimediaEditEmojiComponent : TBMultimediaEditComponent <TBEmojiScrollViewDelegate, TBInteractiveElementViewDelegate>
{
    TBGPSModel *_captureGPSModel;
    unsigned long long _mediaSource;
    TBEmojiScrollView *_emojiView;
    NSMutableArray *_emojis;
    TBExtendedHitButton *_endEditBtn;
}

@property(retain, nonatomic) TBExtendedHitButton *endEditBtn; // @synthesize endEditBtn=_endEditBtn;
@property(retain, nonatomic) NSMutableArray *emojis; // @synthesize emojis=_emojis;
@property(retain, nonatomic) TBEmojiScrollView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(retain, nonatomic) TBGPSModel *captureGPSModel; // @synthesize captureGPSModel=_captureGPSModel;
- (void)elementMove2Trash:(id)arg1;
- (void)elementClicked:(id)arg1;
- (void)elementMoveEnded:(id)arg1;
- (void)elementMoving:(id)arg1;
- (void)elementLongPressBegan:(id)arg1;
- (void)elementGestureRecognizerDidEnd:(id)arg1 gesture:(id)arg2;
- (void)elementGestureRecognizerWillBegin:(id)arg1 gesture:(id)arg2;
- (void)makeScaleAnimation:(id)arg1;
- (void)reStoreFace:(id)arg1;
- (id)faceModels;
- (void)showPOIEmojiIcon:(id)arg1 GPSModel:(id)arg2;
- (void)showEmojiIcon:(id)arg1 positionInScreen:(struct CGRect)arg2;
- (void)emojiScrollView:(id)arg1 didSelectedEmojiView:(id)arg2 GPSModel:(id)arg3;
- (void)emojiScrollView:(id)arg1 didSelectedEmoji:(id)arg2 positionInScreen:(struct CGRect)arg3;
- (void)refreshComponentParam;
- (void)onEndEditButtonClick:(id)arg1;
- (void)getPublishInfo:(id)arg1;
- (void)reset;
- (void)getEditActionResult:(id)arg1;
- (void)buttonClicked;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

