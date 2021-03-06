//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol ALCActionHandler;

@interface ALCZmTabView : UIView
{
    NSArray *_buttons;
    NSArray *_tabs;
    id <ALCActionHandler> _delegate;
}

@property(nonatomic) __weak id <ALCActionHandler> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)refreshWithTabs:(id)arg1;
- (void)loadContentView;
- (id)initWithFrame:(struct CGRect)arg1 tabs:(id)arg2 delegate:(id)arg3;

@end

