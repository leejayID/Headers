//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, UIColor;

@interface MBKOperationBoundsModel : NSObject <NSCoding>
{
    UIColor *_boundColor;
    UIColor *_fillColor;
    NSArray *_coordinates;
}

@property(retain, nonatomic) NSArray *coordinates; // @synthesize coordinates=_coordinates;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *boundColor; // @synthesize boundColor=_boundColor;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

