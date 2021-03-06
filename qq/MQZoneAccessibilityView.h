//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol MQZoneAccessibilityViewDelegate;

@interface MQZoneAccessibilityView : UIView
{
    NSMutableArray *_accessibleElements;
    id <MQZoneAccessibilityViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MQZoneAccessibilityViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;

@end

