//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WBStartGroupChatCellButton;
@protocol WBStartGroupChatTableFooterViewDelegate;

@interface WBStartGroupChatTableFooterView : UIView
{
    id <WBStartGroupChatTableFooterViewDelegate> _delegate;
    WBStartGroupChatCellButton *_searchButton;
    UIImageView *_separatorView;
}

@property(retain, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) WBStartGroupChatCellButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) __weak id <WBStartGroupChatTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickCellButton:(id)arg1;
- (void)configUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

