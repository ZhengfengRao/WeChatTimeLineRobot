/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface WCPayTouchIDAuthHelper : MMObject {
}
+(void)logAbTestItem:(id)item transactionId:(id)anId event:(int)event;
+(BOOL)isDeviceTouchIDAvailableAndNotJailBreak;
+(BOOL)isDeviceTouchIDAvailable;
+(BOOL)isDeviceTouchIDHardwareSupportedAndNotJailBreak;
+(BOOL)isDeviceTouchIDHardwareSupported;
+(BOOL)isDeviceJailBreak;
+(BOOL)isInWhiteList:(id)whiteList;
+(BOOL)canUseTouchIDFromData:(id)data;
+(void)showTouchIDAuthView:(id)view whenSuccess:(id)success whenFail:(id)fail;
@end

