/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@interface SBWaveView : UIView
{
    float _phaseWidth;
    float _phaseShift;
    float _minAmplitude;
    float _maxAmplitude;
    float _amplitude;
    float _levelDamping;
    double _phaseDuration;
    double _amplitudeChangeTime;
    double _amplitudeChangeDuration;
    float _lastAmplitude;
    float _level;
    BOOL _animating;
}

- (void)setFrame:(struct CGRect)arg1;
- (void)setColor:(id)arg1;
- (void)setPhaseWidth:(float)arg1;
- (void)setPhaseShift:(float)arg1;
- (float)_phaseShift;
- (float)_currentAmplitude;
- (void)_setAmplitude:(float)arg1 animated:(BOOL)arg2;
- (void)setMinAmplitude:(float)arg1;
- (void)setMaxAmplitude:(float)arg1;
- (void)setPhaseAnimationDuration:(double)arg1;
- (void)setLevel:(float)arg1 animated:(BOOL)arg2;
- (void)setLevelDamping:(float)arg1;
- (float)_amplitudeForLevel:(float)arg1;
- (void)beginAnimating;
- (void)stopAnimating;
- (void)_finishedAnimating;

@end

