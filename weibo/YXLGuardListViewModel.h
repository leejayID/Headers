//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, YXLGuardListModel;

@interface YXLGuardListViewModel : NSObject
{
    NSArray *_listArray;
    NSString *_memberid;
    NSString *_scid;
    unsigned long long _guardListType;
    NSMutableArray *_tbDataArray;
    YXLGuardListModel *_model;
    NSMutableArray *_crtPages;
}

@property(retain, nonatomic) NSMutableArray *crtPages; // @synthesize crtPages=_crtPages;
@property(retain, nonatomic) YXLGuardListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *tbDataArray; // @synthesize tbDataArray=_tbDataArray;
@property(nonatomic) unsigned long long guardListType; // @synthesize guardListType=_guardListType;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(retain, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
- (void).cxx_destruct;
- (void)getGuardListWithIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMoreListWith:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)typeOfIndex:(long long)arg1;
- (id)initWithUer:(id)arg1;

@end

