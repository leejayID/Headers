//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NewFriendsNotifyListBaseCell.h>

@class UIImageView;

@interface FriendsVerifyMsgListCell : NewFriendsNotifyListBaseCell
{
    UIImageView *_iconImage;
}

+ (double)calulateCellHeightWithModel:(id)arg1 showTopBanner:(_Bool)arg2;
+ (id)getActionTextByModel:(id)arg1;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)didClickNFItem:(id)arg1 currContr:(id)arg2;
- (void)loadCellWithNFItem:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (void)setHeadImageWithUin:(int)arg1 uin:(id)arg2;
- (void)configCellWithModel:(id)arg1 showSeparator:(_Bool)arg2;
- (void)setBtnText:(id)arg1;
- (id)getResultStr;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

