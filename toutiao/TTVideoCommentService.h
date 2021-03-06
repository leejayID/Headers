//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoService.h"

@class TTVideoCommentApi;

@interface TTVideoCommentService : TTVideoService
{
    TTVideoCommentApi *_api;
}

@property(retain, nonatomic) TTVideoCommentApi *api; // @synthesize api=_api;
- (void).cxx_destruct;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onAppWillBecomeActive;
- (void)onAppWillResignActive;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)p_updateWithReponse:(id)arg1;
- (void)p_getCommentOnProtoTypeWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_getCommentOnModelTypeWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)requestModelWithParameter:(id)arg1;
- (void)getCommentWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

