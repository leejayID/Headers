//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAdFormAction-Protocol.h"

@class NSNumber, NSString;

@interface TTAdAppointAlertModel : NSObject <TTAdFormAction>
{
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_formUrl;
    NSNumber *_formWidth;
    NSNumber *_formHeight;
    NSNumber *_formSizeValid;
}

@property(retain, nonatomic) NSNumber *formSizeValid; // @synthesize formSizeValid=_formSizeValid;
@property(retain, nonatomic) NSNumber *formHeight; // @synthesize formHeight=_formHeight;
@property(retain, nonatomic) NSNumber *formWidth; // @synthesize formWidth=_formWidth;
@property(copy, nonatomic) NSString *formUrl; // @synthesize formUrl=_formUrl;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (id)initWithAdId:(id)arg1 logExtra:(id)arg2 formUrl:(id)arg3 width:(id)arg4 height:(id)arg5 sizeValid:(id)arg6;
- (id)initWithFormUrl:(id)arg1 width:(id)arg2 height:(id)arg3 sizeValid:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
