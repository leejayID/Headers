//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface CNImportServiceCell : UITableViewCell
{
    UILabel *_numLabel;
    UILabel *_decsLabel;
}

@property(nonatomic) __weak UILabel *decsLabel; // @synthesize decsLabel=_decsLabel;
@property(nonatomic) __weak UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (void)setNum:(id)arg1 decs:(id)arg2;
- (void)awakeFromNib;

@end
