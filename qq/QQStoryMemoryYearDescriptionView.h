//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBDateVideoCollectionModel, UILabel;

@interface QQStoryMemoryYearDescriptionView : UIView
{
    TBDateVideoCollectionModel *_model;
    UILabel *_yearLabel;
    UILabel *_videoCountLabel;
}

+ (double)height;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(retain, nonatomic) TBDateVideoCollectionModel *model; // @synthesize model=_model;
- (void)updateFrame;
- (void)dealloc;
- (id)init;

@end
