//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWESuggestMusicView, NSString, UIButton;

@interface AWESuggestMusicViewController : UIViewController <TTTAttributedLabelDelegate>
{
    UIButton *_clickSelfBtn;
    AWESuggestMusicView *_suggestView;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) AWESuggestMusicView *suggestView; // @synthesize suggestView=_suggestView;
@property(retain, nonatomic) UIButton *clickSelfBtn; // @synthesize clickSelfBtn=_clickSelfBtn;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)clickSubmit;
- (void)clickCancel;
- (void)clickSuggestView;
- (void)clickSelf;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
