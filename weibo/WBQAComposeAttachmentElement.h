//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeAttachmentElement.h"

#import "WBNoteProQAAnswerComposeViewControllerDelegate-Protocol.h"

@class NSString, WBComposeAttachment;
@protocol WBComposeElementDelegate;

@interface WBQAComposeAttachmentElement : WBComposeAttachmentElement <WBNoteProQAAnswerComposeViewControllerDelegate>
{
    NSString *_composeContent;
    id <WBComposeElementDelegate> _context;
    NSString *_objectId;
    WBComposeAttachment *_editingAttachment;
}

+ (id)subtypeIdentifier;
+ (id)composeAddonIdentifier;
+ (id)composeSchemeType;
@property(retain, nonatomic) WBComposeAttachment *editingAttachment; // @synthesize editingAttachment=_editingAttachment;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) __weak id <WBComposeElementDelegate> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)answerComposerDidCancel:(id)arg1;
- (void)answerComposer:(id)arg1 didFinishWithAnswer:(id)arg2;
- (void)startPickingAttachment;
@property(readonly, nonatomic) NSString *composeContent;
- (void)updateAttachmentFromAnswer:(id)arg1;
- (id)imageResourceWithKey:(id)arg1 keyGroup:(id)arg2 image:(id)arg3;
- (id)textResourceWithKey:(id)arg1 content:(id)arg2;
- (unsigned long long)elementVcontentType;
- (_Bool)isV_content;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

