/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBAppSwitcherModel : NSObject
{
    NSMutableArray *_recentDisplayIdentifiers;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_saveRecents;
- (id)_recentsFromPrefs;
- (void)addToFront:(id)arg1;
- (void)remove:(id)arg1;
- (id)appAtIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)identifiers;
- (void)appsRemoved:(id)arg1 added:(id)arg2;

@end

