//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBTextAttachmentView-Protocol.h"

@class NSString, UIImageView, WBContentImageView, WBTimelineURL;

@interface WBTimelineMiniCardView : UIView <WBTextAttachmentView>
{
    _Bool _attachmentViewInvisible;
    WBTimelineURL *_itemURL;
    WBContentImageView *_iconImageView;
    UIImageView *_accessoryView;
}

+ (id)displayableImageForTimelineURL:(id)arg1;
+ (double)defaultFontSize;
+ (struct UIEdgeInsets)defaultTextInsets;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) WBContentImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WBTimelineURL *itemURL; // @synthesize itemURL=_itemURL;
@property(nonatomic) _Bool attachmentViewInvisible; // @synthesize attachmentViewInvisible=_attachmentViewInvisible;
- (void).cxx_destruct;
- (void)attachmentViewWillRemove;
- (void)didMoveToSuperview;
- (void)reloadData;
- (void)layoutSubviews;
- (struct CGRect)iconFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

