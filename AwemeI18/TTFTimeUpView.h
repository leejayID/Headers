//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFantasyImageView;

@interface TTFTimeUpView : UIView
{
    TTFantasyImageView *_headerImageView;
    TTFantasyImageView *_bodyImageView;
}

@property(retain, nonatomic) TTFantasyImageView *bodyImageView; // @synthesize bodyImageView=_bodyImageView;
@property(retain, nonatomic) TTFantasyImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

