/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnectionDataDelegate.h"

@class NSURLConnection, NSString;

__attribute__((visibility("hidden")))
@interface TVConfigManager : XXUnknownSuperclass <NSURLConnectionDataDelegate> {
	NSString* bakPrefix;
	NSString* otype;
	NSString* platform;
	NSString* host;
	NSString* port;
	NSString* cgi;
	NSString* player_channel_id;
	NSString* version;
	NSString* versionCode;
	NSString* ipflag;
	NSString* guid;
	int MAXRetryTimes;
	double timeout;
	NSURLConnection* configConnection;
	NSString* receiveData;
	BOOL useHTTPS;
	int retryTime;
	BOOL isRequested;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancelAttainConfig;
-(void)SaveConfig:(id)config;
-(id)GetTVProxyConfigVersion;
-(id)GetTVProxyVersionCode;
-(id)GetTVProxyVersion;
-(id)GetTVProxyConfig;
-(id)MakeBKGetServerConfigUrl;
-(id)MakeGetServerConfigUrl;
-(void)SendSynRequestToHost:(id)host withTimeOut:(double)timeOut;
-(BOOL)SendHTTPSRequestToHost:(id)host withTimeOut:(double)timeOut;
-(void)SynRequestForConfig;
-(id)init;
@end
