//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BTD_SSJSBridgeMessage : NSObject
{
    NSString *_messageType;
    NSString *_eventID;
    NSString *_callbackID;
    NSDictionary *_params;
    NSString *_methodName;
    NSString *_JSSDKVersion;
}

@property(retain, nonatomic) NSString *JSSDKVersion; // @synthesize JSSDKVersion=_JSSDKVersion;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;

@end
