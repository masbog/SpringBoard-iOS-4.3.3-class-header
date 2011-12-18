/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSTimer;

@interface SBMediaController : NSObject
{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    BOOL _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _lastNowPlayingAppPID;
    BOOL _lastNowPlayingAppIsPlaying;
    BOOL _suppressHUD;
    BOOL _ringerMuted;
}

+ (id)sharedInstance;
+ (BOOL)applicationCanBeConsideredNowPlaying:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (BOOL)hasTrack;
- (BOOL)isFirstTrack;
- (BOOL)isLastTrack;
- (BOOL)isPlaying;
- (BOOL)isMovie;
- (BOOL)isTVOut;
- (id)nowPlayingArtist;
- (id)nowPlayingTitle;
- (id)nowPlayingAlbum;
- (id)nowPlayingApplication;
- (id)mediaControlsDestinationApp;
@property BOOL suppressHUD;
- (BOOL)changeTrack:(int)arg1;
- (BOOL)beginSeek:(int)arg1;
- (BOOL)endSeek:(int)arg1;
- (BOOL)togglePlayPause;
- (float)volume;
- (void)setVolume:(float)arg1;
- (BOOL)muted;
@property(nonatomic, getter=isRingerMuted) BOOL ringerMuted;
- (BOOL)lastSavedRingerMutedState;
- (void)_changeVolumeBy:(float)arg1;
- (float)_calcButtonRepeatDelay;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_serverConnectionDied:(id)arg1;
- (void)_systemVolumeChanged:(id)arg1;
- (void)_systemMuteChanged:(id)arg1;
- (void)_nowPlayingPIDChanged;
- (void)_nowPlayingAppIsPlayingDidChange;
- (void)_cancelPendingVolumeChange;
- (void)_commitVolumeChange:(id)arg1;
- (void)_delayedExtendSleepTimer;

@end

