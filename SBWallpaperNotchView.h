/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBWallpaperClipView;

@interface SBWallpaperNotchView : UIView
{
    CDStruct_d18cc6b1 _notchInfo;
    SBWallpaperClipView *_clipView;
}

- (id)initWithFrame:(struct CGRect)arg1 wallpaperView:(id)arg2 notchInfo:(CDStruct_d18cc6b1)arg3;
- (void)dealloc;
- (void)setNotchInfo:(CDStruct_d18cc6b1)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

