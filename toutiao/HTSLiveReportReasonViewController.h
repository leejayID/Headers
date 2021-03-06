//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HTSLiveReportReasonManager, NSArray, NSDictionary, NSString, UIButton, UITableView, UIView;

@interface HTSLiveReportReasonViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    HTSLiveReportReasonManager *_reportReasonManager;
    NSDictionary *_reportParams;
    UITableView *_tableView;
    UIButton *_submitButton;
    UIButton *_backButton;
    UIView *_indicatorMaskView;
    long long _selectedIndex;
    NSArray *_reportTypeArray;
}

+ (id)controllerWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *reportTypeArray; // @synthesize reportTypeArray=_reportTypeArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak UIView *indicatorMaskView; // @synthesize indicatorMaskView=_indicatorMaskView;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSDictionary *reportParams; // @synthesize reportParams=_reportParams;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestReport:(id)arg1;
- (void)submitButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)reloadReasonInfo;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

