//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SSoAccountItem : NSObject
{
    int _accountType;
    unsigned long long _uin;
    NSString *_nick;
}

@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
