//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface HTSNetworkDomainConfiguration : NSObject
{
    NSString *_baseURL;
    NSDictionary *_commonParameters;
    NSArray *_requestURLList;
}

@property(retain, nonatomic) NSArray *requestURLList; // @synthesize requestURLList=_requestURLList;
@property(retain, nonatomic) NSDictionary *commonParameters; // @synthesize commonParameters=_commonParameters;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;

@end

