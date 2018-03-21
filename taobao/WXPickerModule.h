//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIPickerViewDelegate-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSArray, NSString, UIColor, UIDatePicker, UIPickerView, UIView, WXSDKInstance;

@interface WXPickerModule : NSObject <WXModuleProtocol, UIPickerViewDelegate>
{
    _Bool _isAnimating;
    WXSDKInstance *weexInstance;
    NSString *_pickerType;
    UIView *_focusToView;
    UIPickerView *_picker;
    UIView *_backgroundView;
    UIView *_pickerView;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_cancelTitle;
    NSString *_confirmTitle;
    UIColor *_cancelTitleColor;
    UIColor *_confirmTitleColor;
    UIColor *_titleBackgroundColor;
    double _height;
    UIColor *_textColor;
    UIColor *_selectionColor;
    NSArray *_items;
    long long _index;
    CDUnknownBlockType _callback;
    UIDatePicker *_datePicker;
    long long _datePickerMode;
}

+ (id)wx_export_method_69;
+ (id)wx_export_method_68;
+ (id)wx_export_method_67;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
@property(retain, nonatomic) UIColor *confirmTitleColor; // @synthesize confirmTitleColor=_confirmTitleColor;
@property(retain, nonatomic) UIColor *cancelTitleColor; // @synthesize cancelTitleColor=_cancelTitleColor;
@property(copy, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) UIView *focusToView; // @synthesize focusToView=_focusToView;
@property(retain, nonatomic) NSString *pickerType; // @synthesize pickerType=_pickerType;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)doneDatePicker:(id)arg1;
- (void)cancelDatePicker:(id)arg1;
- (void)configDatePickerView;
- (void)createDatePicker:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)datepick:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pickTime:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pickDate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)createbackgroundView;
- (id)createPickerView;
- (void)configPickerView;
- (id)convertItem:(id)arg1;
- (_Bool)isRightItems:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)hide;
- (void)show;
- (void)createPicker:(id)arg1 index:(long long)arg2;
- (void)SetColorDelay:(id)arg1;
- (void)handleA11yFocusback:(id)arg1;
- (void)pick:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
