//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSString;

@interface QZJPhotoAllowJoinShareAlbumData : JceObjectV2
{
    unsigned int _jcev2_p_0_o_joiner;
    unsigned int _jcev2_p_1_o_owner;
    NSString *_jcev2_p_2_o_albumid;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_albumid, setter=setJce_albumid:) NSString *jcev2_p_2_o_albumid; // @synthesize jcev2_p_2_o_albumid=_jcev2_p_2_o_albumid;
@property(nonatomic, getter=jce_owner, setter=setJce_owner:) unsigned int jcev2_p_1_o_owner; // @synthesize jcev2_p_1_o_owner=_jcev2_p_1_o_owner;
@property(nonatomic, getter=jce_joiner, setter=setJce_joiner:) unsigned int jcev2_p_0_o_joiner; // @synthesize jcev2_p_0_o_joiner=_jcev2_p_0_o_joiner;
- (void).cxx_destruct;
- (id)init;

@end
