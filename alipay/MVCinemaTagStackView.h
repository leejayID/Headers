//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MVCinemaModel, NSMutableArray;

@interface MVCinemaTagStackView : UIView
{
    _Bool _darkMode;
    MVCinemaModel *_cinema;
    NSMutableArray *_pool;
}

+ (id)layoutWithCinemaModel:(id)arg1 timeTag:(unsigned long long)arg2 hasShowId:(_Bool)arg3 presaleMode:(_Bool)arg4;
@property(retain, nonatomic) NSMutableArray *pool; // @synthesize pool=_pool;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) MVCinemaModel *cinema; // @synthesize cinema=_cinema;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)estimatedHeight;
- (void)setCalculatedModelData:(id)arg1;
- (id)getNextLineView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

