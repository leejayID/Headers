//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZAlbumPickerCell.h>

@class UIImageView, UILabel;

@interface MQZGroupPickerCell : QZAlbumPickerCell
{
    UIImageView *_selectView;
    UILabel *_numLabel;
    UIImageView *_arrowView;
    int _selectedImages;
}

@property(nonatomic) int selectedImages; // @synthesize selectedImages=_selectedImages;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

