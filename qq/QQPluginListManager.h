//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface QQPluginListManager : NSObject
{
    NSMutableSet *_enabledPlugins;
    NSMutableSet *_disabledPlugins;
    NSMutableSet *_webPlugins;
    NSMutableSet *_nativePlugins;
    NSMutableSet *_appPlugins;
    NSMutableSet *_favorPlugins;
    NSMutableSet *_browser;
    NSMutableDictionary *_nameOfPlugins;
    NSMutableSet *_manageablelist;
    NSArray *_aioPluginAppList;
    _Bool _bHasConfigData;
    unsigned int _nLastUpdateTime;
    long long currentUin;
}

+ (id)Instance;
- (_Bool)isPluginManageable:(id)arg1;
- (int)getPluginType:(id)arg1;
- (void)removeFromManageableList:(id)arg1;
- (void)addToManageableList:(id)arg1;
- (void)processAIOPluginAppListUpdate;
- (id)getAIOPluginAppList;
- (_Bool)isPluginInFavorList:(id)arg1;
- (id)getLocalPluginInfo:(id)arg1;
- (id)getPluginsNotInFavorList;
- (void)removePluginFromFavorlist:(id)arg1;
- (void)addPluginToFavorlist:(id)arg1;
- (id)getFavorPlugins;
- (void)loadFavorList;
- (void)updatePlugin:(id)arg1 info:(id)arg2;
- (void)Destroy;
- (void)Construct;
- (void)WriteToFavorFile;
- (_Bool)WriteToConfigFile;
- (id)realGetPluginInfoByID:(id)arg1 isConnectPlugin:(_Bool)arg2;
- (id)getConnectPluginInfoByID:(id)arg1;
- (id)getPluginInfoByID:(id)arg1;
- (_Bool)LoadFromConfigFile;
- (id)getFavorFilePath;
- (id)getPluginByID:(id)arg1;
- (_Bool)hasPlugin:(id)arg1;
- (_Bool)isPluginEnabled:(id)arg1;
- (_Bool)disablePlugin:(id)arg1;
- (_Bool)enablePlugin:(id)arg1;
- (_Bool)unregistPlugin:(id)arg1;
- (_Bool)registPlugin:(id)arg1;
- (id)getAllPlugins;
- (void)dealloc;
- (id)init;
- (void)onWhiteListUpdatedNote:(id)arg1;
- (void)onTerminate:(id)arg1;
- (void)updateConnectPluginInfo;
- (void)updatePluginInfo;

@end

