//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZCommonPhotoButton.h>

@class QZJVideoVideo, UILabel;

@interface MQZCommonVideoButton : MQZCommonPhotoButton
{
    UILabel *_timeLabel;
    UILabel *_rightDesc;
    QZJVideoVideo *_videoModel;
}

+ (id)stringFromSeconds:(int)arg1;
@property(retain, nonatomic) QZJVideoVideo *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

