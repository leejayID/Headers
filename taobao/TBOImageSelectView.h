//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBOMutiItemAddViewDelegate-Protocol.h"
#import "TBOMutiPicItemViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBOMutiItemAddView;
@protocol TBOImageSelectViewDelegate;

@interface TBOImageSelectView : UIView <TBOMutiItemAddViewDelegate, TBOMutiPicItemViewDelegate>
{
    NSMutableArray *_imageArray;
    NSMutableArray *_imagePathArray;
    NSMutableArray *_viewItemArray;
    double _itemWidth;
    unsigned long long _maxSelection;
    id <TBOImageSelectViewDelegate> _delegate;
    TBOMutiItemAddView *_addView;
}

@property(retain, nonatomic) TBOMutiItemAddView *addView; // @synthesize addView=_addView;
@property(nonatomic) __weak id <TBOImageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxSelection; // @synthesize maxSelection=_maxSelection;
- (void).cxx_destruct;
- (void)refreshHeight;
- (void)TBOMutiPicItemShouldPreview:(id)arg1;
- (void)TBOMutiPicItemShouldRemove:(id)arg1;
- (void)TBOMutiPicItemShoundAdd;
- (void)removeImage:(id)arg1;
- (void)addImages:(id)arg1;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *imagePathArray;
@property(readonly, nonatomic) NSArray *imageArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

