/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKGameDetailHeaderView.h>

@class GKGameRecord, GKGameTitleView, GKHeaderSegmentedControl, GKUITheme, UIImageView;

@interface GKGameDetailHeaderViewPhone : GKGameDetailHeaderView
{
    BOOL _landscapeStyle;
    UIImageView *_iconView;
    GKGameTitleView *_titleView;
    GKGameRecord *_gameRecordLocalPlayer;
}

@property(retain, nonatomic) GKGameRecord *gameRecordLocalPlayer; // @synthesize gameRecordLocalPlayer=_gameRecordLocalPlayer;
@property(retain, nonatomic) GKGameTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)setLandscapeStyle:(BOOL)arg1;
- (BOOL)landscapeStyle;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (void)layoutAccessoryViewForBounds:(struct CGRect)arg1;
- (struct CGRect)layoutSubviewsForBounds:(struct CGRect)arg1;
- (void)updateFromGameRecord;
@property(nonatomic) GKHeaderSegmentedControl *segmentedControl;
- (BOOL)iconOnLeft;
@property(retain, nonatomic) GKUITheme *theme;
- (void)configureTitleView;
- (void)dealloc;
- (id)init;

@end
