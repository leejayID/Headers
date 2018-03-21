//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class UIButton, UIView, UIViewController;

@interface KSPromptViewController : KSBaseViewController
{
    UIView *_contentContainerView;
    UIView *_actionsView;
    UIButton *_acceptButton;
    UIButton *_declineButton;
    UIViewController *_contentViewController;
    CDUnknownBlockType _confirmBlock;
}

@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(readonly, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(readonly, nonatomic) UIView *actionsView; // @synthesize actionsView=_actionsView;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)viewDidLoad;

@end
