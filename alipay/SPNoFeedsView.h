//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPIPluggableCard-Protocol.h"

@class NSString, UILabel;
@protocol SPICardContainer;

@interface SPNoFeedsView : UIView <SPIPluggableCard>
{
    id <SPICardContainer> _container;
    id _containerUserData;
    long long _cardTag;
    UILabel *_hintLabel;
}

@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) long long cardTag; // @synthesize cardTag=_cardTag;
@property(retain, nonatomic) id containerUserData; // @synthesize containerUserData=_containerUserData;
@property(nonatomic) __weak id <SPICardContainer> container; // @synthesize container=_container;
- (void).cxx_destruct;
- (long long)getTag;
- (void)setTag:(long long)arg1;
- (id)controlWithTag:(long long)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (id)viewForCard;
- (double)heightForCard;
- (id)getUserData;
- (void)setUserData:(id)arg1;
- (void)setCardContainer:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
