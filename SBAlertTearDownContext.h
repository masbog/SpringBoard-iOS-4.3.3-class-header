/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class SBAlert, SBAlertWindow;

@interface SBAlertTearDownContext : NSObject
{
    SBAlertWindow *_window;
    SBAlert *_alert;
}

- (void)dealloc;
@property(retain, nonatomic) SBAlert *alertToTearDown; // @synthesize alertToTearDown=_alert;
@property(retain, nonatomic) SBAlertWindow *windowToTearDown; // @synthesize windowToTearDown=_window;

@end

