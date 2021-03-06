/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    BOOL _wasPresentedAnimated;
}

- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(BOOL)arg3;
- (id)remoteViewIdentifier;
- (id)application;
- (BOOL)wasPresentedAnimated;
- (void)noteSheetDidEnd;
- (void)dealloc;

@end

