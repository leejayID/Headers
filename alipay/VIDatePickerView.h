//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface VIDatePickerView : UIView
{
    CDUnknownBlockType _complete;
    NSString *_seletedDate;
}

+ (id)datePickerViewWith:(CDUnknownBlockType)arg1;
@property(retain, nonatomic, getter=seletedDate) NSString *seletedDate; // @synthesize seletedDate=_seletedDate;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (void)dealloc;
- (id)colorWithRGB:(int)arg1;
- (void)selectedDate:(id)arg1;
- (void)initDatePickerView;
- (id)init;

@end
