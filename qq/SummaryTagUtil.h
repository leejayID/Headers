//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SummaryTagUtil : NSObject
{
    NSMutableArray *_tagsClassTitles;
    NSMutableArray *_tagsClassIntros;
    NSMutableArray *_tagsContentArray;
    long long _maxTagNum;
    long long _classesNum;
}

+ (id)getInstance;
- (void)insertDic:(id)arg1 withObject:(id)arg2 forKey:(id)arg3;
- (void)insertArray:(id)arg1 withObject:(id)arg2;
- (void)initTagSet;
- (void)saveTagsRequest:(long long)arg1 tags:(id)arg2;
- (id)getClassIntro:(int)arg1;
- (id)getClassTitle:(int)arg1;
- (id)getClassContents:(int)arg1;
- (id)enCodeTagID:(id)arg1;
- (id)enCodeTags:(id)arg1;
- (long long)getMaxNum;
- (long long)getClassesNum;
- (void)dealloc;
- (id)init;

@end
