//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMMtopRequest.h"

@interface GDMDarenFeedDetailFavourStateRequest : GDMMtopRequest
{
    _Bool _isFavoured;
}

@property _Bool isFavoured; // @synthesize isFavoured=_isFavoured;
- (void)startLoadStateWithType:(id)arg1 subType:(id)arg2 feedId:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end
