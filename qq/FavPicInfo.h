//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class Author, NSString;

@interface FavPicInfo : NSObject <NSCoding>
{
    NSString *_uri;
    int _type;
    NSString *_md5;
    NSString *_sha1;
    NSString *_name;
    NSString *_note;
    NSString *_pic_id;
    NSString *_path;
    unsigned int _width;
    unsigned int _height;
    unsigned int _size;
    int _need_upload;
    Author *_author;
    unsigned int _offset;
    int _xo;
    NSString *_originPath;
}

+ (id)chooseThumbInPicInfoList:(id)arg1;
+ (id)failedPicPath2;
+ (id)failedPicPath;
+ (id)defaultPicPath2;
+ (id)defaultPicPath;
- (id)urlForThumbSize:(int)arg1;
- (id)getFilePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fillProtoObj:(void *)arg1;
- (void)setWithProto:(void *)arg1;
- (id)initWithProto:(void *)arg1;
@property(copy, nonatomic) NSString *path; // @dynamic path;
- (void)dealloc;
- (id)initWithMessageModel:(id)arg1 author:(id)arg2;
- (id)initWithMessagePicInfo:(id)arg1 author:(id)arg2;
- (id)initWithMessagePicInfo:(id)arg1;
- (id)initWithLocalPath:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) Author *author; // @dynamic author;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(copy, nonatomic) NSString *md5; // @dynamic md5;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int need_upload; // @dynamic need_upload;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(copy, nonatomic) NSString *pic_id; // @dynamic pic_id;
@property(copy, nonatomic) NSString *sha1; // @dynamic sha1;
@property(nonatomic) unsigned int size; // @dynamic size;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

