//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APGLocalSearchIndexConfig, NSString;

@interface APGScanTableModel : NSObject
{
    int _times;
    APGLocalSearchIndexConfig *_indexConfig;
    NSString *_tableName;
    NSString *_userId;
}

@property(nonatomic) int times; // @synthesize times=_times;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) APGLocalSearchIndexConfig *indexConfig; // @synthesize indexConfig=_indexConfig;
- (void).cxx_destruct;

@end

