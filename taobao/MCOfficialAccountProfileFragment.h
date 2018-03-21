//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFragment.h"

@class MCOfficailAccountProfilePresenter, NSString;

@interface MCOfficialAccountProfileFragment : MCBaseFragment
{
    NSString *_utPageName;
    NSString *_spmA;
    NSString *_spmB;
    NSString *_brandhub_sm;
    MCOfficailAccountProfilePresenter *_presenter;
}

@property(retain, nonatomic) MCOfficailAccountProfilePresenter *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSString *brandhub_sm; // @synthesize brandhub_sm=_brandhub_sm;
@property(copy, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(copy, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(copy, nonatomic) NSString *utPageName; // @synthesize utPageName=_utPageName;
- (void).cxx_destruct;
- (id)getConponetViews;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 officialID:(id)arg3 baseVC:(id)arg4 pageName:(id)arg5 utPageName:(id)arg6 spmA:(id)arg7 spmB:(id)arg8 brandhub_sm:(id)arg9;
- (void)dealloc;

@end
