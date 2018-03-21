//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface ITTagInfo : QQModel <NSCopying>
{
    unsigned long long _tagId;
    NSString *_tagName;
    NSString *_iconUrlStr;
    NSString *_actionUrlStr;
    NSString *_backColorStr;
    NSString *_fontColorStr;
    unsigned int _bid;
    int _xo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *actionUrlStr; // @dynamic actionUrlStr;
@property(copy, nonatomic) NSString *backColorStr; // @dynamic backColorStr;
@property(nonatomic) unsigned int bid; // @dynamic bid;
@property(copy, nonatomic) NSString *fontColorStr; // @dynamic fontColorStr;
@property(copy, nonatomic) NSString *iconUrlStr; // @dynamic iconUrlStr;
@property(nonatomic) unsigned long long tagId; // @dynamic tagId;
@property(copy, nonatomic) NSString *tagName; // @dynamic tagName;

@end
