//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXClientUtils : NSObject
{
}

+ (id)getUTF8StringFromBase64String:(id)arg1;
+ (id)getBase64StringForUTF8String:(id)arg1;
+ (id)stringWithUTF8Format:(const char *)arg1;
+ (id)stringWithSuitableLength:(unsigned long long)arg1 UTF8Format:(const char *)arg2;
+ (_Bool)isEHelperId:(id)arg1;
+ (id)getBossIdFromEHelperId:(id)arg1;
+ (id)getChnIdFromOtherChnSiteId:(id)arg1;
+ (id)getWXIdFromWWId:(id)arg1;
+ (id)getWWIdFromWXId:(id)arg1;
+ (id)eliminateNullObjectInArray:(id)arg1;
+ (id)eliminateNullObjectInDictionary:(id)arg1;
+ (_Bool)isEqualURLWithoutSchema:(id)arg1 otherURL:(id)arg2;
+ (id)changeToSecurityHttpsURL:(id)arg1;
+ (id)getParamsInUrlString:(id)arg1;
+ (id)urlString:(id)arg1 removeParams:(id)arg2;
+ (id)urlString:(id)arg1 appendParams:(id)arg2;
+ (id)urlEncode:(id)arg1 stringEncoding:(unsigned long long)arg2;
+ (id)decodeURL:(id)arg1;
+ (id)encodeURL:(id)arg1;
+ (const char *)SpecialUTF8String:(id)arg1;
+ (id)findPinyin:(unsigned short)arg1;
+ (id)getPinyinLookforString:(id)arg1;
+ (void)getPinyinforString:(id)arg1 withCapList:(id)arg2 withFullPingyinList:(id)arg3;
+ (id)getFullName:(id)arg1 fromDisplayName:(id)arg2;
+ (id)getCapitalCharsOfName:(id)arg1;
+ (id)generateHash:(int)arg1 CodeWithData:(const void *)arg2 DataLength:(unsigned long long)arg3;
+ (_Bool)GenerateHash:(int)arg1 Code:(id *)arg2 WithData:(id)arg3;
+ (id)calcUDIDString;
+ (struct CGSize)getImageFitsize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
+ (struct CGSize)getRealSizeFromScreenScaleSize:(struct CGSize)arg1;
+ (struct CGSize)getScreenScaleSizeFromRealSize:(struct CGSize)arg1;
+ (struct CGSize)getCGSizeFromIntegerSize:(long long)arg1;
+ (long long)getIntegerSizeFromCGSize:(struct CGSize)arg1;
+ (struct CGSize)getSizeFromImageUrl:(id)arg1;
+ (id)getClipImage:(id)arg1 clipRect:(struct CGRect)arg2;
+ (id)getZoomImage:(id)arg1 sizeNew:(struct CGSize)arg2;

@end
