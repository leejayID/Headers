//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMMessageBaseCell.h>

#import <QQMainProject/QQGroupTopicDataMgrProtocol-Protocol.h>

@class NSString;

@interface QQAIOShareMessageCell : QQSMMessageBaseCell <QQGroupTopicDataMgrProtocol>
{
}

- (void)reqGroupTopicInfoDone:(id)arg1 error:(id)arg2;
- (void)handleShareLinkInfoVersionUpdate:(id)arg1;
- (void)updateShareLinkInfo;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (struct CGRect)GetPaoPaoBgRect;
- (void)giftSMReport;
- (void)QQSMItemElementView:(id)arg1 didAction:(id)arg2;
- (void)longPressAction;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)getVideoViewForVqq;
- (struct CGRect)getPictureRect;
- (void)findRichTextInView:(id)arg1 toMutableArray:(id)arg2;
- (id)getUrlPictureViews;
- (id)getUrlPictureView;
- (id)getUuidPictureView;
- (void)setAioModel:(id)arg1;
- (struct CGRect)getContentBgRect;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

