//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class FRUploadImageModel, NSString;

@interface TTForumUploadVideoModel : NSObject <NSCoding>
{
    _Bool _isUploaded;
    FRUploadImageModel *_coverImage;
    NSString *_videoId;
    NSString *_videoPath;
    long long _videoDuration;
    NSString *_videoName;
    double _width;
    double _height;
    unsigned long long _videoSourceType;
    double _coverImageTimestamp;
    unsigned long long _timeConsume;
    long long _videoCoverSourceType;
    NSString *_musicID;
}

@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) long long videoCoverSourceType; // @synthesize videoCoverSourceType=_videoCoverSourceType;
@property(nonatomic) unsigned long long timeConsume; // @synthesize timeConsume=_timeConsume;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) double coverImageTimestamp; // @synthesize coverImageTimestamp=_coverImageTimestamp;
@property(nonatomic) unsigned long long videoSourceType; // @synthesize videoSourceType=_videoSourceType;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) FRUploadImageModel *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
