//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MFWidgetPluginProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol MFWidgetPluginProtocol;

@interface CLifeArticleView : UIView <UIGestureRecognizerDelegate, MFWidgetPluginProtocol>
{
    id <MFWidgetPluginProtocol> _delegate;
    NSMutableArray *_articleItems;
    NSMutableArray *_articleLines;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(retain, nonatomic) NSMutableArray *articleLines; // @synthesize articleLines=_articleLines;
@property(retain, nonatomic) NSMutableArray *articleItems; // @synthesize articleItems=_articleItems;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleSingleFingerEvent:(id)arg1;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
