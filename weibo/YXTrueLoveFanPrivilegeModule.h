//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModule.h"

@class UILabel, UIView;

@interface YXTrueLoveFanPrivilegeModule : YXTrueLoveBaseModule
{
    _Bool _isShowFansGroup;
    UIView *_leftLineView;
    UILabel *_fanprivilege;
    UILabel *_fanprivilege1;
    UILabel *_fanprivilege2;
    UILabel *_fanprivilege3;
    UILabel *_fanprivilege4;
    UIView *_contentView;
    UIView *_progressColorView;
    UIView *_rightLineView;
}

@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *progressColorView; // @synthesize progressColorView=_progressColorView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *fanprivilege4; // @synthesize fanprivilege4=_fanprivilege4;
@property(retain, nonatomic) UILabel *fanprivilege3; // @synthesize fanprivilege3=_fanprivilege3;
@property(retain, nonatomic) UILabel *fanprivilege2; // @synthesize fanprivilege2=_fanprivilege2;
@property(retain, nonatomic) UILabel *fanprivilege1; // @synthesize fanprivilege1=_fanprivilege1;
@property(retain, nonatomic) UILabel *fanprivilege; // @synthesize fanprivilege=_fanprivilege;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(nonatomic) _Bool isShowFansGroup; // @synthesize isShowFansGroup=_isShowFansGroup;
- (void).cxx_destruct;
- (double)height;
- (void)refreshViewData;
- (void)setData:(id)arg1;
- (void)initView;
- (id)initWithWidth:(double)arg1 type:(long long)arg2 container:(id)arg3;

@end

