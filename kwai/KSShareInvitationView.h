//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSUser, NSString, UIImageView, UILabel;

@interface KSShareInvitationView : UIView
{
    CDUnknownBlockType _snapshotSucceed;
    KSUser *_user;
    UILabel *_titleLabel;
    UILabel *_questionLabel;
    UIView *_questionContentView;
    UIImageView *_logoImageView;
    UIImageView *_avatarImageView;
    UIImageView *_avatarBgView;
    UIImageView *_invitationContentImageView;
    UILabel *_invitationTipLabel;
    UILabel *_invitationCodeLabel;
    UIImageView *_QRCodeImageView;
    UILabel *_bottomTipLabel;
    NSString *_anchorName;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(retain, nonatomic) UILabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
@property(retain, nonatomic) UIImageView *QRCodeImageView; // @synthesize QRCodeImageView=_QRCodeImageView;
@property(retain, nonatomic) UILabel *invitationCodeLabel; // @synthesize invitationCodeLabel=_invitationCodeLabel;
@property(retain, nonatomic) UILabel *invitationTipLabel; // @synthesize invitationTipLabel=_invitationTipLabel;
@property(retain, nonatomic) UIImageView *invitationContentImageView; // @synthesize invitationContentImageView=_invitationContentImageView;
@property(retain, nonatomic) UIImageView *avatarBgView; // @synthesize avatarBgView=_avatarBgView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *questionContentView; // @synthesize questionContentView=_questionContentView;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KSUser *user; // @synthesize user=_user;
@property(copy, nonatomic) CDUnknownBlockType snapshotSucceed; // @synthesize snapshotSucceed=_snapshotSucceed;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithTitle:(id)arg1 anchorName:(id)arg2 question:(id)arg3;

@end
