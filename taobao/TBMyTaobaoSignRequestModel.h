//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBMyTaobaoSignModel, TBSDKMTOPServer;

@interface TBMyTaobaoSignRequestModel : NSObject
{
    _Bool _isLoading;
    TBMyTaobaoSignModel *_myTaobaoSignModel;
    TBSDKMTOPServer *_server;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TBMyTaobaoSignModel *myTaobaoSignModel; // @synthesize myTaobaoSignModel=_myTaobaoSignModel;
- (void).cxx_destruct;
- (void)signStringWithAlipayUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

