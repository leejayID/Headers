//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@interface O2OLCRecommendMerchantModel : O2OMistModel
{
    _Bool _isLoadOrLoadMore;
}

@property(nonatomic) _Bool isLoadOrLoadMore; // @synthesize isLoadOrLoadMore=_isLoadOrLoadMore;
- (_Bool)hasMore;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (id)responseObjects:(id)arg1;
- (_Bool)loadMore;
- (void)reload;
- (void)load;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (_Bool)raise1002Exception;
- (id)rpcRequest;

@end

