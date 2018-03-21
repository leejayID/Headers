//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQUITableViewCell.h>

@class NSIndexPath, NSMutableArray, NSObject, QQAIOCellView, QQAIOModel, QQChatViewTable, UIImageView, UITapGestureRecognizer;
@protocol QQAIOCellDelegate;

@interface QQAIOCell : QQUITableViewCell
{
    QQAIOModel *_aioModel;
    NSObject<QQAIOCellDelegate> *_cellDelegate;
    _Bool _bSel;
    _Bool _bMultiMsgForward;
    UIImageView *_checkBoxView;
    _Bool _bMultiMsgAction;
    UITapGestureRecognizer *_tapRecognizer;
    QQChatViewTable *_chatViewTable;
    NSIndexPath *_indexPath;
    int _xo;
    _Bool _emojiStickerMovedLayout;
    QQAIOCellView *_cellView;
    NSMutableArray *_emojiStickerInfoArr;
    NSMutableArray *_emojiStickerViewArr;
    double _emojiStickerOffsetY;
}

@property(nonatomic) _Bool emojiStickerMovedLayout; // @synthesize emojiStickerMovedLayout=_emojiStickerMovedLayout;
@property(nonatomic) double emojiStickerOffsetY; // @synthesize emojiStickerOffsetY=_emojiStickerOffsetY;
@property(retain, nonatomic) NSMutableArray *emojiStickerViewArr; // @synthesize emojiStickerViewArr=_emojiStickerViewArr;
@property(retain, nonatomic) NSMutableArray *emojiStickerInfoArr; // @synthesize emojiStickerInfoArr=_emojiStickerInfoArr;
@property(nonatomic) _Bool bMultiMsgAction; // @synthesize bMultiMsgAction=_bMultiMsgAction;
@property(nonatomic) _Bool bMultiMsgForward; // @synthesize bMultiMsgForward=_bMultiMsgForward;
@property(nonatomic) _Bool bSel; // @synthesize bSel=_bSel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) QQAIOCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
@property(retain, nonatomic) QQAIOModel *aioModel; // @synthesize aioModel=_aioModel;
@property(nonatomic) __weak id <QQAIOCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (_Bool)shouldHiddenPressMeun;
- (struct CGRect)getContentBgRectInCell;
- (void)hideCheckBoxInAskForMore:(id)arg1;
- (void)onResetCheckBoxInAskForMore:(id)arg1;
- (void)reportMoreActionForMessageModel:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)LongPressCanceled:(struct CGPoint)arg1;
- (void)LongPressEnded:(struct CGPoint)arg1;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (void)longPressAction;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateCellView;
- (void)willUpdateCellView;
- (void)reloadEmojiStickerInfo;
- (void)dealloc;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;

@end
