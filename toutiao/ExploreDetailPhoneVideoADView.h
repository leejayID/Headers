//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreDetailMixedVideoADView.h"

@class SSThemedButton;

@interface ExploreDetailPhoneVideoADView : ExploreDetailMixedVideoADView
{
    SSThemedButton *_actionButton;
}

+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) SSThemedButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)callActionFired:(id)arg1;
- (void)layout;
- (void)setAdModel:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

