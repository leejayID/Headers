//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSValue, UIView;

@interface NBDebugOnPageBtnViewController : UIViewController
{
    id _userData;
    UIView *_switchBtn;
    id _delegate;
    NSValue *_btnOriganlPoint;
}

@property(retain, nonatomic) NSValue *btnOriganlPoint; // @synthesize btnOriganlPoint=_btnOriganlPoint;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(retain) id userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)positionBtn;
- (void)wasDragged:(id)arg1;
- (void)wasTapped:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithUserData:(id)arg1;

@end
