//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

@class NSDate, UIControl, UIImageView, UILabel;

@interface NowActivityPendantViewController : QQWebViewController
{
    QQWebViewController *_webViewControlletr;
    _Bool _isH5LoadSucc;
    _Bool _bAreadyShow;
    _Bool _bEnterAnimationComplete;
    UIImageView *_animationImageView;
    UILabel *_enterH5Label;
    UIImageView *_arrowImageView;
    UIControl *_enterControl;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UIControl *enterControl; // @synthesize enterControl=_enterControl;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *enterH5Label; // @synthesize enterH5Label=_enterH5Label;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)onClickEnterControl;
- (void)mqq_ui_pageFinished:(id)arg1;
- (void)showContentView;
- (void)initialAnimation:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;

@end

