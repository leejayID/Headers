//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKPaymentBannerConfig : NSObject
{
    NSString *_bannerBoxUrl;
    NSString *_bannerBoxButton;
    NSString *_bannerBoxMessage;
}

@property(copy, nonatomic) NSString *bannerBoxMessage; // @synthesize bannerBoxMessage=_bannerBoxMessage;
@property(copy, nonatomic) NSString *bannerBoxButton; // @synthesize bannerBoxButton=_bannerBoxButton;
@property(copy, nonatomic) NSString *bannerBoxUrl; // @synthesize bannerBoxUrl=_bannerBoxUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

@end

