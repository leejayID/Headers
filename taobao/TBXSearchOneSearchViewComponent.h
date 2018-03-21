//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchViewComponent.h"

@class NSString, TBSRPXSearchDynamicPortalViewController, TBSRPXSearchService, TBXSearchOnesearchModel;

@interface TBXSearchOneSearchViewComponent : XSearchViewComponent
{
    NSString *_oneSearchUrl;
    TBSRPXSearchDynamicPortalViewController *_dynamicPortalVc;
    struct CGSize _oneSearchSize;
}

@property(retain, nonatomic) TBSRPXSearchDynamicPortalViewController *dynamicPortalVc; // @synthesize dynamicPortalVc=_dynamicPortalVc;
@property(retain, nonatomic) NSString *oneSearchUrl; // @synthesize oneSearchUrl=_oneSearchUrl;
@property(nonatomic) struct CGSize oneSearchSize; // @synthesize oneSearchSize=_oneSearchSize;
- (void).cxx_destruct;
- (void)dataLoaded;
- (void)processData;

// Remaining properties
@property(retain, nonatomic) TBXSearchOnesearchModel *model; // @dynamic model;
@property(retain, nonatomic) TBSRPXSearchService *searchService; // @dynamic searchService;

@end
