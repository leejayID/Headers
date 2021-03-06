//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKParkingEntranceModel, UIButton, UIImageView, UILabel;

@interface MBKParkingEntranceView : UIView
{
    MBKParkingEntranceModel *_model;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowsImageView;
    UIButton *_entranceButton;
    CDUnknownBlockType _entranceButtonTapped;
}

@property(copy, nonatomic) CDUnknownBlockType entranceButtonTapped; // @synthesize entranceButtonTapped=_entranceButtonTapped;
@property(retain, nonatomic) UIButton *entranceButton; // @synthesize entranceButton=_entranceButton;
@property(retain, nonatomic) UIImageView *arrowsImageView; // @synthesize arrowsImageView=_arrowsImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MBKParkingEntranceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)entranceButtonClick:(id)arg1;
- (void)makeConstraints;
- (void)makeLayerStyles;
- (id)initWithModel:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;

@end

