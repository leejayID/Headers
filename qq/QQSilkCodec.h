//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQSilkCodec : NSObject
{
    unsigned long long _silkSampleRate;
    unsigned long long _silkBitRate;
    unsigned long long _silkDurationPreFrame;
    unsigned long long _silkSamplesPerFrame;
    _Bool _needSavePcmFile;
    int _xo;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
    } *_encodeControl;
    void *_encodeObject;
    short *_frameBuffer;
    unsigned int _frameBufferLength;
    unsigned int _frameBufferedSamples;
    unsigned long long _frameCount;
    void *_agc;
    int _stgain;
    struct NsxHandleT *_nsx;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
    } *_decodeControl;
    void *_decodeObject;
    struct VoiceMessageDenoise *_voiceMessageDeNoice;
    _Bool _encodeEnableAgc;
    _Bool _encodeEnableNsx;
    _Bool _initSuccessDenoiseSDK;
}

- (id)description;
- (id)agcnsxSampleData:(id)arg1 length:(unsigned long long)arg2;
- (id)decode:(id)arg1 withLostFlag:(unsigned char)arg2;
- (_Bool)setDecodeParam;
- (id)encode:(short *)arg1 withSamplesCount:(unsigned long long)arg2;
- (id)encodeOneFrame:(short *)arg1 length:(unsigned int)arg2 withSamplesCount:(unsigned int)arg3;
- (unsigned long long)encode:(id)arg1 withSamplesCount:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)cleanEncode;
- (_Bool)setEncodeParam;
- (_Bool)freeNsx;
- (_Bool)initNsx;
- (_Bool)freeAgc;
- (_Bool)initAgc;
- (_Bool)deallocEncodeBuffer;
- (_Bool)allocEncodeBuffer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool encodeEnableAgc; // @dynamic encodeEnableAgc;
@property(nonatomic) _Bool encodeEnableNsx; // @dynamic encodeEnableNsx;
@property(nonatomic) _Bool needSavePcmFile; // @dynamic needSavePcmFile;
@property(nonatomic) unsigned long long silkBitRate; // @dynamic silkBitRate;
@property(nonatomic) unsigned long long silkDurationPreFrame; // @dynamic silkDurationPreFrame;
@property(nonatomic) unsigned long long silkSampleRate; // @dynamic silkSampleRate;
@property(nonatomic) unsigned long long silkSamplesPerFrame; // @dynamic silkSamplesPerFrame;

@end
