/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseResponse;

@interface BakChatRecoverHeadResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned totalCount;
@property(assign, nonatomic) unsigned endFlag;
@property(assign, nonatomic) unsigned type;
@property(assign, nonatomic) unsigned startIndex;
@property(assign, nonatomic) unsigned bakChatSvrId;
@property(retain, nonatomic) NSMutableArray* list;
@property(assign, nonatomic) unsigned count;
@property(retain, nonatomic) NSString* bakChatClientId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

