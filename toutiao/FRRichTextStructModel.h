//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRRichTextAttributesStructModel, NSString;
@protocol Optional;

@interface FRRichTextStructModel : JSONModel
{
    NSString<Optional> *_text;
    FRRichTextAttributesStructModel<Optional> *_attributes;
}

@property(retain, nonatomic) FRRichTextAttributesStructModel<Optional> *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
