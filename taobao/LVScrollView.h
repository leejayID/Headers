//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CAShapeLayer, LVScrollViewDelegate, LuaViewCore, NSString;

@interface LVScrollView : UIScrollView <UIScrollViewDelegate, LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    unsigned long long _lv_align;
    CAShapeLayer *_lv_shapeLayer;
    id _lvScrollViewDelegate;
    LVScrollViewDelegate *_scrollViewDelegate;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (const struct luaL_Reg *)memberFunctions;
@property(retain, nonatomic) LVScrollViewDelegate *scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id lvScrollViewDelegate; // @synthesize lvScrollViewDelegate=_lvScrollViewDelegate;
@property(retain, nonatomic) CAShapeLayer *lv_shapeLayer; // @synthesize lv_shapeLayer=_lv_shapeLayer;
@property(nonatomic) unsigned long long lv_align; // @synthesize lv_align=_lv_align;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)dealloc;
- (id)init:(struct lua_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

