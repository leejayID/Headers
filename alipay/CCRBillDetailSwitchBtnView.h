//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CCRBillDetailSwitchBtnView : UIView
{
    UIView *_selectedBar;
    long long _redPointIndex;
    UIView *_redPointView;
    NSArray *_btnTitleArray;
    long long _selectedBtnIndex;
    CDUnknownBlockType _clickBtnBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBtnBlock; // @synthesize clickBtnBlock=_clickBtnBlock;
@property long long selectedBtnIndex; // @synthesize selectedBtnIndex=_selectedBtnIndex;
@property(retain, nonatomic) NSArray *btnTitleArray; // @synthesize btnTitleArray=_btnTitleArray;
- (void).cxx_destruct;
- (void)didSelectBtn:(id)arg1;
- (void)addRedPointToButton:(id)arg1;
- (void)setNeedRedDotOnIndex:(long long)arg1;
- (void)updateBtnTitleLabelFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

