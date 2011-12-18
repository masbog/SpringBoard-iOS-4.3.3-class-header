/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBWiFiPasswordAlertItem : SBAlertItem
{
    id _delegate;
    NSString *_name;
    BOOL _btStyle;
}

- (id)initWithNetworkName:(id)arg1;
- (void)dealloc;
- (void)dismiss:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)returnKeyPressed:(id)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)dismissOnLock;
- (void)setBluetoothStyle:(BOOL)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

@end
