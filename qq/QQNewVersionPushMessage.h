//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQNewVersionPushMessage : NSObject
{
    NSString *_content;
    NSString *_url;
    NSString *_urlshowtext;
    struct _NSRange _highlightrange;
    int _xo;
}

@property struct _NSRange highlightrange; // @synthesize highlightrange=_highlightrange;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *urlshowtext; // @dynamic urlshowtext;

@end

