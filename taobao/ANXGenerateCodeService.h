//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ANXService-Protocol.h"

@class ANXGenCodeServiceModel, NSString;

@interface ANXGenerateCodeService : NSObject <ANXService>
{
    ANXGenCodeServiceModel *_genCodeModel;
}

@property(retain, nonatomic) ANXGenCodeServiceModel *genCodeModel; // @synthesize genCodeModel=_genCodeModel;
- (void).cxx_destruct;
- (void)startWithParams:(id)arg1 onResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
