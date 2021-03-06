//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSFetchedResultsSectionInfo-Protocol.h"

@class NSArray, NSString;

@interface TLIndexPathSectionInfo : NSObject <NSFetchedResultsSectionInfo>
{
    NSString *_name;
    NSString *_indexTitle;
    unsigned long long _numberOfObjects;
    NSArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 name:(id)arg2 indexTitle:(id)arg3;
- (id)initWithItems:(id)arg1 name:(id)arg2;

@end

