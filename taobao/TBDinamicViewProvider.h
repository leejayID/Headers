//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBEnvasViewProvider-Protocol.h"

@class NSString;

@interface TBDinamicViewProvider : NSObject <TBEnvasViewProvider>
{
}

- (double)marginTopwithData:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)viewSizeWithData:(id)arg1 atIndexPath:(id)arg2;
- (void)fillViewInReuseCell:(id)arg1 withData:(id)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
