//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSString;

@interface MBKIdAlertModel : NSObject
{
    NSString *_title;
    NSAttributedString *_subTitle;
    NSAttributedString *_continueTitle;
    NSString *_creatTitle;
    NSDictionary *_dictModel;
}

@property(retain, nonatomic) NSDictionary *dictModel; // @synthesize dictModel=_dictModel;
@property(retain, nonatomic) NSString *creatTitle; // @synthesize creatTitle=_creatTitle;
@property(retain, nonatomic) NSAttributedString *continueTitle; // @synthesize continueTitle=_continueTitle;
@property(retain, nonatomic) NSAttributedString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)getPhoneNumber;
- (id)dealWithString:(id)arg1;
- (id)getContinueTitle;
- (id)getSubtitle;
- (void)initWithModel;
- (id)initWithDictModel:(id)arg1;

@end

