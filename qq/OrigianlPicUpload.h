//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface OrigianlPicUpload : NSObject
{
    NSData *_OrigianlPic_uKey;
    NSString *_OrigianlPic_Md5;
    NSDate *_OrigianlPic_uploadlasttime;
}

@property(copy, nonatomic) NSDate *OrigianlPic_uploadlasttime; // @synthesize OrigianlPic_uploadlasttime=_OrigianlPic_uploadlasttime;
@property(copy, nonatomic) NSString *OrigianlPic_Md5; // @synthesize OrigianlPic_Md5=_OrigianlPic_Md5;
@property(copy, nonatomic) NSData *OrigianlPic_uKey; // @synthesize OrigianlPic_uKey=_OrigianlPic_uKey;
- (void).cxx_destruct;
- (id)description;
- (id)initWithfile_md5:(id)arg1 file_uploadlasttime:(id)arg2 uKey:(id)arg3;

@end

