/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBCallAlertDisplay.h"

@class TPBottomButtonBar, TPCallWaitingButton, TPPushButton;

@interface SBCallWaitingAlertDisplay : SBCallAlertDisplay
{
    TPCallWaitingButton *_ignoreButton;
    TPCallWaitingButton *_answerButton;
    TPPushButton *_answerAndReleaseButton;
    TPBottomButtonBar *_animatingBottomBar;
    unsigned int _didRelease:1;
    unsigned int _didHeldRelease:1;
    unsigned int _setupForThree:1;
}

+ (id)newBottomBarForInstance:(id)arg1;
+ (id)_newBottomButtonBarForDisplay:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)_callCountChanged:(id)arg1;
- (void)_callWaitingControlsFaded;
- (void)_setPhoneFlipBackAttribute;
- (void)ignore;
- (void)dismiss;
- (id)additionalURLParameter;
- (void)answerCall:(struct __CTCall *)arg1;
- (void)answerAndRelease:(id)arg1;
- (void)endAllCalls:(id)arg1;
- (void)setMiddleContentAlpha:(float)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (void)_bottomBarSwitchHalfDone;
- (void)_bottomBarSwitchDone;
- (void)updateDesktopImage:(id)arg1;
- (void)_addCallWaitingButtons:(BOOL)arg1;

@end

