//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"
#import "H5ServiceDelegate-Protocol.h"

@class ALPFundServiceAPI, NSDictionary, NSString, PSDPluginConfig, UIViewController;

@interface AssetFundAppDelegate : NSObject <H5ServiceDelegate, DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
    ALPFundServiceAPI *_serviceAPI;
    PSDPluginConfig *_transparentPlugin;
    NSString *_source;
    NSDictionary *_resumeOptions;
}

@property(retain, nonatomic) NSDictionary *resumeOptions; // @synthesize resumeOptions=_resumeOptions;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (void)processLaunchOptionsForFamily:(id)arg1;
- (id)findFundViewController:(id)arg1;
- (_Bool)isGotoYuEBaoHomePage:(id)arg1 params:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidResume:(id)arg1;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (void)createDpClass;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

