//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECHATToString.h"

@class NSArray;

@interface MOBILECHATQueryGroupInfoReq : MOBILECHATToString
{
    NSArray *_groupIds;
    long long _version;
}

+ (Class)groupIdsElementClass;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *groupIds; // @synthesize groupIds=_groupIds;
- (void).cxx_destruct;

@end
