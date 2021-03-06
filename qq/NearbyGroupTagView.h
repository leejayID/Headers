//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class QQAsynUrlImageView, UIImage, UILabel;
@protocol NearbyGroupTagViewDelegate;

@interface NearbyGroupTagView : UIButton
{
    int _tagStyle;
    _Bool _bEditing;
    UIImage *_defaultImage;
    QQAsynUrlImageView *_logoUrlView;
    long long _index;
    int _xo;
    UILabel *_titleLabel;
    id <NearbyGroupTagViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NearbyGroupTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)buttonAction;
- (id)initWithStyle:(int)arg1 Frame:(struct CGRect)arg2;
- (void)layoutViewWithImgUrl:(id)arg1 withText:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *defaultImage; // @dynamic defaultImage;
@property(nonatomic) long long index; // @dynamic index;
@property(retain, nonatomic) QQAsynUrlImageView *logoUrlView; // @dynamic logoUrlView;

@end

