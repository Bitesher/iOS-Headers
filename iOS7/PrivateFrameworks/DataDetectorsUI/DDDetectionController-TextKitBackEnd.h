/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataDetectorsUI/DDDetectionController.h>

@interface DDDetectionController (TextKitBackEnd)
- (id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)_applyBlock:(id)arg1 withResultsAtIndex:(void)arg2 ofStorage:(unsigned long long)arg3 context:(id)arg4;
- (_Bool)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id *)arg3 url:(id *)arg4;
- (struct __DDResult *)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2;
- (void)resetResultsForTextView:(id)arg1;
@end
