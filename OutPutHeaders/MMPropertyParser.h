/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "WeChat-Structs.h"


@interface MMPropertyParser : MMObject {
}
+(id)parseProperty:(objc_property*)property;
+(Class)rootClass;
+(BOOL)shouldParserIgnoreToken:(id)token forObj:(id)obj;
+(id)parsePropertyListForObj:(id)obj;
@end
