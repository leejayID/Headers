//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface KTVHCDataUnitQueue : NSObject
{
    NSLock *_lock;
    NSMutableArray *_unitArray;
}

+ (id)unitQueue;
@property(retain, nonatomic) NSMutableArray *unitArray; // @synthesize unitArray=_unitArray;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)popUnit:(id)arg1;
- (void)putUnit:(id)arg1;
- (id)unitWithUniqueIdentifier:(id)arg1;
- (id)allUnits;
- (id)init;

@end

