//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCGroupFixViewProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol MCGroupFixItemViewProtocol, MCGroupFixSlideViewProtocol, MCGroupFixViewDelegate;

@interface MCGroupFixView : UIView <MCGroupFixViewProtocol, UIGestureRecognizerDelegate>
{
    UIView<MCGroupFixSlideViewProtocol> *_slideView;
    UIView<MCGroupFixItemViewProtocol> *_itemView;
    id <MCGroupFixViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MCGroupFixViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView<MCGroupFixItemViewProtocol> *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) UIView<MCGroupFixSlideViewProtocol> *slideView; // @synthesize slideView=_slideView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGestureClick:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
