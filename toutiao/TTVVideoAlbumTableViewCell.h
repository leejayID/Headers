//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class NSDictionary, UIView;
@protocol TTVArticleProtocol;

@interface TTVVideoAlbumTableViewCell : SSThemedTableViewCell
{
    _Bool _isCurrentPlaying;
    id <TTVArticleProtocol> _protoedArticle;
    UIView *_cellView;
    NSDictionary *_logPb;
}

@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) id <TTVArticleProtocol> protoedArticle; // @synthesize protoedArticle=_protoedArticle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh;
- (void)protoedArticle:(id)arg1;

@end
