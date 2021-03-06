//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface KSShortTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _scheduledCancelTask;
    long long _recognizedTapCount;
    CDUnknownBlockType _didRecognizedShortTap;
    CDUnknownBlockType _shortDelayOfTap;
}

@property(copy, nonatomic) CDUnknownBlockType shortDelayOfTap; // @synthesize shortDelayOfTap=_shortDelayOfTap;
@property(copy, nonatomic) CDUnknownBlockType didRecognizedShortTap; // @synthesize didRecognizedShortTap=_didRecognizedShortTap;
- (void).cxx_destruct;
- (void)ks_cancelAfterShortDelay;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_stopCancelTask;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

