//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class APRichTextLabel, MASViewConstraint, MVSeatOrderCodeLabelView, UIButton, UIImageView, UILabel;

@interface MVTicketRemindDetailRowCell : UITableViewCell
{
    UIButton *_noMoreButton;
    UIButton *_laterButton;
    UILabel *_titleLabel;
    UIImageView *_qrImageView;
    MVSeatOrderCodeLabelView *_codeView;
    APRichTextLabel *_salegoodLabel;
    CDUnknownBlockType _noMoreBlock;
    CDUnknownBlockType _laterBlock;
    MASViewConstraint *_codeTopConstraint;
    MASViewConstraint *_codeBottomConstraint;
}

@property(retain, nonatomic) MASViewConstraint *codeBottomConstraint; // @synthesize codeBottomConstraint=_codeBottomConstraint;
@property(retain, nonatomic) MASViewConstraint *codeTopConstraint; // @synthesize codeTopConstraint=_codeTopConstraint;
@property(copy, nonatomic) CDUnknownBlockType laterBlock; // @synthesize laterBlock=_laterBlock;
@property(copy, nonatomic) CDUnknownBlockType noMoreBlock; // @synthesize noMoreBlock=_noMoreBlock;
@property(retain, nonatomic) APRichTextLabel *salegoodLabel; // @synthesize salegoodLabel=_salegoodLabel;
@property(retain, nonatomic) MVSeatOrderCodeLabelView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) UIImageView *qrImageView; // @synthesize qrImageView=_qrImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *laterButton; // @synthesize laterButton=_laterButton;
@property(retain, nonatomic) UIButton *noMoreButton; // @synthesize noMoreButton=_noMoreButton;
- (void).cxx_destruct;
- (void)later:(id)arg1;
- (void)noMore:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
