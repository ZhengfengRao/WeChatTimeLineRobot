/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "ContactTagDetailViewControllerDelegate.h"

@class UILabel, NSArray, UIView, NSString, MMTableView, NSMutableDictionary, NSDictionary, ContactTagData;
@protocol SelectTagContactsViewControllerDelegate;

@interface SelectTagContactsViewController : MMUIViewController <ContactTagDetailViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableDictionary* m_dicMultiSelect;
	id<SelectTagContactsViewControllerDelegate> m_delegate;
	UIView* m_viewLabel;
	UILabel* m_countLabel;
	BOOL _bNeedReload;
	BOOL _bNeedDismiss;
	NSString* tagName;
	NSArray* m_arrTagContacts;
	NSDictionary* m_dicExistContact;
	int m_FromWhichScene;
	ContactTagData* m_contactTagData;
	unsigned _m_memberCountLimit;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ContactTagData* m_contactTagData;
@property(retain, nonatomic) NSDictionary* m_dicExistContact;
@property(retain, nonatomic) NSArray* m_arrTagContacts;
@property(retain, nonatomic) NSString* tagName;
@property(assign, nonatomic) int m_FromWhichScene;
@property(assign, nonatomic) unsigned m_memberCountLimit;
@property(assign, nonatomic) __weak id<SelectTagContactsViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onDeleteContactTagSuccess:(id)success;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeTagCell:(id)cell row:(unsigned)row;
-(void)makeCell:(id)cell contact:(id)contact;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)updateMultiSelect:(id)select contact:(id)contact tableView:(id)view;
-(void)removeSelect:(id)select;
-(void)addSelect:(id)select;
-(id)getCellImage:(id)image;
-(BOOL)isSelected:(id)selected;
-(BOOL)isExisted:(id)existed;
-(void)makeEmptyTipsView;
-(void)initTableView;
-(void)onDone:(id)done;
-(void)onCancel:(id)cancel;
-(void)onDismiss:(id)dismiss;
-(void)onManageTag:(id)tag;
-(void)updateRightBarBtn;
-(void)initTitleArea;
-(void)initView;
-(void)initData;
-(void)sortTagContacts;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)init;
@end
