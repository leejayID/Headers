//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol Optional;

@interface TTIMHttpDeleteGroupMemberResponseModel : JSONModel
{
    NSString *_message;
    NSArray<Optional> *_failedUidArray;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<Optional> *failedUidArray; // @synthesize failedUidArray=_failedUidArray;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end
