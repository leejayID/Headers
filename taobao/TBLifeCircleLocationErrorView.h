//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TBLifeCircleLocationErrorView : UIView
{
    CDUnknownBlockType _onCancelClickedBlock;
    CDUnknownBlockType _onComfirmClickedBlock;
    UIView *_alertView;
    UILabel *_titleLabel;
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UIButton *_cancelButton;
    UIButton *_comfirButton;
}

@property(retain, nonatomic) UIButton *comfirButton; // @synthesize comfirButton=_comfirButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) CDUnknownBlockType onComfirmClickedBlock; // @synthesize onComfirmClickedBlock=_onComfirmClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType onCancelClickedBlock; // @synthesize onCancelClickedBlock=_onCancelClickedBlock;
- (void).cxx_destruct;
- (void)comfirButtonClciked;
- (void)cancelButtonClciked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

