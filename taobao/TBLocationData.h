//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSMutableArray, NSString, TBWifiData;

@interface TBLocationData : NSObject <NSCoding, NSCopying>
{
    int _locationType;
    float _longitude;
    float _latitude;
    float _altitude;
    int _provinceCode;
    int _cityCode;
    int _areaCode;
    NSDate *_time;
    long long _accuracy;
    long long _verticalAccuracy;
    NSString *_countryName;
    NSString *_provinceName;
    NSString *_cityName;
    NSString *_areaName;
    NSString *_address;
    NSString *_township;
    NSMutableArray *_poiList;
    TBWifiData *_wifi;
}

@property(retain, nonatomic) TBWifiData *wifi; // @synthesize wifi=_wifi;
@property(retain, nonatomic) NSMutableArray *poiList; // @synthesize poiList=_poiList;
@property(retain, nonatomic) NSString *township; // @synthesize township=_township;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(nonatomic) int areaCode; // @synthesize areaCode=_areaCode;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(nonatomic) int provinceCode; // @synthesize provinceCode=_provinceCode;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(nonatomic) long long verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) long long accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isPOIDataModel;
- (_Bool)isAddressDataModel;
- (_Bool)isCoordinateDataModel;
- (id)separateCity;
- (void)unPacketCLLocationData:(id)arg1 wifi:(id)arg2;
- (void)unPacketAddressData:(id)arg1;
- (void)unPacketPoiListData:(id)arg1;
- (void)unPacketCLLocationData:(id)arg1;
- (void)unPacketWifiLocationData:(id)arg1;
- (void)resetWIFIModelWithLocation:(id)arg1;
- (void)resetPOIModelWithLocation:(id)arg1;
- (void)resetAddressModelWithLocation:(id)arg1;
- (void)resetCoordinateModelWithLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

