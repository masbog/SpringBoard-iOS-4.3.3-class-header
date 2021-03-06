/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject
{
    NSMutableDictionary *_appToSheetMap;
    UIWindow *_presentationWindow;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)presentSheetView:(id)arg1 animated:(BOOL)arg2;
- (void)_tearDownSheet:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)dismissSheetView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(BOOL)arg3 animated:(BOOL)arg4;
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(BOOL)arg3;
- (void)sendDeviceOrientationChangesToSheets;
- (void)sendStatusBarOrientationWillChangeToSheets:(int)arg1 duration:(float)arg2;
- (BOOL)isShowingSheets;
- (BOOL)isShowingSheetsForApplication:(id)arg1;
- (void)dismissAllSheets;
- (void)dismissSheetsForApplication:(id)arg1;
- (id)applicationForTopSheet;
- (BOOL)sheetWantsProgress;

@end

