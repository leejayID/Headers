//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSFirstRewardView, UIButton, UILabel;
@protocol GiftDispalyBottomViewDelegate;

@interface HTSLiveGiftBottomView : UIView
{
    id <GiftDispalyBottomViewDelegate> _delegate;
    UILabel *_accountBalanceLabel;
    UIButton *_sendButton;
    HTSFirstRewardView *_banner;
}

@property(nonatomic) __weak HTSFirstRewardView *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *accountBalanceLabel; // @synthesize accountBalanceLabel=_accountBalanceLabel;
@property(nonatomic) __weak id <GiftDispalyBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldDisplaySendButton:(_Bool)arg1;
- (void)refreshFirstChargeView;
- (void)refreshLeftCountLabel:(unsigned long long)arg1;
- (void)sendButtonTouchupInside:(id)arg1;
- (void)rechargeAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

