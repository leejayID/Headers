//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSInvocation, NSMethodSignature, UIView;
@protocol MCCellModeProtocol, MCChatBubbleProtocol, MCChatPageDisplayPresenterForCellAndBubbleInterface;

@protocol MCBubbleHandlerProtocol <NSObject>
@property(retain, nonatomic) id <MCCellModeProtocol> currentCellObject;
@property(nonatomic) __weak id <MCChatPageDisplayPresenterForCellAndBubbleInterface> presenterContext;
- (NSDictionary *)getUserInfoWithModel:(id <MCCellModeProtocol>)arg1;
- (void)stopAction;
- (void)forwardInvocation:(NSInvocation *)arg1;
- (NSMethodSignature *)methodSignatureForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showMenuWithCellModel:(id <MCCellModeProtocol>)arg1 bubble:(UIView<MCChatBubbleProtocol> *)arg2;
- (void)actionWithCellModel:(id <MCCellModeProtocol>)arg1 bubble:(UIView<MCChatBubbleProtocol> *)arg2 context:(id)arg3 actionType:(long long)arg4;
- (id)init;
@end
