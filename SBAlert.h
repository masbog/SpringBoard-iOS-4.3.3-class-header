/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDisplay.h"

@class NSMutableDictionary, SBAlertDisplay, SBAlertWindow;

@interface SBAlert : SBDisplay
{
    SBAlertDisplay *_display;
    NSMutableDictionary *_dictionary;
    SBAlertWindow *_deferredAlertWindow;
}

+ (void)registerForAlerts;
+ (id)alertWindow;
+ (void)test;
- (void)dealloc;
- (id)display;
- (void)setDisplay:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (BOOL)undimsDisplay;
- (BOOL)showsSpringBoardStatusBar;
- (float)finalAlpha;
- (struct CGRect)alertWindowRect;
- (Class)alertWindowClass;
- (void)_updateStatusBarLockAndTime;
- (int)statusBarStyleOverridesToCancel;
- (void)activate;
- (void)tearDownAlertWindow:(id)arg1;
- (int)interfaceOrientationForActivation;
- (void)removeFromView;
- (void)deactivate;
- (int)effectiveStatusBarStyle;
- (double)autoDimTime;
- (int)statusBarStyle;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingIn;
- (void)didFinishAnimatingOut;
- (BOOL)handleMenuButtonTap;

@end

