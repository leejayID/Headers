//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQHttpClientSession, QQURLRichMsgData;
@protocol QQURLRichMsgHelperDelegate;

@interface QQURLRichMsgHelper : NSObject
{
    QQHttpClientSession *_session;
    NSString *_requestURL;
    NSString *_connIpAddr;
    unsigned int _connIp;
    unsigned int _connPort;
    int _tencentVideoRequestSeq;
    id <QQURLRichMsgHelperDelegate> _deleate;
    long long _iRichServiceFrom;
    NSString *_richMsgURL;
    CDUnknownBlockType _tencentVideoRequestCompletion;
    QQURLRichMsgData *_urlRichMsgData;
}

@property(retain, nonatomic) QQURLRichMsgData *urlRichMsgData; // @synthesize urlRichMsgData=_urlRichMsgData;
@property(copy, nonatomic) CDUnknownBlockType tencentVideoRequestCompletion; // @synthesize tencentVideoRequestCompletion=_tencentVideoRequestCompletion;
@property(nonatomic) int tencentVideoRequestSeq; // @synthesize tencentVideoRequestSeq=_tencentVideoRequestSeq;
@property(copy, nonatomic) NSString *richMsgURL; // @synthesize richMsgURL=_richMsgURL;
@property(nonatomic) long long iRichServiceFrom; // @synthesize iRichServiceFrom=_iRichServiceFrom;
@property(nonatomic) id <QQURLRichMsgHelperDelegate> deleate; // @synthesize deleate=_deleate;
- (id)parseShortURL:(id)arg1;
- (id)createPostBody:(id)arg1;
- (void)processPreviewImage:(id)arg1;
- (id)encodeUrl:(id)arg1;
- (void)fireResponseRichMsgData:(id)arg1;
- (void)fireResponseRichMsgData:(id)arg1 errorCode:(int)arg2;
- (id)replaceHTMLEscapes:(id)arg1;
- (id)createRichMsgData:(id)arg1 ret:(int *)arg2;
- (id)parseJsonResponse:(id)arg1;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)reportQzoneRichInfo:(id)arg1;
- (void)onUrlInfoResponse:(id)arg1;
- (void)_notifyVideoRequestCompletion:(CDUnknownBlockType)arg1 withVideoUrl:(id)arg2;
- (_Bool)requestURLVideoMsg:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestURLRichMsgByConnect:(id)arg1;
- (void)requestURLRichMsgBySSO:(id)arg1;
- (void)dealloc;
- (id)initWithDeleate:(id)arg1;

@end

