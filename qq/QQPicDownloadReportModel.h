//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQMessageModel;

@interface QQPicDownloadReportModel : NSObject
{
    QQMessageModel *_msgModel;
    double _msgTime;
    int _msgNetworkType;
    double _thumbTime;
    int _thumbNetworkType;
    int _thumbMode;
    double _originalTime;
    int _originalNetworkType;
    int _originalMode;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) QQMessageModel *msgModel; // @dynamic msgModel;
@property(nonatomic) int msgNetworkType; // @dynamic msgNetworkType;
@property(nonatomic) double msgTime; // @dynamic msgTime;
@property(nonatomic) int originalMode; // @dynamic originalMode;
@property(nonatomic) int originalNetworkType; // @dynamic originalNetworkType;
@property(nonatomic) double originalTime; // @dynamic originalTime;
@property(nonatomic) int thumbMode; // @dynamic thumbMode;
@property(nonatomic) int thumbNetworkType; // @dynamic thumbNetworkType;
@property(nonatomic) double thumbTime; // @dynamic thumbTime;

@end

