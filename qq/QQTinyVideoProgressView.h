//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface QQTinyVideoProgressView : UIView
{
    double _progress;
    double _outRadius;
    double _midRadius;
    double _inRadius;
    int _xo;
}

@property(nonatomic) double progress; // @dynamic progress;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) double inRadius; // @dynamic inRadius;
@property(nonatomic) double midRadius; // @dynamic midRadius;
@property(nonatomic) double outRadius; // @dynamic outRadius;

@end
