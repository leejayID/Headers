//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableRow.h"

#import "APTableSimpleLineItem-Protocol.h"

@class NSString, UIImage;

@interface APTableSimpleLineItem : APTableRow <APTableSimpleLineItem>
{
    NSString *_text;
    NSString *_detailText;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *action; // @dynamic action;
- (void)updateCell:(id)arg1;
- (id)createCell;
- (id)cellReuseIdentifier;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

