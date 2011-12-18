/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedNotificationCenter, NSMutableArray, NSTimer;

@interface SBAlertItemsController : NSObject
{
    NSMutableArray *_lockedAlertItems;
    NSMutableArray *_unlockedAlertItems;
    NSMutableArray *_pendingAlertItems;
    NSTimer *_autoDismissTimer;
    CPDistributedNotificationCenter *_notificationCenter;
    unsigned int _notificationClientCount;
    BOOL _systemShuttingDown;
    BOOL _forceAlertsToPend;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)convertAnimatingUnlockedAlertsToLockedAlerts;
- (void)resetAutoDismissTimer;
- (void)activateAlertItem:(id)arg1;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)deactivateAlertItem:(id)arg1;
- (void)deactivateAlertItemsOfClass:(Class)arg1;
- (void)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (void)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)deactivateVisibleAlertItemOfClass:(Class)arg1 reason:(int)arg2;
- (void)autoDismissAlertItem:(id)arg1;
- (id)alertItemOfClass:(Class)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (BOOL)hasAlertOfClass:(Class)arg1;
- (BOOL)hasAlerts;
- (BOOL)hasVisibleAlert;
- (id)visibleAlertItem;
- (BOOL)canDeactivateAlertForMenuClick;
- (BOOL)deactivateAlertForMenuClickWithAnimation:(BOOL)arg1;
- (id)deactivateAlertItemsForLock;
- (BOOL)dontLockOverAlertItems;
- (void)deactivateAlertItemsForAlertActivation;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)notifySystemOfAlertItemActivation:(id)arg1;
- (void)noteSystemShuttingDown;
- (void)setForceAlertsToPend:(BOOL)arg1;
- (void)forceAlertsToPendAndMoveActiveAlertsToPendingWithAnimation:(BOOL)arg1;
- (void)_notificationClientStarted:(id)arg1;
- (void)_notificationClientEnded:(id)arg1;

@end

