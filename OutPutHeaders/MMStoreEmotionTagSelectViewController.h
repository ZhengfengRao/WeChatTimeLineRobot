/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "FavTagEditViewDelegate.h"

@class NSArray, UIViewController, UIView, NSString, NSDictionary, FavTagListView, MMUIScrollView;
@protocol MMStoreEmotionTagSelectDelegate;

@interface MMStoreEmotionTagSelectViewController : MMUIViewController <FavTagEditViewDelegate> {
	UIViewController* m_blurViewController;
	UIView* m_backgroundView;
	UIView* m_fakeNavigationBarView;
	NSArray* m_tagDescList;
	NSDictionary* m_tagDic;
	NSString* m_lastSelectedTagDesc;
	MMUIScrollView* m_scrollView;
	FavTagListView* m_tagListView;
	id<MMStoreEmotionTagSelectDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MMStoreEmotionTagSelectDelegate> delegate;
-(void).cxx_destruct;
-(void)onTouchEndBlankView;
-(void)onTagHighLight:(id)light;
-(void)OnCancelClick;
-(void)configBackgrounView;
-(void)onTopBarFrameChanged;
-(void)configTagListView;
-(void)updateScrollView;
-(void)configScrollView;
-(void)configFakeNavitionBarBackground;
-(void)configNavigationBar;
-(void)initView;
-(BOOL)useTransparentNavibar;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)setBlurViewFromViewController:(id)viewController;
-(id)initWithTagList:(id)tagList AndSelectedTag:(id)tag;
-(void)dealloc;
@end

