//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APExceptionView;

@interface EMJLoadingView : UIView
{
    APExceptionView *_exceptionView;
    id _target;
    SEL _exceptionViewAction;
}

@property(nonatomic) SEL exceptionViewAction; // @synthesize exceptionViewAction=_exceptionViewAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)toggleErrorView:(_Bool)arg1;
- (id)exceptionView;

@end

