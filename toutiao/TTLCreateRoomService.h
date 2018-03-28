//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTLAbstractService.h"

@class NSNumber, NSString;

@interface TTLCreateRoomService : TTLAbstractService
{
    _Bool _fake;
    NSString *_title;
    NSString *_uri;
    NSString *_originalUri;
    NSNumber *_thumbWidth;
    NSNumber *_thumbHeight;
}

@property(retain, nonatomic) NSNumber *thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(retain, nonatomic) NSNumber *thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(retain, nonatomic) NSString *originalUri; // @synthesize originalUri=_originalUri;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) _Bool fake; // @synthesize fake=_fake;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)createRoomCompletion:(CDUnknownBlockType)arg1;
- (id)constructParameter;
- (id)requestPath;
- (id)init;

@end
