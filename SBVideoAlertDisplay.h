/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

#import "ABPredicateDelegate-Protocol.h"

@class NSString;

@interface SBVideoAlertDisplay : SBSlidingAlertDisplay <ABPredicateDelegate>
{
    NSString *_contactDisplayName;
    BOOL _answered;
    unsigned int _isAccepting;
    BOOL _wasToldToStopRinging;
    BOOL _isStandardRinging;
    BOOL _isCallWaitingRinging;
    BOOL _pendingRing;
}

+ (id)newTopBarForInstance:(id)arg1;
+ (id)newBottomLockBarForDisplay:(id)arg1;
+ (id)newBottomBarForInstance:(id)arg1;
- (BOOL)predicateShouldContinue:(id)arg1;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (void)_updateDisplayControllerForOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (void)updateImageFromPerson:(void *)arg1;
- (void)ringerChanged;
- (void)_ringIfNecessary;
- (void)updateRingtone;
- (BOOL)_shouldAutoAnswerConference;
- (void)alertDisplayWillBecomeVisible;
- (void)setAlert:(id)arg1;
- (void)alertDisplayBecameVisible;
- (void)finishedAnimatingIn;
- (BOOL)showsDesktopImage;
- (void)setupMissedVC;
- (void)decline;
- (void)dismissWithAnimations;
- (void)dismiss;
- (void)inviterCanceledConference;
- (void)accept;
- (void)lockBarUnlocked:(id)arg1;
- (void)endWhileConnecting;
- (void)checkForStatusChange;
- (BOOL)shouldRingOrVibrate;
- (void)ringOrVibrate;
- (void)stopRingingOrVibrating;
- (id)contactDisplayName;
- (void)setContactDisplayName:(id)arg1;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (BOOL)wasToldToStopRinging;
- (void)dealloc;

@end

