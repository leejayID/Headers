//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TBStoryUserVidListModel : NSObject
{
    NSString *_uid;
    NSString *_unionID;
    NSArray *_vidList;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSArray *vidList; // @synthesize vidList=_vidList;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)dealloc;

@end

