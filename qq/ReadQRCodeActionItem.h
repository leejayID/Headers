//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/ActionBaseItem.h>

@class NSString;

@interface ReadQRCodeActionItem : ActionBaseItem
{
    NSString *_scanResult;
}

+ (id)actionItemWithDelegate:(id)arg1;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
- (void)onItemClick;
- (id)initWithItemDelegate:(id)arg1;

@end
