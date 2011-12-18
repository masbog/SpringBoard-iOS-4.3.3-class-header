/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UITextField.h"

@class UILabel;

@interface SBPasscodeTextField : UITextField
{
    float _letterSpacing;
    BOOL _usesLargeClearButton;
    UILabel *_hiddenLabel;
}

- (void)dealloc;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
@property(nonatomic) float letterSpacing; // @synthesize letterSpacing=_letterSpacing;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)attachFieldEditor:(id)arg1;
- (void)_endedEditing;
- (id)_style;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
@property(nonatomic) BOOL usesLargeClearButton; // @synthesize usesLargeClearButton=_usesLargeClearButton;

@end

