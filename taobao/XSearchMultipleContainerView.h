//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchBaseContainerView.h"

@class NSMutableArray, NSMutableDictionary;

@interface XSearchMultipleContainerView : XSearchBaseContainerView
{
    _Bool _sticky;
    NSMutableArray *_viewArray;
    long long _type;
    NSMutableDictionary *_viewCache;
}

+ (id)getCurrentComponentsArrayWithType:(long long)arg1 SearchService:(id)arg2;
+ (Class)getComponentClassWithType:(long long)arg1 SearchService:(id)arg2 Model:(id)arg3;
+ (double)thisHeightWithType:(long long)arg1 SearchService:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *viewCache; // @synthesize viewCache=_viewCache;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(nonatomic) _Bool sticky; // @synthesize sticky=_sticky;
- (void).cxx_destruct;
- (void)reloadData;
- (void)layout;
- (void)bindSearchService:(id)arg1;
- (void)dataLoaded:(id)arg1 Model:(id)arg2;
- (void)dataLoaded;
- (void)removeAllViews;
- (id)initWithFrame:(struct CGRect)arg1 Service:(id)arg2;

@end

