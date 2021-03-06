//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, QQVideoRecordButton, UIButton, UILabel;
@protocol QQMediaPickerVideoControlPanelDelegate><QQDynamivcAvatarRecordPanelDelegate;

@interface QQDynamicAvatarRecordPanelView : UIView
{
    UIButton *_cancelBtn;
    QQVideoRecordButton *_startBtn;
    CALayer *_blueCoverLayer;
    CAShapeLayer *_recordProgressLayer;
    UILabel *_timeLabel;
    UIButton *_recordAgainBtn;
    UIButton *_confirmBtn;
    _Bool _isRecording;
    _Bool _hasTouchDown;
    id <QQMediaPickerVideoControlPanelDelegate><QQDynamivcAvatarRecordPanelDelegate> _delegate;
    double _recordProgress;
    long long _recordTime;
}

@property(nonatomic) long long recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) double recordProgress; // @synthesize recordProgress=_recordProgress;
@property(nonatomic) __weak id <QQMediaPickerVideoControlPanelDelegate><QQDynamivcAvatarRecordPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)makeTextButtonWithTitle:(id)arg1;
- (void)showRecorded;
- (void)showRecording;
- (void)showInit;
- (void)onConfirmClicked:(id)arg1;
- (void)onRecordAgainClicked:(id)arg1;
- (void)onEndRecord:(id)arg1;
- (void)onStartRecord;
- (void)onTouchDown:(id)arg1;
- (void)onCancelClicked:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

