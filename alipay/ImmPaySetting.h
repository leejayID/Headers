//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPAutoRotateVC.h"

#import "MQPAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ImmPaySettingService, MQPAlertView, NSMutableArray, NSString, UISwitch, UITableView, UITapGestureRecognizer, UIView;

@interface ImmPaySetting : MMPAutoRotateVC <UIGestureRecognizerDelegate, MQPAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UISwitch *_jfbSwitch;
    UISwitch *_fpPaySwitch;
    ImmPaySettingService *_settingService;
    NSString *_settingAction;
    UITableView *_tableView;
    UIView *_asiView;
    MQPAlertView *_fpCloseAlert;
    UITapGestureRecognizer *_tap;
    NSMutableArray *_dataSource;
    struct _NSRange _linkRange;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) MQPAlertView *fpCloseAlert; // @synthesize fpCloseAlert=_fpCloseAlert;
@property(retain, nonatomic) UIView *asiView; // @synthesize asiView=_asiView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *settingAction; // @synthesize settingAction=_settingAction;
@property(nonatomic) __weak ImmPaySettingService *settingService; // @synthesize settingService=_settingService;
@property(retain, nonatomic) UISwitch *fpPaySwitch; // @synthesize fpPaySwitch=_fpPaySwitch;
@property(retain, nonatomic) UISwitch *jfbSwitch; // @synthesize jfbSwitch=_jfbSwitch;
- (void).cxx_destruct;
- (void)openLink;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)configureFingerprintClickableLabel:(id)arg1;
- (void)mqpAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doClickNaviLeftAction:(id)arg1;
- (void)onJfbSwitchValueChanged:(id)arg1;
- (void)triggerFingerprintSwitch:(_Bool)arg1;
- (void)onFingerprintPaySwitchValueChanged:(id)arg1;
- (void)onShowSmartBraceletPay;
- (void)onShowSmartWatchPay;
- (void)onShowAutoDebit;
- (void)onShowQRCodeSonicPay;
- (void)onShowChannelSetting;
- (void)onShowNoPwdCreditSetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updatePaySettingAsi;
- (void)updatePaySettingAll;
@property(readonly, nonatomic) _Bool showBracelet; // @dynamic showBracelet;
@property(readonly, nonatomic) _Bool showWatchPay; // @dynamic showWatchPay;
@property(readonly, nonatomic) _Bool showFPPay; // @dynamic showFPPay;
@property(readonly, nonatomic) _Bool showAutoDebit; // @dynamic showAutoDebit;
@property(readonly, nonatomic) _Bool showQRCodeSonicPaySection; // @dynamic showQRCodeSonicPaySection;
@property(readonly, nonatomic) _Bool showNopwdSection; // @dynamic showNopwdSection;
- (_Bool)disablePanBack;
- (void)setupDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSetting:(id)arg1 andAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

