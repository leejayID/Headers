//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQAIODouTuImageInfo;

@interface ReportHotPicReq : NSObject
{
    unsigned int _gender;
    unsigned int _age;
    unsigned long long _uin;
    QQAIODouTuImageInfo *_doutuImg;
    NSString *_md5;
}

@property(nonatomic) unsigned int age; // @synthesize age=_age;
@property(nonatomic) unsigned int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) QQAIODouTuImageInfo *doutuImg; // @synthesize doutuImg=_doutuImg;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;

@end
