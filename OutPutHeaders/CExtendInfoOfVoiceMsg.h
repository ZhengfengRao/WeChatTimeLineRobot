/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IMessageWrapExt.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSData, NSString;

@interface CExtendInfoOfVoiceMsg : XXUnknownSuperclass <IMsgExtendOperation, IMessageWrapExt, NSCopying> {
	unsigned long m_uiVoiceTime;
	unsigned long m_uiVoiceFormat;
	unsigned long m_uiVoiceEndFlag;
	unsigned long m_uiVoiceCancelFlag;
	unsigned long m_uiVoiceForwardFlag;
	NSString* m_nsCommentUrl;
	NSData* m_dtVoice;
	CMessageWrap* m_refMessageWrap;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSData* m_dtVoice;
@property(retain, nonatomic) NSString* m_nsCommentUrl;
@property(assign, nonatomic) unsigned long m_uiVoiceForwardFlag;
@property(assign, nonatomic) unsigned long m_uiVoiceCancelFlag;
@property(assign, nonatomic) unsigned long m_uiVoiceEndFlag;
@property(assign, nonatomic) unsigned long m_uiVoiceFormat;
@property(assign, nonatomic) unsigned long m_uiVoiceTime;
+(void)CreateExtendInfoWithType:(unsigned long)type retExtendInfo:(id*)info;
-(void).cxx_destruct;
-(void)SetPlaySounded:(BOOL)sounded;
-(BOOL)IsPlaySounded;
-(BOOL)IsRecording;
-(void)SetPlayed;
-(BOOL)IsDownloadEnded;
-(BOOL)IsUnPlayed;
-(BOOL)SaveMesVoice:(id)voice;
-(void)ChangeForBackup;
-(void)UpdateContent:(id)content;
-(void)ChangeForDisplay;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

