//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRGetCreditCardDetailReqVO : CCRBaseReqVO
{
    _Bool _needAddNewCard;
    NSString *_bankMark;
    NSString *_holderName;
    NSString *_cardNumber;
    NSString *_cardNumberType;
}

@property(nonatomic) _Bool needAddNewCard; // @synthesize needAddNewCard=_needAddNewCard;
@property(retain, nonatomic) NSString *cardNumberType; // @synthesize cardNumberType=_cardNumberType;
@property(retain, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *bankMark; // @synthesize bankMark=_bankMark;
- (void).cxx_destruct;

@end
