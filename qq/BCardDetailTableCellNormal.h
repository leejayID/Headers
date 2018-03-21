//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BCardDetailBaseCell.h>

#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSString, QQSingleTextfield, UIImageView;
@protocol BCardDetailTableCellNormalDelegate;

@interface BCardDetailTableCellNormal : BCardDetailBaseCell <UITextFieldDelegate>
{
    _Bool _limitByUTF8Bytes;
    QQSingleTextfield *_simpleTextField;
    id <BCardDetailTableCellNormalDelegate> _delegate;
    UIImageView *_imageViewAdd;
    unsigned long long _maxLength;
    unsigned long long _maxUTF8Bytes;
    long long _cardType;
}

@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) _Bool limitByUTF8Bytes; // @synthesize limitByUTF8Bytes=_limitByUTF8Bytes;
@property(nonatomic) unsigned long long maxUTF8Bytes; // @synthesize maxUTF8Bytes=_maxUTF8Bytes;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) UIImageView *imageViewAdd; // @synthesize imageViewAdd=_imageViewAdd;
@property(nonatomic) id <BCardDetailTableCellNormalDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQSingleTextfield *simpleTextField; // @synthesize simpleTextField=_simpleTextField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
