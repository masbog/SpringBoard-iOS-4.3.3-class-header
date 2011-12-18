/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBWallpaperClipView;

@interface SBRoundedCornersView : UIView
{
    float _cornerRadius;
    UIView *_contentView;
    SBWallpaperClipView *_topLeftCorner;
    SBWallpaperClipView *_topRightCorner;
    SBWallpaperClipView *_bottomLeftCorner;
    SBWallpaperClipView *_bottomRightCorner;
}

- (id)initWithFrame:(struct CGRect)arg1 cornerRadius:(float)arg2 content:(id)arg3 wallpaperView:(id)arg4;
- (void)updateWallpaperOffsets;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

