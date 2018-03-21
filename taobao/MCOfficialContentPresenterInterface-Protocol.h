//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenterProtocol-Protocol.h"
#import "MCMessageListPresenterProtocol-Protocol.h"

@class NSString, UIView, YHMuticastDelegate;
@protocol MCOfficialConentDelegate, MCOfficialContentEmptyViewProtocol, MCOfficialContentFootViewProtocol, MCOfficialHeaderViewProtocol, MCOfficialLoadingViewDelegate;

@protocol MCOfficialContentPresenterInterface <MCBasePresenterProtocol, MCMessageListPresenterProtocol>
@property(copy, nonatomic) NSString *brandhub_sm;
@property(retain, nonatomic) YHMuticastDelegate<MCOfficialLoadingViewDelegate> *loadingViewDelegates;
@property(retain, nonatomic) UIView *emptyFootview;
@property(nonatomic) __weak id <MCOfficialConentDelegate> officialContentDelegate;
@property(nonatomic) __weak id <MCOfficialContentFootViewProtocol> footviewDelegate;
@property(nonatomic) _Bool isHaveLoadMessage;
@property(nonatomic) _Bool isViewDidLoad;
@property(nonatomic) __weak id <MCOfficialContentEmptyViewProtocol> emptyViewDelegate;
@property(retain, nonatomic) UIView<MCOfficialHeaderViewProtocol> *headerView;
@property(nonatomic) _Bool isHistoryMessage;
@property(nonatomic) unsigned long long sortRules;
- (void)reloadMessageFromFistMessage;

@optional
- (void)tapNotReceivedBarCloseButton;
@end
