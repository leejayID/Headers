//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MOBILECHATEmotionModelVO, NSString, UIActivityIndicatorView, UIImage, UIImageView;

@interface EmotionShowView : UIView
{
    NSString *_emotionId;
    NSString *_emotionFid;
    NSString *_packageId;
    _Bool _isPlaying;
    _Bool _isPaused;
    MOBILECHATEmotionModelVO *_emotion;
    UIImageView *_showedView;
    UIActivityIndicatorView *_loadingView;
    long long _showMode;
    UIImage *_showImage;
}

@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
@property(nonatomic) long long showMode; // @synthesize showMode=_showMode;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *showedView; // @synthesize showedView=_showedView;
@property(retain, nonatomic) MOBILECHATEmotionModelVO *emotion; // @synthesize emotion=_emotion;
- (void).cxx_destruct;
- (void)resetImageView;
- (void)setShowViewMode:(long long)arg1;
- (id)getGIFImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)getGIFImageFromCache:(id)arg1;
- (id)getGIFImage:(id)arg1;
- (void)showImageView:(id)arg1;
- (void)setEmotion:(id)arg1 emotionData:(id)arg2;
- (void)continuePlay;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)setFrame:(struct CGRect)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
