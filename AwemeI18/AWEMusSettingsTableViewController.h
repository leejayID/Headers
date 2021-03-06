//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEProgressLoadingView, AWESettingTableViewCell, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface AWEMusSettingsTableViewController : UITableViewController <AWEUserMessage, BTDRouterViewControllerProtocol>
{
    UIView *_topGapView;
    UILabel *_versionLabel;
    UIButton *_buttonAdvancedSetting;
    AWEProgressLoadingView *_clearProgressView;
    NSArray *_cellTitleArray;
    NSMutableArray *_cellArray;
    AWESettingTableViewCell *_changeLanguageCell;
    AWESettingTableViewCell *_logOutCell;
    AWESettingTableViewCell *_cleanCacheCell;
    AWEProgressLoadingView *_appleMusicLoadingView;
}

@property(retain, nonatomic) AWEProgressLoadingView *appleMusicLoadingView; // @synthesize appleMusicLoadingView=_appleMusicLoadingView;
@property(retain, nonatomic) AWESettingTableViewCell *cleanCacheCell; // @synthesize cleanCacheCell=_cleanCacheCell;
@property(retain, nonatomic) AWESettingTableViewCell *logOutCell; // @synthesize logOutCell=_logOutCell;
@property(retain, nonatomic) AWESettingTableViewCell *changeLanguageCell; // @synthesize changeLanguageCell=_changeLanguageCell;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(copy, nonatomic) NSArray *cellTitleArray; // @synthesize cellTitleArray=_cellTitleArray;
@property(retain, nonatomic) AWEProgressLoadingView *clearProgressView; // @synthesize clearProgressView=_clearProgressView;
@property(retain, nonatomic) UIButton *buttonAdvancedSetting; // @synthesize buttonAdvancedSetting=_buttonAdvancedSetting;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(retain, nonatomic) UIView *topGapView; // @synthesize topGapView=_topGapView;
- (void).cxx_destruct;
- (void)_buttonAdvancedSettingClicked;
- (void)backBtnClick:(id)arg1;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)tapLogOutCell;
- (void)tapCleanCacheCell;
- (void)tapChanegeLanguageCell;
- (void)tapConnectToAppleMusic;
- (void)tapCopyrightPolicy;
- (void)tapPrivacyPolicy;
- (void)tapUserServiceCell;
- (void)tapPrivacySettings;
- (void)tapPushSettingCell;
- (void)tapFeedBackCell;
- (void)logoutAction:(id)arg1;
- (void)didFinishLogout;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)updateSwitchButton:(id)arg1;
- (void)updateCurrentLanguageLabel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

