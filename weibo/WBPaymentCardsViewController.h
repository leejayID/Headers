//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

@class UIImageView, UILabel, UIView, WBUIControl;

@interface WBPaymentCardsViewController : WBCardListViewController
{
    UILabel *tipLabel;
    UIImageView *tipIconView;
    UIView *tipsView;
    WBUIControl *tipsControl;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)paymentInsure;
- (void)configSubviewsFrame:(struct CGSize)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

