//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, TBInAppNotifyModel, UIButton, UIImageView, UILabel;
@protocol TBNotifyViewDelegate;

@interface TBNotifyView : UIView
{
    _Bool _isTouched;
    _Bool _isDelayed;
    struct CGPoint _prePoint;
    struct CGPoint _orignalPoint;
    int _moveTime;
    double _showTime;
    NSTimer *_closeTimer;
    _Bool _isShow;
    NSString *_identifier;
    NSString *_bizId;
    id <TBNotifyViewDelegate> _delegate;
    UIView *_effectView;
    UIView *_headView;
    UIView *_backgroundView;
    UIImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_timeLabel;
    UIButton *_actionButton;
    UIView *_reCallBackgroundView;
    UILabel *_reCallLabel;
    NSString *_loadingHeadUrl;
    double _realHeight;
    TBInAppNotifyModel *_model;
}

@property(retain, nonatomic) TBInAppNotifyModel *model; // @synthesize model=_model;
@property(nonatomic) double realHeight; // @synthesize realHeight=_realHeight;
@property(copy, nonatomic) NSString *loadingHeadUrl; // @synthesize loadingHeadUrl=_loadingHeadUrl;
@property(retain, nonatomic) UILabel *reCallLabel; // @synthesize reCallLabel=_reCallLabel;
@property(retain, nonatomic) UIView *reCallBackgroundView; // @synthesize reCallBackgroundView=_reCallBackgroundView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) __weak id <TBNotifyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(readonly, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)swipDidHappened:(id)arg1;
- (void)dismissNotifyView:(_Bool)arg1;
- (void)showNofiyView;
- (void)closeTimerAction:(id)arg1;
- (void)tapOnActionButton:(id)arg1;
- (void)tapOnNotifyView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)gradientViewForView:(id)arg1 leftColor:(id)arg2 rightColor:(id)arg3;
- (void)adjustComponetviewFrame;
- (void)layoutContentAndSetData:(id)arg1;
- (id)initWithParam:(id)arg1 identifier:(id)arg2;

@end

