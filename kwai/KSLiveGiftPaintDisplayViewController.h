//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KSLiveGiftPaintDisplayView;

@interface KSLiveGiftPaintDisplayViewController : UIViewController
{
    _Bool _displayGifts;
    long long _filter;
    KSLiveGiftPaintDisplayView *_paintView;
}

@property(retain, nonatomic) KSLiveGiftPaintDisplayView *paintView; // @synthesize paintView=_paintView;
@property(nonatomic) _Bool displayGifts; // @synthesize displayGifts=_displayGifts;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)showPaintGiftWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

