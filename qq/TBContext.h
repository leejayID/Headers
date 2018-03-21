//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, EAGLContext;

@interface TBContext : NSObject
{
    CIContext *_CIContext;
    long long _type;
    EAGLContext *_EAGLContext;
    struct CGContext *_CGContext;
}

+ (id)contextWithType:(long long)arg1 options:(id)arg2;
+ (long long)suggestedContextType;
+ (_Bool)supportsType:(long long)arg1;
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) EAGLContext *EAGLContext; // @synthesize EAGLContext=_EAGLContext;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CIContext *CIContext; // @synthesize CIContext=_CIContext;
- (void).cxx_destruct;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithCGContextRef:(struct CGContext *)arg1;
- (id)initWithSoftwareRenderer:(_Bool)arg1;
- (void)dealloc;

@end
