//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSString, QZJPhotoCommPageInfo;

@interface QZJPhotoFaissSearchResult : JceObjectV2
{
    NSArray *_jcev2_p_0_o_photolist__b0x9i_VOQZJPhotoPhoto;
    QZJPhotoCommPageInfo *_jcev2_p_1_o_page_info;
    NSString *_jcev2_p_2_o_categoryid;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_categoryid, setter=setJce_categoryid:) NSString *jcev2_p_2_o_categoryid; // @synthesize jcev2_p_2_o_categoryid=_jcev2_p_2_o_categoryid;
@property(retain, nonatomic, getter=jce_page_info, setter=setJce_page_info:) QZJPhotoCommPageInfo *jcev2_p_1_o_page_info; // @synthesize jcev2_p_1_o_page_info=_jcev2_p_1_o_page_info;
@property(retain, nonatomic, getter=jce_photolist, setter=setJce_photolist:) NSArray *jcev2_p_0_o_photolist__b0x9i_VOQZJPhotoPhoto; // @synthesize jcev2_p_0_o_photolist__b0x9i_VOQZJPhotoPhoto=_jcev2_p_0_o_photolist__b0x9i_VOQZJPhotoPhoto;
- (void).cxx_destruct;
- (id)init;

@end

