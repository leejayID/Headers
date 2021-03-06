//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "WBIMSocketClientDelegate-Protocol.h"

@class NSString, NSThread, NSTimer, WBIMConnection, WBIMConnectionPool, WBIMNode, WBIMNodeProvider, WBIMRequest;

@interface WBIMPostOperation : NSOperation <WBIMSocketClientDelegate>
{
    _Bool executing;
    _Bool finished;
    _Bool _connectFlag;
    _Bool _requestFlag;
    WBIMRequest *_request;
    CDUnknownBlockType _finishBlock;
    WBIMNodeProvider *_provider;
    WBIMConnectionPool *_pool;
    WBIMNode *_node;
    WBIMConnection *_connection;
    NSThread *_currentThread;
    NSTimer *_requestTimer;
    NSTimer *_connectTimer;
    NSTimer *_loopTimer;
}

@property(retain, nonatomic) NSTimer *loopTimer; // @synthesize loopTimer=_loopTimer;
@property(retain, nonatomic) NSTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(retain, nonatomic) NSTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(nonatomic) _Bool requestFlag; // @synthesize requestFlag=_requestFlag;
@property(nonatomic) _Bool connectFlag; // @synthesize connectFlag=_connectFlag;
@property(retain, nonatomic) NSThread *currentThread; // @synthesize currentThread=_currentThread;
@property(retain, nonatomic) WBIMConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) WBIMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) WBIMConnectionPool *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) WBIMNodeProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) WBIMRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)socketClient:(id)arg1 didWriteData:(id)arg2;
- (void)socketClient:(id)arg1 didReadData:(id)arg2;
- (void)socketClientDidDisConnect:(id)arg1 withError:(id)arg2;
- (void)socketClient:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)cancel;
- (void)start;
- (void)_connectTimeout;
- (void)_requestTimeout;
- (void)_ignore;
- (void)_finishCallback:(id)arg1 error:(id)arg2;
- (void)_cancelCallback;
- (void)_startPost;
- (void)_removeConnection;
- (void)_finish;
- (void)dealloc;
- (id)initWithNodeProvider:(id)arg1 connectionPool:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

