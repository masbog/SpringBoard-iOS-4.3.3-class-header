/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class SBApplication;

@interface SBRemoteNotificationEnableSystemwideAlert : SBAlertItem
{
    SBApplication *_app;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (void)_showNotificationsPrefs;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)shouldShowInLockScreen;

@end

