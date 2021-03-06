//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol MultiMemberInviteGroupKitDelegate;

@interface InviteGroupKit : UIView
{
    UIButton *_btn;
    UILabel *_label;
    UIView *_bottomLine;
    id <MultiMemberInviteGroupKitDelegate> _groupKitDelegate;
}

@property(nonatomic) __weak id <MultiMemberInviteGroupKitDelegate> groupKitDelegate; // @synthesize groupKitDelegate=_groupKitDelegate;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
- (void).cxx_destruct;
- (void)didPressedUp;
- (void)didPressedUpOutSide;
- (void)didPressedDown;
- (void)layoutWithParentSize:(struct CGSize)arg1;
- (id)init;

@end

