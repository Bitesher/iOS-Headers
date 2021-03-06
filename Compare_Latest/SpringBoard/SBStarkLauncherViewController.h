/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBIconListModelObserver-Protocol.h"
#import "SBLeafIconDataSource-Protocol.h"
#import "SBStarkLauncher-Protocol.h"

@class NSMutableDictionary, NSMutableSet, SBStarkFakeIconOperationController, SBStarkIconListModel;

@interface SBStarkLauncherViewController : UIViewController <SBIconListModelObserver, SBStarkLauncher, SBLeafIconDataSource>
{
    NSMutableSet *_displayIdentifiers;
    NSMutableDictionary *_fakeAppsByIdentifier;
    SBStarkIconListModel *_iconList;
    unsigned long long _batchCount;
    _Bool _needsReloadAtEndOfBatch;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    id <SBStarkAutoHideControlBarDelegate> _autoHideDelegate;
}

+ (double)desiredHeightForBounds:(struct CGRect)arg1;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController; // @synthesize fakeIconOperationController=_fakeIconOperationController;
@property(nonatomic) id <SBStarkAutoHideControlBarDelegate> autoHideDelegate; // @synthesize autoHideDelegate=_autoHideDelegate;
@property(readonly, nonatomic) SBStarkIconListModel *iconList; // @synthesize iconList=_iconList;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconAllowsUninstall:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconAppearsInNewsstand:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)_noteIconModelChanged:(id)arg1;
- (void)_noteIconModelActionOnIcon:(id)arg1;
- (void)_noteInstalledApplicationsDidChange:(id)arg1;
- (void)_decrementBatch;
- (void)_incrementBatch;
- (void)_doAsBatchedUpdate:(id)arg1;
- (id)_sortedListOfDisplayIDs;
- (_Bool)_isStarkAware:(id)arg1;
- (void)_reloadIconList;
- (void)_removeAppForDisplayIdentifier:(id)arg1;
- (void)_addIconIfPossible:(id)arg1 withDisplayIdentifier:(id)arg2;
- (void)relayoutIcons;
- (id)suffixFakeIcons;
- (id)prefixFakeIcons;
- (int)iconLocation;
@property(readonly, nonatomic) _Bool obscuresControlBar;
@property(readonly, nonatomic) _Bool hidesAutomatically;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) double height; // @dynamic height;

@end

