//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APContactInfo, NSString;

@interface SCHeadInfoModel : NSObject
{
    _Bool _editted;
    _Bool _sharingLBS;
    _Bool _isGroupOwner;
    int _type;
    APContactInfo *_contactInfo;
    NSString *_displayName;
    NSString *_source;
}

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isGroupOwner; // @synthesize isGroupOwner=_isGroupOwner;
@property(nonatomic) _Bool sharingLBS; // @synthesize sharingLBS=_sharingLBS;
@property(nonatomic) _Bool editted; // @synthesize editted=_editted;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;

@end
