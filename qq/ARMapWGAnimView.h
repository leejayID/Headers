//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface ARMapWGAnimView : UIImageView
{
    unsigned long long _currStatus;
}

- (void)stopAction;
- (void)startAction;
- (void)stopWGAnimation;
- (void)startWGAnimation;
- (void)update:(unsigned long long)arg1 isResourceReady:(_Bool)arg2;
- (void)update:(int)arg1;
- (id)init;

@end
