//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, UIView;

@interface TBCEngine : NSObject
{
    NSString *_engineId;
    NSMutableDictionary *_components;
    UIView *_outputView;
    CDUnknownBlockType _transferRule;
}

+ (Class)componentClassWithTagName:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType transferRule; // @synthesize transferRule=_transferRule;
@property(readonly, nonatomic) __weak UIView *outputView; // @synthesize outputView=_outputView;
@property(readonly, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(readonly, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewWithOrigin:(struct CGPoint)arg1;
- (id)tableViewWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)sendEvent:(id)arg1 sourceObj:(id)arg2 args:(id)arg3;
- (void)removeHandler:(id)arg1 event:(id)arg2;
- (void)registerEvent:(id)arg1 handler:(id)arg2;
- (void)removeHandlerForProtocol:(id)arg1;
- (id)handlerForProtocol:(id)arg1;
- (void)registerProtocol:(id)arg1 handler:(id)arg2;
- (void)registerTransferRule:(CDUnknownBlockType)arg1;
- (void)removeComponent:(id)arg1;
- (void)registerComponent:(id)arg1;
- (id)initWithEngineId:(id)arg1;

@end

