//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface ImageLibError : NSError
{
    NSString *_analysErrCode;
    NSString *_analysErrReason;
    NSString *_errorDesc;
}

+ (id)instanceWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(retain, nonatomic) NSString *analysErrReason; // @synthesize analysErrReason=_analysErrReason;
@property(retain, nonatomic) NSString *analysErrCode; // @synthesize analysErrCode=_analysErrCode;
- (void).cxx_destruct;

@end
