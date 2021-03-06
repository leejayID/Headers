//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURLRequest, NSURLResponse;

@interface JDAdsHttpConnection : NSObject
{
    NSString *_connID;
    NSURLResponse *_response;
    id _responseData;
    NSError *_error;
    NSURLRequest *_fromRequest;
}

@property(retain, nonatomic) NSURLRequest *fromRequest; // @synthesize fromRequest=_fromRequest;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *connID; // @synthesize connID=_connID;
- (void).cxx_destruct;

@end

