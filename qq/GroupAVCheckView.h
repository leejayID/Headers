//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQCollectionViewDataSource-Protocol.h>
#import <QQMainProject/QQCollectionViewDelegate-Protocol.h>
#import <QQMainProject/QQCollectionViewPageControlDelegate-Protocol.h>

@class GroupAVCheckModel, GroupAudioNeedInfo, NSMutableArray, NSString, NSTimer, QQAVNoticeView, QQCollectionView, QQCollectionViewPageControl, UIButton, UIImageView, UILabel;

@interface GroupAVCheckView : UIView <QQCollectionViewDelegate, QQCollectionViewDataSource, QQCollectionViewPageControlDelegate>
{
    GroupAVCheckModel *_checkModel;
    UIImageView *_bImageView;
    UILabel *_bTitle;
    UILabel *_bDescription;
    UIButton *_bOptBtn;
    UIView *_spliteLineView;
    QQCollectionView *_collectionView;
    QQAVNoticeView *_noticeView;
    QQCollectionViewPageControl *_pageControl;
    NSMutableArray *_roomMemberArr;
    _Bool _showMoreCell;
    NSTimer *_checkNameTimer;
    NSTimer *_loadMemberTimer;
    int _memberListLoadStatus;
    GroupAudioNeedInfo *_audioInfo;
    int _curNetType;
    _Bool _isLoadmemSuccess;
    _Bool _spliteLineVisible;
    _Bool _isNeedToResetCollectionView;
}

@property(nonatomic) _Bool isNeedToResetCollectionView; // @synthesize isNeedToResetCollectionView=_isNeedToResetCollectionView;
@property(nonatomic) _Bool spliteLineVisible; // @synthesize spliteLineVisible=_spliteLineVisible;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)collectionView:(id)arg1 updateCurPage:(long long)arg2 numberOfPage:(long long)arg3;
- (void)dealloc;
- (void)uninitNotification;
- (void)destroyMyView;
- (void)memberListLoadStatusChanged:(int)arg1;
- (void)onBusinessOperiation:(id)arg1;
- (void)onUpdateMemberList:(id)arg1;
- (void)checkMemberName:(id)arg1;
- (void)startCheckMemberNameTimer;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)resetLayoutAndContent;
- (void)loadMemberTimeOut:(id)arg1;
- (void)refreshRoomUserInfo;
- (void)loadMemberList;
- (void)layoutSubviews;
- (void)StartNetChange:(id)arg1;
- (void)onStartNetChange:(id)arg1;
- (void)NetChangeSuc;
- (void)onNetChangeSuc;
- (void)internalInitNotification;
- (void)internalInitCollectionView;
- (void)internalInitUIElement;
- (id)initWithCheckModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

