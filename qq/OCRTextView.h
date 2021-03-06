//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <QQMainProject/MFMailComposeViewControllerDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol OCRResultViewDelegate;

@interface OCRTextView : UITextView <UITextViewDelegate, QUIActionSheetDelegate, MFMailComposeViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSDate *_tipsDate;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    _Bool _needUpdateTranslation;
    NSArray *_parseArray;
    double _minOffsetTop;
    id <OCRResultViewDelegate> _scrollDelegate;
}

@property(nonatomic) _Bool needUpdateTranslation; // @synthesize needUpdateTranslation=_needUpdateTranslation;
@property(nonatomic) __weak id <OCRResultViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) double minOffsetTop; // @synthesize minOffsetTop=_minOffsetTop;
@property(retain, nonatomic) NSArray *parseArray; // @synthesize parseArray=_parseArray;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)callWithPhoneNumber:(id)arg1;
- (void)actionPasteString:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isValidEmail:(id)arg1;
- (void)sendEmailWithRecipients:(id)arg1;
- (void)handlePhoneNumber:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showToastMessage:(id)arg1;
- (void)handleRange:(id)arg1;
- (void)move:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)ocrSelectTranslate:(id)arg1;
- (void)searchSogou:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

