//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface HighBoomFounderEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)getInstance;
- (_Bool)activeHighBoomFontWithModel:(id)arg1;
- (_Bool)convertJsonToHighBoomDrawModelWithModel:(id)arg1;
- (_Bool)unloadHighBoomFontWithModel:(id)arg1;
- (_Bool)loadHighBoomFontWithModel:(id)arg1;
- (_Bool)processHighBoomFontWithModel:(id)arg1 isLoad:(_Bool)arg2;
- (void)drawPendantWithStyleModel:(id)arg1 scaleSize:(double)arg2 highBoomFontModel:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawTextWithStyleModel:(id)arg1 text:(id)arg2 scaleSize:(double)arg3 highBoomFontModel:(id)arg4 context:(struct CGContext *)arg5;
- (void)getImageWithText:(id)arg1 highBoomModel:(id)arg2 canvasSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)syncGetImageWithText:(id)arg1 highBoomModel:(id)arg2 canvasSize:(struct CGSize)arg3;
- (void)dealloc;
- (id)init;

@end
