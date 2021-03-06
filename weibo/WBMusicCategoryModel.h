//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface WBMusicCategoryModel : JSONModel
{
    NSString *_tag_id;
    NSString *_name;
    NSString *_photo;
}

+ (id)modelWithId:(id)arg1 name:(id)arg2 photo:(id)arg3;
+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tag_id; // @synthesize tag_id=_tag_id;
- (void).cxx_destruct;

@end

