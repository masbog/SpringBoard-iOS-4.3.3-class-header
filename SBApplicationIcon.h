/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class NSString;

@interface SBApplicationIcon : SBLeafIcon
{
    NSString *_displayIdentifier;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (id)application;
- (id)generateIconImage:(int)arg1;
- (id)displayName;
- (id)leafIdentifier;
- (BOOL)shouldEllipsizeLabel;
- (id)tags;
- (id)_automationID;
- (BOOL)launchEnabled;
- (void)launch;
- (void)setBadge:(id)arg1;
- (void)_setBadge:(id)arg1;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
- (id)applicationBundleID;

@end
