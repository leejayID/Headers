//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGroupManagementCell.h"

@class NSArray, NSMutableArray, UIView, WBDirectionalGroup;
@protocol WBGMGroupMemeberCellDelegate;

@interface WBGMGroupMemberCell : WBGroupManagementCell
{
    _Bool _allowEditing;
    UIView *_groupMemeberContainerView;
    NSArray *_contacts;
    long long maxContacts;
    NSMutableArray *_memeberViewCache;
    CDUnknownBlockType _afterDisplayBlock;
    WBDirectionalGroup *_group;
}

+ (long long)contactsCountForCellWidth:(double)arg1 allowEditing:(_Bool)arg2;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) CDUnknownBlockType afterDisplayBlock; // @synthesize afterDisplayBlock=_afterDisplayBlock;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateContacts;
- (void)updateContactsLayoutInfo;
- (void)setContacts:(id)arg1;
- (void)setAllowEditing:(_Bool)arg1;
- (double)avatarViewWidth;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateApperance;
- (void)loadSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <WBGMGroupMemeberCellDelegate> delegate; // @dynamic delegate;

@end

