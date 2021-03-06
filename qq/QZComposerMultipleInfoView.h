//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, QZMoodComposeViewPresenter, UIButton, UIViewController;
@protocol QZComposerMultipleInfoViewDelegate;

@interface QZComposerMultipleInfoView : UIView
{
    QZMoodComposeViewPresenter *_viewModel;
    UIButton *_tagButton;
    UIButton *_LBSButton;
    UIButton *_permissionButton;
    NSDictionary *_params;
    UIViewController<QZComposerMultipleInfoViewDelegate> *_delegate;
}

@property(nonatomic) __weak UIViewController<QZComposerMultipleInfoViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (id)permissionIconPath;
- (id)permissionString;
- (struct _NSRange)rangeOfDropOneCharacterForString:(id)arg1;
- (void)refreshInfoView;
- (id)buttonFor:(unsigned long long)arg1;
- (void)createInfoView;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

