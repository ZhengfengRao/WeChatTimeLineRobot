/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCListBaseCellView.h"
#import "MMCPLabelDelegate.h"

@class NSString;

@interface WCListCPWarningCellView : WCListBaseCellView <MMCPLabelDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(float)calculateHeightForRowData:(id)rowData isFirstOneInsection:(BOOL)insection isLastOneInSection:(BOOL)section;
-(void)onRestoreCPLabel:(id)label;
-(void)onClickEvent;
-(void)initView;
@end
