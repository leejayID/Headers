//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FacePanel, NSString;

@protocol FacePanelDelegate <NSObject>

@optional
- (void)facePanelSetSubject:(FacePanel *)arg1;
- (void)facePanelAddSubject:(FacePanel *)arg1;
- (void)facePanelSendTextAction:(FacePanel *)arg1;
- (void)facePanelFacePicked:(FacePanel *)arg1 faceStyle:(long long)arg2 faceName:(NSString *)arg3 isDeleteKey:(_Bool)arg4;
@end

