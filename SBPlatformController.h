/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SBPlatformController : NSObject
{
    NSString *_currentConfigurationName;
    NSMutableDictionary *_currentConfiguration;
    NSMutableDictionary *_currentCapabilities;
    NSDictionary *_discoveredCapabilities;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)systemBuildVersion;
- (id)infoForCapability:(id)arg1;
- (void)setValue:(id)arg1 forCapability:(id)arg2;
- (void)addCapabilities:(id)arg1 resetCapabilites:(id)arg2;
- (BOOL)hasCapability:(id)arg1;
- (id)enabledCapabilities;
- (BOOL)hasRestriction:(id)arg1;
- (BOOL)canDisplayHomescreenWallpaper;
- (id)platformName;
- (id)iconState;
- (void)_addIconListIdentifiers:(id)arg1 toSet:(id)arg2;
- (id)defaultDisplayIdentifiers;
- (BOOL)matchesPlatforms:(id)arg1;
- (id)localizedPlatformName;
- (BOOL)isInternalInstall;
- (BOOL)isCarrierInstall;
- (void)noteITunesStoreCapabilityChanged;
- (id)currentConfigurationName;
- (void)postCurrentConfiguration;
- (id)_copyConfigInfoWithName:(id)arg1;
- (id)_copyDefaultConfigInfo;
- (BOOL)allowSensitiveUI:(BOOL)arg1 hasInternalBundle:(BOOL)arg2;
- (BOOL)isCarrierInstall:(BOOL)arg1 hasInternalBundle:(BOOL)arg2;
- (BOOL)allowYouTube;
- (BOOL)allowYouTubePlugin;
- (void)discoverCurrentConfiguration;
- (void)addAndPostTelephonyCapabilities;
- (struct __CFBoolean *)currentITunesStoreCapability;
- (void)noteConfigurationChangedWithKeys:(id)arg1;

@end
