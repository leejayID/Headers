//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton;

@interface TTPersonalHomeNavView : SSThemedView
{
    CDUnknownBlockType _backBlock;
    SSThemedButton *_backBtn;
    SSThemedView *_bottomLine;
}

@property(nonatomic) __weak SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak SSThemedButton *backBtn; // @synthesize backBtn=_backBtn;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)back;
- (id)initWithFrame:(struct CGRect)arg1;

@end

