//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, QQMessageModel, SpriteActionModle, UIImageView, UILabel;
@protocol SpriteFastReplyActionViewDelegate;

@interface SpriteFastReplyActionView : UIView
{
    SpriteActionModle *_aioActionModel;
    QQMessageModel *_msgModel;
    NSArray *_pkActionModelArray;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    id <SpriteFastReplyActionViewDelegate> _delegate;
}

@property(nonatomic) id <SpriteFastReplyActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionUnitViewPressed:(id)arg1;
- (id)pkActionModels;
- (void)showTitle;
- (void)constructUI;
- (struct CGRect)groupTitleLabelFrame;
- (struct CGRect)c2cTitleLabelFrame;
- (id)pkActionModelArray;
- (id)receivedActionModel;
- (id)initWithMsgModel:(id)arg1;
- (void)dealloc;

@end
