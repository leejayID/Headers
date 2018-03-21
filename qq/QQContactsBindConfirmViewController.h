//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/IQSContactsEngineObserver-Protocol.h>

@class NSString;

@interface QQContactsBindConfirmViewController : QQViewController <IQSContactsEngineObserver>
{
    NSString *_bindPhoneCodeStr;
    NSString *_bindCountryCodeStr;
    NSString *_bindedUin;
    int _bindType;
    int _contactsGuideEnterType;
    _Bool _uniFlag;
}

- (void)onCloseButtonClick:(id)arg1;
- (id)createQQContactsBindConfirmViewController:(id)arg1;
- (id)createQQContactsFillVerifyCodeViewController;
- (void)notifyBindPhoneCode:(id)arg1;
- (void)helpButtonPress:(id)arg1;
- (void)bindCancelButtonPress:(id)arg1;
- (void)bindConfirmButtonPress:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPhoneCode:(id)arg1 countryCode:(id)arg2 bindedUin:(id)arg3 bindType:(int)arg4 uniFlag:(_Bool)arg5;

// Remaining properties
@property(readonly, nonatomic) int bindType; // @dynamic bindType;
@property(nonatomic) int contactsGuideEnterType; // @dynamic contactsGuideEnterType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool uniFlag; // @dynamic uniFlag;

@end
