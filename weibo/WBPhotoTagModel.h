//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBPhotoTagModel : WBModelObject
{
    _Bool _isFromSticker;
    int _tagType;
    NSString *_tagName;
    NSString *_tagObjectID;
    NSString *_urlScheme;
    NSString *_tagID;
    NSDictionary *_actionLog;
    NSDictionary *_customData;
    NSString *_url;
    struct CGPoint _normalizedTagPoint;
    struct CGPoint _scaledPostion;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(nonatomic) _Bool isFromSticker; // @synthesize isFromSticker=_isFromSticker;
@property(nonatomic) int tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(retain, nonatomic) NSString *tagObjectID; // @synthesize tagObjectID=_tagObjectID;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) struct CGPoint scaledPostion; // @synthesize scaledPostion=_scaledPostion;
@property(nonatomic) struct CGPoint normalizedTagPoint; // @synthesize normalizedTagPoint=_normalizedTagPoint;
- (void).cxx_destruct;
- (id)tagTypeString;
- (id)fullInfoDict;
- (id)infoDict;
- (id)initWithDictionary:(id)arg1;

@end

