//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface ReadViewToolBar : UIView
{
    int _layoutType;
    int _layoutPosition;
    long long _selectedIndex;
    UIImageView *_imageView;
    int _xo;
    NSMutableArray *_elements;
}

@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
- (void)setDayMode:(_Bool)arg1;
- (void)setHighlightAtIndex:(long long)arg1;
- (void)show:(_Bool)arg1;
- (unsigned long long)count;
- (unsigned long long)itemCount;
- (id)getItem:(unsigned long long)arg1;
- (void)addReaderItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) int layoutPosition; // @dynamic layoutPosition;
@property(nonatomic) int layoutType; // @dynamic layoutType;
@property(nonatomic) long long selectedIndex; // @dynamic selectedIndex;

@end
