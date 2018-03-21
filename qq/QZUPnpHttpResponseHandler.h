//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSFileHandle, NSString, QZUPnpHttpServer;

@interface QZUPnpHttpResponseHandler : NSObject
{
    NSFileHandle *_fileHandle;
    QZUPnpHttpServer *_server;
    NSString *_localResourcePath;
    NSArray *_indexArray;
}

@property(retain, nonatomic) NSArray *indexArray; // @synthesize indexArray=_indexArray;
@property(copy, nonatomic) NSString *localResourcePath; // @synthesize localResourcePath=_localResourcePath;
@property(retain, nonatomic) QZUPnpHttpServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void)writeFileData:(id)arg1 headerData:(struct __CFData *)arg2 beginIndex:(long long)arg3 endIndex:(long long)arg4;

@end
