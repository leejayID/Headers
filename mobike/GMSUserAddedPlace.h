//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GMSUserAddedPlace : NSObject
{
    NSString *_name;
    NSString *_address;
    NSString *_phoneNumber;
    NSArray *_types;
    NSString *_website;
    CDStruct_2c43369c _coordinate;
}

@property(copy, nonatomic) NSString *website; // @synthesize website=_website;
@property(copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

