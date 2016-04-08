/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class SummaryItemView, GameCenterGameBriefInfo, UIView, MMWebImageView, UIButton, UILabel;
@protocol GameCenterRankedGameInfoCellDelegate;

@interface GameCenterRankedGameInfoCell : MMTableViewCell {
	UILabel* _rankLabel;
	MMWebImageView* _iconView;
	UILabel* _nameLabel;
	UILabel* _detailLabel;
	UIButton* _downloadButton;
	UILabel* _gameLabel;
	UIView* _leftBanner;
	SummaryItemView* _firstSummaryView;
	SummaryItemView* _secondSummaryView;
	id<GameCenterRankedGameInfoCellDelegate> _delegate;
	GameCenterGameBriefInfo* _gameInfo;
	unsigned _rank;
	int _index;
}
@property(assign, nonatomic) int index;
@property(assign, nonatomic) unsigned rank;
@property(retain, nonatomic) GameCenterGameBriefInfo* gameInfo;
@property(assign, nonatomic) __weak id<GameCenterRankedGameInfoCellDelegate> delegate;
+(float)heightForCellWithGameInfo:(id)gameInfo;
-(void).cxx_destruct;
-(void)onDownloadButtonClicked:(id)clicked;
-(void)setButtonTitle:(id)title;
-(id)getSummaryItemAtIndex:(unsigned)index;
-(void)reloadData;
-(void)layoutContent;
-(void)initSubviews;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
