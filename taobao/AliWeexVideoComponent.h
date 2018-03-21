//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBMPBPlayerViewDelegate-Protocol.h"

@class NSString, TBMPBPlayerControlView, TBMPBPlayerView;

@interface AliWeexVideoComponent : WXComponent <TBMPBPlayerViewDelegate>
{
    _Bool _willBuildControlView;
    TBMPBPlayerView *_playerView;
    TBMPBPlayerControlView *_controlView;
}

+ (id)wx_export_method_29;
+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
+ (id)wx_export_method_25;
+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
@property(nonatomic) _Bool willBuildControlView; // @synthesize willBuildControlView=_willBuildControlView;
@property(retain, nonatomic) TBMPBPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) TBMPBPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)playerViewTapped:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)getMuted:(CDUnknownBlockType)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)getCurrentTime:(CDUnknownBlockType)arg1;
- (void)handlePlayerData:(int)arg1 data:(id)arg2;
- (void)handlePlayerEvent:(int)arg1 info:(id)arg2;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateAttributes:(id)arg1;
- (void)cleanPlayerView;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (id)loadView;
- (void)viewWillLoad;
- (void)setupPlayerViewWithAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
