//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, Optional><TTFollowingMergeResponseModel, Optional><TTFollowingResponseModel;

@interface TTNewFollowingResponseModel : JSONModel
{
    NSString<Optional> *_cursor;
    NSNumber *_hasMore;
    NSArray<Optional><TTFollowingMergeResponseModel> *_mergeData;
    NSArray<Optional><TTFollowingResponseModel> *_data;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSArray<Optional><TTFollowingResponseModel> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSArray<Optional><TTFollowingMergeResponseModel> *mergeData; // @synthesize mergeData=_mergeData;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString<Optional> *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;

@end
