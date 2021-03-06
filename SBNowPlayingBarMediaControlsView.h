/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBIconLabel, UIButton;

@interface SBNowPlayingBarMediaControlsView : UIView
{
    UIButton *_prevButton;
    UIButton *_playButton;
    UIButton *_nextButton;
    UIButton *_airPlayButton;
    SBIconLabel *_trackLabel;
    int _toggleType;
    SBIconLabel *_toggleLabel;
    BOOL _isAirPlayVisible;
    BOOL _isPlaying;
    BOOL _isEnabled;
    BOOL _showingToggleLabel;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateImages:(BOOL)arg1 enabled:(BOOL)arg2;
- (void)layoutSubviews;
- (void)_layoutForiPhone;
- (void)_layoutForiPad;
- (void)setTrackString:(id)arg1;
@property(nonatomic) BOOL airPlayButtonVisible; // @synthesize airPlayButtonVisible=_isAirPlayVisible;
- (void)setLabelWidth:(float)arg1;
- (id)_descriptionLabel;
- (void)_toggleStatus:(id)arg1;
- (void)_setToggleType:(int)arg1;
- (id)_toggleLabelText;
- (void)_orientationLockChanged:(id)arg1;
- (void)_muteChanged:(id)arg1;
@property(readonly, nonatomic) UIButton *airPlayButton; // @synthesize airPlayButton=_airPlayButton;
@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) UIButton *prevButton; // @synthesize prevButton=_prevButton;

@end

