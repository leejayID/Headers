//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface TPEntity : NSObject
{
    int _cacheType;
    NSString *_templateName;
    NSString *_templateURL;
    NSString *_templateType;
    NSString *_templatePath;
    double _downLoadTimeInterval;
    NSError *_error;
}

@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double downLoadTimeInterval; // @synthesize downLoadTimeInterval=_downLoadTimeInterval;
@property(copy, nonatomic) NSString *templatePath; // @synthesize templatePath=_templatePath;
@property(nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;
- (id)dataStream;
- (id)jsonContent;
- (id)stringContent;

@end

