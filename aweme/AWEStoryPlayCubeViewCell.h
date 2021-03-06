//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEStoryCubeDismissControllerProtocol-Protocol.h"

@class AWEStoryPlayViewController, NSString;
@protocol AWEStoryPlayViewControllerDelegate;

@interface AWEStoryPlayCubeViewCell : UICollectionViewCell <AWEStoryCubeDismissControllerProtocol>
{
    AWEStoryPlayViewController *_playViewController;
    id <AWEStoryPlayViewControllerDelegate> _delegate;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak id <AWEStoryPlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEStoryPlayViewController *playViewController; // @synthesize playViewController=_playViewController;
- (void).cxx_destruct;
- (struct CGRect)viewControllerImageViewOriginFrame;
- (id)viewControllerImageView;
- (void)viewControllerDidCancelTranstion;
- (void)viewControllerWillCancelTransition;
- (void)viewControllerDidFinishTransition;
- (void)viewControllerWillBeginTransition;
- (void)layoutSubviews;
- (void)prepareForDisplayForIndex:(unsigned long long)arg1;
- (void)seekPlaybackTimeToZero;
- (void)pause;
- (void)play;
- (void)setData:(id)arg1 andStoryManager:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

