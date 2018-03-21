//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface PodWBCloudFaceVerifySDK_TKState : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    CDUnknownBlockType _willEnterStateBlock;
    CDUnknownBlockType _didEnterStateBlock;
    CDUnknownBlockType _willExitStateBlock;
    CDUnknownBlockType _didExitStateBlock;
}

+ (id)stateWithName:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didExitStateBlock; // @synthesize didExitStateBlock=_didExitStateBlock;
@property(copy, nonatomic) CDUnknownBlockType willExitStateBlock; // @synthesize willExitStateBlock=_willExitStateBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterStateBlock; // @synthesize didEnterStateBlock=_didEnterStateBlock;
@property(copy, nonatomic) CDUnknownBlockType willEnterStateBlock; // @synthesize willEnterStateBlock=_willEnterStateBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
