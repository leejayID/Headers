//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface APChatSkinFileDownloader : NSObject
{
    NSMutableDictionary *_skinConfigs;
}

@property(retain, nonatomic) NSMutableDictionary *skinConfigs; // @synthesize skinConfigs=_skinConfigs;
- (void).cxx_destruct;
- (void)downloadSkinFile:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncGetSkinFile:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)syncGetSkinFile:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)deleteSkinFile:(id)arg1;
- (_Bool)createSkinDirectoryIfFileExistAtPath:(id)arg1;
- (id)createSkinFile:(id)arg1;

@end
