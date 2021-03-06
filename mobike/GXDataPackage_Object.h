//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GXDatagramHeader, NSMutableArray, NSMutableData;

@interface GXDataPackage_Object : NSObject
{
    NSMutableData *headerIdentifier_;
    NSMutableData *headerData_;
    GXDatagramHeader *header_;
    NSMutableArray *subdatagrams_;
    int currentDealSubdatagramIndex_;
}

@property(readonly, nonatomic) NSMutableArray *subdatagrams; // @synthesize subdatagrams=subdatagrams_;
@property(nonatomic) int currentDealSubdatagramIndex; // @synthesize currentDealSubdatagramIndex=currentDealSubdatagramIndex_;
@property(retain, nonatomic) NSMutableData *headerData; // @synthesize headerData=headerData_;
@property(retain, nonatomic) NSMutableData *headerIdentifier; // @synthesize headerIdentifier=headerIdentifier_;
@property(readonly, nonatomic) GXDatagramHeader *header; // @synthesize header=header_;
- (void).cxx_destruct;
- (void)datagramHeaderReceived;
- (void)dealloc;
- (id)init;

@end

