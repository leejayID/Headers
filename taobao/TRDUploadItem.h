//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, TRDCmdBaseResult;

@interface TRDUploadItem : NSObject
{
    NSURL *_sendUrl;
    NSData *_sendData;
    long long _count;
    NSDictionary *_userInfo;
    NSString *_achvFilePath;
    NSString *_moveFilePath;
    NSString *_logFilePath;
    TRDCmdBaseResult *_responseData;
}

@property(retain, nonatomic) TRDCmdBaseResult *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(retain, nonatomic) NSString *moveFilePath; // @synthesize moveFilePath=_moveFilePath;
@property(retain, nonatomic) NSString *achvFilePath; // @synthesize achvFilePath=_achvFilePath;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSData *sendData; // @synthesize sendData=_sendData;
@property(retain, nonatomic) NSURL *sendUrl; // @synthesize sendUrl=_sendUrl;
- (void).cxx_destruct;
- (id)initForUploadFile:(id)arg1 andMoveFile:(id)arg2 andUserInfo:(id)arg3;
- (id)initWith:(id)arg1 andUrl:(id)arg2 andCount:(long long)arg3 andUserInfo:(id)arg4;

@end

