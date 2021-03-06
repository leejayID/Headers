//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBizNameSettingBaseViewController.h"

@class APGroupInfo, DTRpcAsyncCaller, NSString;

@interface SCSetNickInGroupController : SPBizNameSettingBaseViewController
{
    APGroupInfo *_groupInfo;
    NSString *_defaultDisplayedNick;
    DTRpcAsyncCaller *_rpcCaller;
    NSString *_defaultNick;
}

@property(retain, nonatomic) NSString *defaultNick; // @synthesize defaultNick=_defaultNick;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(retain, nonatomic) NSString *defaultDisplayedNick; // @synthesize defaultDisplayedNick=_defaultDisplayedNick;
@property(retain, nonatomic) APGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)doRpcSetNickName:(id)arg1;
- (void)baseController:(id)arg1 didSetNewBizName:(id)arg2;
- (id)baseControllerConfigDisplayPattern;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDefaultDisplayNick:(id)arg1;

@end

