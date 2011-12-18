/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBOrientationLockManager : NSObject
{
    int _override;
    int _lockedOrientation;
    int _overrideOrientation;
}

+ (id)sharedInstance;
- (void)restoreStateFromPrefs;
- (void)dealloc;
- (void)lock;
- (void)lock:(int)arg1;
- (void)unlock;
- (BOOL)isLocked;
- (int)lockOrientation;
- (void)setLockOverride:(int)arg1 orientation:(int)arg2;
- (int)lockOverride;
- (int)overrideOrientation;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (void)_changeLockState:(id)arg1;
- (BOOL)_effectivelyLocked;
- (int)_effectiveOrientation;
- (int)_deviceOrientationFromInterfaceOrientation:(int)arg1;

@end

