/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCAccountFillPhoneViewControllerDelegate <NSObject>
@optional
-(void)onFillPhoneBindAgreeMobileCanBeFound:(BOOL)found;
-(void)onFillPhoneNext:(id)next phoneNumber:(id)number pwd:(id)pwd;
-(void)onFillPhoneNext:(id)next phoneNumber:(id)number;
-(void)onFillPhoneBack;
-(void)onFillPhoneSetPrivate;
-(void)onFillPhoneFromRegToLogin;
-(void)onByPhonePwdLoginByVerifyCode:(id)code phoneNumber:(id)number;
-(void)onFillPhoneLoginByOtherForIPad:(id)ipad;
-(void)onFillPhoneLoginByQQ;
-(void)onFillPhoneReg;
-(void)onFillPhoneGoToSecurityCenter;
@end

