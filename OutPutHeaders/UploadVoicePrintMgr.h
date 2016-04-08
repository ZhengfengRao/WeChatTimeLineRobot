/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "IRsaCertMgrExt.h"

@class NSMutableArray, MMTimer, NSString;
@protocol UploadVoicePrintMgrDelegate;

@interface UploadVoicePrintMgr : MMObject <PBMessageObserverDelegate, IRsaCertMgrExt> {
	unsigned long _uploadType;
	unsigned long _curVoiceId;
	unsigned long _curResId;
	unsigned long _curScene;
	BOOL _isUploading;
	BOOL _isEnd;
	NSMutableArray* _uploadQueue;
	unsigned long _voiceTicket;
	unsigned long _cacheLastOffset;
	unsigned long _cacheLastlength;
	unsigned long _sameLoopCount;
	float _upload_per_time;
	id<UploadVoicePrintMgrDelegate> delegate;
	MMTimer* checkUploadQueueTimer;
	NSString* RsaVerifyTicket;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* RsaVerifyTicket;
@property(retain, nonatomic) MMTimer* checkUploadQueueTimer;
@property(assign, nonatomic) id<UploadVoicePrintMgrDelegate> delegate;
@property(assign, nonatomic) unsigned long curResId;
-(void).cxx_destruct;
-(void)AddNewPart:(unsigned long)part Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag;
-(void)MainUpdateQueue:(id)queue;
-(void)Stop;
-(void)Start:(unsigned long)start UploadType:(unsigned long)type withScene:(unsigned long)scene andResID:(unsigned long)anId;
-(void)ResetVoiceTicket;
-(void)dealloc;
-(id)init;
-(void)doUpload:(unsigned long)upload Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag;
-(void)checkUploadQueue;
-(void)stopUploadTaskWithErr:(int)err;
-(void)stopUploadTask;
-(void)clearTempFile;
-(void)RSAProtobufMessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleReturn:(id)aReturn Event:(unsigned long)event;
-(void)cleanItem;
@end
