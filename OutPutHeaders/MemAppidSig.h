/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MemSigManager;

@interface MemAppidSig : XXUnknownSuperclass <NSCoding> {
	unsigned dwAppid;
	unsigned dwPriority;
	unsigned dwTime;
	unsigned dwExpTime;
	MemSigManager* memSigManager;
}
@property(assign, nonatomic) unsigned dwExpTime;
@property(assign, nonatomic) unsigned dwTime;
@property(assign, nonatomic) unsigned dwPriority;
@property(assign, nonatomic) unsigned dwAppid;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)printAppidSig;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)appidSigByName:(id)name;
-(void)addAppidSig:(id)sig;
-(void)dealloc;
-(id)init;
@end

