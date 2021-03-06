/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSMutableArray, NSDictionary, NSRecursiveLock;
@protocol MMAudioDataReadStreamDelegate, MMAudioDataWriteStreamDelegate;

@interface MMAudioDataPipe : XXUnknownSuperclass {
	NSRecursiveLock* m_lock;
	id<MMAudioDataReadStreamDelegate> m_readDelegate;
	id<MMAudioDataWriteStreamDelegate> m_writeDelegate;
	CFReadStreamRef m_readStream;
	CFWriteStreamRef m_writeStream;
	NSDictionary* m_streamProperties;
	NSMutableArray* m_dataQueue;
	int m_readOffset;
	int m_writeOffset;
}
@property(retain, nonatomic) NSMutableArray* m_dataQueue;
@property(retain, nonatomic) NSDictionary* m_streamProperties;
-(void).cxx_destruct;
-(void)resetStream;
-(BOOL)seekToPosition:(int)position;
-(int)read:(void*)read size:(int)size;
-(void)dataErrorWithCode:(int)code;
-(BOOL)hasBytesAvailable;
-(void)closeStream;
-(BOOL)openReadStream;
-(id)copyStreamProperties;
-(void)handleReadFromCFStream:(CFReadStreamRef)cfstream eventType:(unsigned long)type;
-(void)handleWriteFromCFStream:(CFWriteStreamRef)cfstream eventType:(unsigned long)type;
-(int)getWriteOffset;
-(int)getReadOffset;
-(void)appendEOF;
-(void)stopWithError;
-(void)pumpQueueDataToWriteStream;
-(void)appendBuffer:(id)buffer;
-(void)setProperties:(id)properties;
-(void)setWriteDelegate:(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end

