/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ActionBase : XXUnknownSuperclass <NSCoding> {
	int _actionType;
	NSString* _key;
	id _actionItem;
	int _showType;
	NSString* _imageUrl;
	NSString* _statId;
}
@property(retain, nonatomic) NSString* statId;
@property(retain, nonatomic) NSString* imageUrl;
@property(assign, nonatomic) int showType;
@property(retain, nonatomic) id actionItem;
@property(retain, nonatomic) NSString* key;
@property(assign, nonatomic) int actionType;
-(void).cxx_destruct;
-(id)toXml;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end
