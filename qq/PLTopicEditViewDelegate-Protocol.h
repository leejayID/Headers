//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQWebViewController, UIView;

@protocol PLTopicEditViewDelegate <NSObject>
- (void)editWeb:(QQWebViewController *)arg1 willCloseForEditDone:(_Bool)arg2;
- (void)topicDidClick:(UIView *)arg1 editWebCanBeShown:(QQWebViewController *)arg2;
@end

