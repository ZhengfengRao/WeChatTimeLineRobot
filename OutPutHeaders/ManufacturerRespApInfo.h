/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface ManufacturerRespApInfo : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned protocolType;
@property(retain, nonatomic) NSString* apKey;
@property(retain, nonatomic) NSString* wechatShopName;
@property(assign, nonatomic) int isWechatWifi;
@property(assign, nonatomic) int rssi;
@property(retain, nonatomic) NSString* bssid;
@property(retain, nonatomic) NSString* ssid;
+(void)initialize;
@end
