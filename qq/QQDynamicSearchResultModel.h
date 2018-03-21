//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString;

@interface QQDynamicSearchResultModel : QQModel
{
    NSString *_resultId;
    NSString *_name;
    NSString *_picUrl;
    NSString *_jmpUrl;
    NSString *_word;
    NSString *_extension;
    unsigned int _layoutId;
    NSString *_layoutContent;
    NSMutableDictionary *_layoutContentInfo;
    unsigned long long _searchId;
    unsigned long long _itemType;
    unsigned long long _jmpType;
    unsigned long long _groupMask;
    NSString *_groupName;
    NSString *_searchKeyword;
    NSMutableDictionary *_extensionInfo;
    double _heightForCell;
    NSArray *_highlightWords;
    _Bool _isSubTabResult;
    unsigned long long _sectionGroupMask;
    NSMutableArray *_subItemArray;
    NSString *_searchVer;
    NSIndexPath *_indexPath;
    _Bool _isReported;
    unsigned long long _rowFromFirst;
    int _xo;
    _Bool _hideTitleBlankView;
}

@property(nonatomic) _Bool hideTitleBlankView; // @synthesize hideTitleBlankView=_hideTitleBlankView;
- (id)getReportThreeReserveItemType;
- (id)filterKeyWords:(id)arg1;
@property(copy, nonatomic) NSString *layoutContent; // @dynamic layoutContent;
@property(copy, nonatomic) NSString *extension; // @dynamic extension;
@property(nonatomic) unsigned long long groupMask; // @dynamic groupMask;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *extensionInfo; // @dynamic extensionInfo;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) double heightForCell; // @dynamic heightForCell;
@property(retain, nonatomic) NSArray *highlightWords; // @dynamic highlightWords;
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;
@property(nonatomic) _Bool isReported; // @dynamic isReported;
@property(nonatomic) _Bool isSubTabResult; // @dynamic isSubTabResult;
@property(nonatomic) unsigned long long itemType; // @dynamic itemType;
@property(nonatomic) unsigned long long jmpType; // @dynamic jmpType;
@property(copy, nonatomic) NSString *jmpUrl; // @dynamic jmpUrl;
@property(retain, nonatomic) NSMutableDictionary *layoutContentInfo; // @dynamic layoutContentInfo;
@property(nonatomic) unsigned int layoutId; // @dynamic layoutId;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(copy, nonatomic) NSString *resultId; // @dynamic resultId;
@property(nonatomic) unsigned long long rowFromFirst; // @dynamic rowFromFirst;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(copy, nonatomic) NSString *searchKeyword; // @dynamic searchKeyword;
@property(copy, nonatomic) NSString *searchVer; // @dynamic searchVer;
@property(nonatomic) unsigned long long sectionGroupMask; // @dynamic sectionGroupMask;
@property(retain, nonatomic) NSMutableArray *subItemArray; // @dynamic subItemArray;
@property(copy, nonatomic) NSString *word; // @dynamic word;

@end
