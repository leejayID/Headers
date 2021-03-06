//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessageBaseView.h"

@class NSArray;
@protocol PPChatProductMessageViewDelegate;

@interface PPChatProductMessageView : PPChatMessageBaseView
{
    NSArray *_productItemViews;
    id <PPChatProductMessageViewDelegate> _delegate;
    long long _rowItemCount;
}

+ (double)heightOfProductItemView;
+ (double)widthOfProductItemView;
+ (double)heightOfBoxView;
+ (double)widthOfBoxView;
+ (double)heightForData:(id)arg1 ofMessage:(id)arg2;
@property(nonatomic) long long rowItemCount; // @synthesize rowItemCount=_rowItemCount;
@property(nonatomic) __weak id <PPChatProductMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *productItemViews; // @synthesize productItemViews=_productItemViews;
- (void).cxx_destruct;
- (void)touchButtonAction:(id)arg1;
- (void)resetProductItemViews;
- (id)productItemViewAtIndex:(unsigned long long)arg1;
- (void)setupProductItemView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setupProductItemViews:(id)arg1;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

