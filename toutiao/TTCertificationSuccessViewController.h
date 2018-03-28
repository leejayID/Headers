//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedScrollView, SSThemedTextView, SSThemedView, TTCertificationOperationView, TTCertificationSuccessBottomView;

@interface TTCertificationSuccessViewController : SSViewControllerBase <UIAlertViewDelegate, UIScrollViewDelegate>
{
    _Bool _alreadyCertificationV;
    CDUnknownBlockType _operationViewClick;
    CDUnknownBlockType _certificationGetVClick;
    NSString *_occupationalText;
    NSString *_certificationText;
    NSString *_certificationResultText;
    NSString *_certificationTipText;
    NSString *_authType;
    SSThemedView *_topView;
    SSThemedImageView *_topIconView;
    TTCertificationSuccessBottomView *_bottomView;
    SSThemedView *_bottomBackgroundView;
    SSThemedImageView *_tipBackImageView;
    SSThemedImageView *_tipTriangleImageView;
    SSThemedLabel *_tipTitleLabel;
    SSThemedImageView *_tipIconImageView;
    SSThemedTextView *_tipContentTextView;
    SSThemedLabel *_topViewLabel;
    TTCertificationOperationView *_certificationGetVOperationView;
    SSThemedButton *_questionButton;
    SSThemedScrollView *_scrollView;
}

@property(retain, nonatomic) SSThemedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SSThemedButton *questionButton; // @synthesize questionButton=_questionButton;
@property(retain, nonatomic) TTCertificationOperationView *certificationGetVOperationView; // @synthesize certificationGetVOperationView=_certificationGetVOperationView;
@property(retain, nonatomic) SSThemedLabel *topViewLabel; // @synthesize topViewLabel=_topViewLabel;
@property(retain, nonatomic) SSThemedTextView *tipContentTextView; // @synthesize tipContentTextView=_tipContentTextView;
@property(retain, nonatomic) SSThemedImageView *tipIconImageView; // @synthesize tipIconImageView=_tipIconImageView;
@property(retain, nonatomic) SSThemedLabel *tipTitleLabel; // @synthesize tipTitleLabel=_tipTitleLabel;
@property(retain, nonatomic) SSThemedImageView *tipTriangleImageView; // @synthesize tipTriangleImageView=_tipTriangleImageView;
@property(retain, nonatomic) SSThemedImageView *tipBackImageView; // @synthesize tipBackImageView=_tipBackImageView;
@property(retain, nonatomic) SSThemedView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) TTCertificationSuccessBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) SSThemedImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(retain, nonatomic) SSThemedView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool alreadyCertificationV; // @synthesize alreadyCertificationV=_alreadyCertificationV;
@property(copy, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *certificationTipText; // @synthesize certificationTipText=_certificationTipText;
@property(copy, nonatomic) NSString *certificationResultText; // @synthesize certificationResultText=_certificationResultText;
@property(copy, nonatomic) NSString *certificationText; // @synthesize certificationText=_certificationText;
@property(copy, nonatomic) NSString *occupationalText; // @synthesize occupationalText=_occupationalText;
@property(copy, nonatomic) CDUnknownBlockType certificationGetVClick; // @synthesize certificationGetVClick=_certificationGetVClick;
@property(copy, nonatomic) CDUnknownBlockType operationViewClick; // @synthesize operationViewClick=_operationViewClick;
- (void).cxx_destruct;
- (void)certificationGetViewClick;
- (void)modifyOperationViewClick;
- (void)updateTipTextTextAttributes;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (void)updateFrame;
- (void)viewWillLayoutSubviews;
- (void)setupSubview;
- (void)themeChanged:(id)arg1;
- (void)questionButtonClick:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
