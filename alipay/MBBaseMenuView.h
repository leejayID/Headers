//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MBMenuButtonDelegate-Protocol.h"
#import "MBPopMenuViewDelegate-Protocol.h"

@class MBPopMenuView, NSArray, NSString, UIControl;

@interface MBBaseMenuView : UIView <MBMenuButtonDelegate, MBPopMenuViewDelegate>
{
    NSArray *_menuItems;
    UIView *_popMenuShowView;
    long long _selectMenuIndex;
    MBPopMenuView *_popMenuView;
    UIControl *_popMenuControl;
    unsigned long long _appType;
}

@property(readonly, nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(readonly, retain, nonatomic) UIControl *popMenuControl; // @synthesize popMenuControl=_popMenuControl;
@property(readonly, retain, nonatomic) MBPopMenuView *popMenuView; // @synthesize popMenuView=_popMenuView;
@property(readonly, nonatomic) long long selectMenuIndex; // @synthesize selectMenuIndex=_selectMenuIndex;
@property(readonly, nonatomic) __weak UIView *popMenuShowView; // @synthesize popMenuShowView=_popMenuShowView;
@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (void)baseMenuButtonReset;
- (_Bool)resetInitState;
- (void)popMenuButtonPressed;
- (void)bgControlPressed;
- (void)hidePopMenuView:(id)arg1;
- (void)showPopMenuView:(id)arg1;
- (void)buttonNoSubMenusPressed;
- (void)buttonHasSubMenusPressed:(long long)arg1;
- (id)initWithMenuView:(id)arg1 popMenuShowView:(id)arg2 appType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

