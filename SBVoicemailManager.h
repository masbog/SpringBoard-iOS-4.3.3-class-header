/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBVoicemailManager : NSObject
{
    CDStruct_2a99e736 _alertMark;
    CDStruct_2a99e736 _awayItemMark;
    BOOL _hasVisualVoicemail;
    int _visualVoicemailSubscriptionToken;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setHasVisualVoicemail:(BOOL)arg1;
- (void)_updateVisualVoicemailState;
- (BOOL)_hasVisualVoicemail;
- (void)_mark:(CDStruct_2a99e736 *)arg1;
- (void)markForAlerts;
- (void)markForAwayItems;
- (void)mark;
- (id)copyVisualVoicemailRecordsForAwayItems;
- (void)_presentAlertForRecord:(void *)arg1 visualVoicemail:(BOOL)arg2;
- (void)_handleVoicemailAvailableNotification:(id)arg1;
- (void)_handleVoicemailStoreChangedNotification;
- (void)_handleVoicemailFallbackNotification;

@end
