//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartViewController.h"

#import "AliCartViewScrollDelegate-Protocol.h"

@class NSString, TBCartReloadNotifyView;

@interface TBCartPromotionController : TBCartViewController <AliCartViewScrollDelegate>
{
    _Bool _isNeedRefresh;
    _Bool _isCurrentVC;
    NSString *_promotionUniqueId;
    NSString *_promotionBusinessId;
    NSString *_promotionUrl;
    TBCartReloadNotifyView *_notifyView;
}

@property(nonatomic) _Bool isCurrentVC; // @synthesize isCurrentVC=_isCurrentVC;
@property(nonatomic) _Bool isNeedRefresh; // @synthesize isNeedRefresh=_isNeedRefresh;
@property(retain, nonatomic) TBCartReloadNotifyView *notifyView; // @synthesize notifyView=_notifyView;
@property(copy, nonatomic) NSString *promotionUrl; // @synthesize promotionUrl=_promotionUrl;
@property(copy, nonatomic) NSString *promotionBusinessId; // @synthesize promotionBusinessId=_promotionBusinessId;
@property(copy, nonatomic) NSString *promotionUniqueId; // @synthesize promotionUniqueId=_promotionUniqueId;
- (void).cxx_destruct;
- (id)emptyViewConstrainedToSize:(struct CGSize)arg1 hasSelector:(_Bool)arg2;
- (void)dealloc;
- (void)notifyForAddCartCommand:(id)arg1;
- (void)cartNativeScrollViewDidScroll:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)promotionRequestParams;
- (void)showRecommendTipsIfNeededForTableViewOffSetY:(double)arg1;
- (id)cartClient;
- (id)trackPageName;
- (int)trackEventID;
- (_Bool)scrollViewToRecommendShowTips;
- (_Bool)canPromotionShowSelf;
- (_Bool)canRecmdShowSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

