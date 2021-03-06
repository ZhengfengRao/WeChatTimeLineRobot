/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCForceTouchPreviewProtocol.h"
#import "UIAlertViewDelegate.h"
#import "MMUIView.h"

@class UIImageView, UILabel, UIView, NSString, MMAsset;

@interface MMAssetView : MMUIView <UIAlertViewDelegate, WCForceTouchPreviewProtocol> {
	UIView* _overlayView;
	UIImageView* _markSelectedImageView;
	BOOL bSelected;
	int index;
	BOOL selected;
	MMAsset* asset;
	id parent;
	UIImageView* m_assetImageView;
	UIView* _m_tagBackgroundView;
	UILabel* _m_lengthLabel;
	UIImageView* _m_videoLogoView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* m_videoLogoView;
@property(retain, nonatomic) UILabel* m_lengthLabel;
@property(retain, nonatomic) UIView* m_tagBackgroundView;
@property(retain, nonatomic) UIImageView* m_assetImageView;
@property(assign, nonatomic) int index;
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) __weak id parent;
@property(retain, nonatomic) MMAsset* asset;
-(void).cxx_destruct;
-(CGRect)previewingSourceRectForLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(id)viewControllerToPreviewWithFromController:(id)controller forLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(BOOL)canPeek;
-(id)timeStringBySeconds:(double)seconds;
-(BOOL)checkThumbImage;
-(void)tagAseetToPreview;
-(void)toggleSelection;
-(void)showedSelectedMark:(BOOL)mark;
-(void)startPopUpAnimation:(id)animation originScale:(float)scale;
-(void)updateVoiceOver;
-(id)initWithAsset:(id)asset;
-(void)updateAsset:(id)asset;
-(void)hideToggle;
@end

