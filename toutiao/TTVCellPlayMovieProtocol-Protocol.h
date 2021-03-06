//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIView;
@protocol TTVCellPlayMovieDelegate;

@protocol TTVCellPlayMovieProtocol <NSObject>
@property(nonatomic) __weak NSObject<TTVCellPlayMovieDelegate> *delegate;
@property(retain, nonatomic) UIView *logo;
@property(retain, nonatomic) UIView *movieView;
- (void)addCommodity;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (_Bool)isPlayingError;
- (_Bool)isPlayingFinished;
- (_Bool)isPaused;
- (void)didEndDisplaying;
- (void)invalideMovieViewAfterDelay:(_Bool)arg1;
- (_Bool)isPlaying;
- (_Bool)isRotating;
- (_Bool)isFullScreen;
- (UIView *)currentMovieView;
- (void)play;

@optional
- (void)setVideoWatchCount:(long long)arg1;
- (void)setVideoTitle:(NSString *)arg1;
@end

