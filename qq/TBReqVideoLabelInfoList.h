//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBReqGeneralListModel.h>

@interface TBReqVideoLabelInfoList : TBReqGeneralListModel
{
    unsigned int _music_type;
    unsigned long long _music_id;
}

@property(nonatomic) unsigned int music_type; // @synthesize music_type=_music_type;
@property(nonatomic) unsigned long long music_id; // @synthesize music_id=_music_id;
- (id)getRequestPBData;

@end

