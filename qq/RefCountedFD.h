//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RefCountedFD : NSObject
{
    int m_fd;
    _Bool m_closeFileFlag;
}

+ (id)refCountedFD:(int)arg1;
- (void)dealloc;

@end
