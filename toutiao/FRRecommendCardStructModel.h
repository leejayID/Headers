//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRActivityStructModel, FRCommonUserStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRRecommendCardStructModel : JSONModel
{
    FRCommonUserStructModel *_user;
    NSString<Optional> *_recommend_reason;
    NSNumber<Optional> *_recommend_type;
    FRActivityStructModel<Optional> *_activity;
    NSString<Optional> *_stats_place_holder;
    NSNumber<Optional> *_card_type;
    NSString<Optional> *_profile_user_id;
}

@property(retain, nonatomic) NSString<Optional> *profile_user_id; // @synthesize profile_user_id=_profile_user_id;
@property(retain, nonatomic) NSNumber<Optional> *card_type; // @synthesize card_type=_card_type;
@property(retain, nonatomic) NSString<Optional> *stats_place_holder; // @synthesize stats_place_holder=_stats_place_holder;
@property(retain, nonatomic) FRActivityStructModel<Optional> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSNumber<Optional> *recommend_type; // @synthesize recommend_type=_recommend_type;
@property(retain, nonatomic) NSString<Optional> *recommend_reason; // @synthesize recommend_reason=_recommend_reason;
@property(retain, nonatomic) FRCommonUserStructModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

