//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQLightInteractionManager : NSObject
{
    NSMutableDictionary *_dictPaintedEgg;
}

+ (void)saveObj:(id)arg1 forKey:(id)arg2;
+ (id)getStringForKey:(id)arg1;
+ (id)getSourceMD5;
+ (void)saveSourceMD5:(id)arg1;
+ (id)getSourceUrl;
+ (void)saveSourceUrl:(id)arg1;
+ (int)animationStrengthRuleInterval;
+ (long long)comboNum;
+ (long long)pokeEnterType;
+ (id)imageFor666Surprise:(_Bool)arg1;
+ (void)redownloadAnimationSourceIfNeeded;
+ (_Bool)checkIfAnimationSourceIsExist:(long long)arg1;
+ (_Bool)isSourceExist:(long long)arg1;
+ (void)setShowIndependentRedPoint:(_Bool)arg1;
+ (_Bool)isShowIndependentEntrenceRedPoint;
+ (_Bool)TouchFeelingEntrence;
+ (unsigned long long)independentEntrenceType;
+ (unsigned long long)independentEntrence;
+ (id)getSourceList;
+ (id)loadPokePanelConfig;
+ (void)savePokePanelConfig:(id)arg1;
+ (id)IndependentIconByType:(long long)arg1 isHighlighted:(_Bool)arg2;
+ (id)loadAIOStaticImgByType:(long long)arg1 isHighlighted:(_Bool)arg2 direction:(unsigned long long)arg3;
+ (id)loadHightLightImgByType:(long long)arg1;
+ (id)loadAnimationImgsWithType:(long long)arg1 isAIO:(_Bool)arg2 direction:(unsigned long long)arg3;
+ (id)getAnimationFrameSourceName:(long long)arg1 direction:(unsigned long long)arg2;
+ (id)getActorByType:(long long)arg1 ContainerLayer:(id)arg2 direction:(unsigned long long)arg3 Delegate:(id)arg4;
+ (id)msgTableDisplayText:(_Bool)arg1 nick:(id)arg2 type:(long long)arg3;
+ (id)convertSourceNumToDisplayName:(long long)arg1;
+ (id)convertSourceNumToName:(long long)arg1;
+ (id)getPokeEnterValueKeyFromType:(long long)arg1;
+ (id)getPokeEnterReadFlagKeyFromType:(long long)arg1;
+ (void)setPokeEnterReadFlag:(long long)arg1 value:(_Bool)arg2;
+ (_Bool)getPokeEnterReadFlag:(long long)arg1;
+ (void)removePokeEnterValue:(long long)arg1;
+ (void)setPokeEnterValue:(long long)arg1 value:(int)arg2;
+ (int)getPokeEnterValue:(long long)arg1;
+ (id)animationSourcePath;
+ (void)checkMD5ThenUnzipPackOfPath:(id)arg1;
+ (void)dowonLoadAnimationSource;
+ (void)dowonLoadSource;
+ (_Bool)unPackAndSaveSourceFile:(id)arg1 saveToPath:(id)arg2;
+ (_Bool)unPackAndSaveSourceFile:(id)arg1;
+ (id)sourcePath;
+ (id)GetInstance;
- (void).cxx_destruct;
- (void)clearPokePaintedEgg;
- (id)getPokePaintedEgg;
- (void)appendPokePaintedEgg:(long long)arg1 Time:(double)arg2 Count:(int)arg3 EntryType:(long long)arg4;

@end

