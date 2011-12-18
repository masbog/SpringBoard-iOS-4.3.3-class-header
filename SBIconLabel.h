/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIControl.h"

@class NSString;

@interface SBIconLabel : UIControl
{
    NSString *_label;
    unsigned int _drawMoreLegibly:1;
    unsigned int _inDock:1;
    unsigned int _ellipsizesText:1;
    unsigned int _kerningAllowed:1;
    unsigned int _onWallpaper:1;
}

- (void)dealloc;
- (id)description;
- (void)setText:(id)arg1;
- (void)setInDock:(BOOL)arg1;
- (void)setDisplaysOnWallpaper:(BOOL)arg1;
- (void)setEllipsizesText:(BOOL)arg1;
- (void)setKerningAllowed:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
