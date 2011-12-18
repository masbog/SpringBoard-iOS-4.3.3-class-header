/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_lastKnownUserGeneratedIconState;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    NSMutableSet *_downloadedIconIDs;
    SBRootFolder *_rootFolder;
    BOOL _needsRelayout;
}

+ (id)sharedInstance;
+ (id)_modernIconCellForCell:(id)arg1;
+ (id)_modernIconListForList:(id)arg1;
+ (id)_modernIconListsForLists:(id)arg1;
+ (id)modernIconStateForState:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)rootFolder;
- (void)localeChanged;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (BOOL)isIconVisible:(id)arg1;
- (void)replaceDownloadingIconIdentifiers:(id)arg1 withAppIconIdentifiers:(id)arg2;
- (void)uninstallLeafIcon:(id)arg1;
- (id)addDownloadingIconForDownload:(id)arg1;
- (id)addDownloadingIconForIdentifier:(id)arg1;
- (void)removeApplicationIconForDownloadingIcon:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (void)addIconForApplication:(id)arg1;
- (void)loadAllIcons;
- (id)visibleIconIdentifiers;
- (id)leafIcons;
- (id)applicationIcons;
- (id)leafIconForIdentifier:(id)arg1;
- (id)applicationIconForDisplayIdentifier:(id)arg1;
- (id)iconState;
- (id)iconStatePath;
- (id)_iconState;
- (void)noteIconStateChangedExternally;
- (void)createIconLists;
- (void)uninstallBookmarkIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)_indexPathForIdentifier:(id)arg1 inListRepresentation:(id)arg2;
- (id)_indexPathForIdentifier:(id)arg1 inListsRepresentation:(id)arg2;
- (BOOL)hasCachedUserGeneratedIconState;
- (void)clearCachedUserGeneratedIconState;
- (id)designatedIndexPathForNewIcon:(id)arg1 replaceExistingIcon:(char *)arg2;
- (void)_addNewIconToDesignatedLocation:(id)arg1;
- (void)deleteIconState;
- (void)_writeIconStateWithNotification:(BOOL)arg1;
- (void)saveIconState;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconWithDownloadingIcon:(id)arg1;
- (void)noteFolderStoppedAnimating;
- (void)noteDownloadsEnded;
- (void)noteDownloadsCompletedForIconIDs:(id)arg1;
- (void)removeDownloadedIconID:(id)arg1;
- (id)downloadedIconIDs;
- (void)relayout;
- (void)uninstallApplicationIcon:(id)arg1;
- (id)exportState:(BOOL)arg1;
- (id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2;
- (id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2;
- (id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2;
- (id)_iTunesDictionaryForLeafIcon:(id)arg1;
- (BOOL)importState:(id)arg1;

@end
