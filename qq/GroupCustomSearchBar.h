//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/SubMemInputTextFieldDelegate-Protocol.h>

@class GroupSubMemSearchInput, NSString, QQGroupOrgSelectContentView;
@protocol MemCustomSearchBarDelegate;

@interface GroupCustomSearchBar : UIView <SubMemInputTextFieldDelegate>
{
    QQGroupOrgSelectContentView *_subMemHeaderSelectedView;
    GroupSubMemSearchInput *_subMemSearchInput;
    id <MemCustomSearchBarDelegate> _memCustomSearchBarDelegate;
    unsigned long long _groupCode;
    _Bool _deleteAvatarflag;
    int _xo;
}

- (void)textFieldCallback:(id)arg1 state:(int)arg2;
- (void)resignInputTextField:(_Bool)arg1 andKeyBoard:(_Bool)arg2;
- (void)refreshMemCustomSearchBar:(int)arg1;
- (void)loadMemberHeadDataSource:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 SearchBarDelegate:(id)arg2 SelectContentViewDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deleteAvatarflag; // @dynamic deleteAvatarflag;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <MemCustomSearchBarDelegate> memCustomSearchBarDelegate; // @dynamic memCustomSearchBarDelegate;
@property(readonly) Class superclass;

@end

