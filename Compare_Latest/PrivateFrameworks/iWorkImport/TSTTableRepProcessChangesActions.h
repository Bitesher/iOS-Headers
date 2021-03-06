/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSTTableRepProcessChangesActions : NSObject
{
    _Bool _invalidateAllChrome;
    _Bool _invalidateColumnChrome;
    _Bool _invalidateRowChrome;
    _Bool _hideChromeContextMenuButton;
    _Bool _invalidateKnobs;
    _Bool _invalidateSelection;
    _Bool _invalidateTableName;
    _Bool _updateEditorRemainders;
    _Bool _syncReferenceHighlightState;
    _Bool _setNeedsDisplay;
    CDStruct_5f1f7aa9 dirtyCellRange;
    CDStruct_5f1f7aa9 dirtyStrokeRange;
}

@property(nonatomic) _Bool setNeedsDisplay; // @synthesize setNeedsDisplay=_setNeedsDisplay;
@property(nonatomic) _Bool syncReferenceHighlightState; // @synthesize syncReferenceHighlightState=_syncReferenceHighlightState;
@property(nonatomic) _Bool updateEditorRemainders; // @synthesize updateEditorRemainders=_updateEditorRemainders;
@property(nonatomic) _Bool invalidateTableName; // @synthesize invalidateTableName=_invalidateTableName;
@property(nonatomic) _Bool invalidateSelection; // @synthesize invalidateSelection=_invalidateSelection;
@property(nonatomic) _Bool invalidateKnobs; // @synthesize invalidateKnobs=_invalidateKnobs;
@property(nonatomic) _Bool hideChromeContextMenuButton; // @synthesize hideChromeContextMenuButton=_hideChromeContextMenuButton;
@property(nonatomic) _Bool invalidateRowChrome; // @synthesize invalidateRowChrome=_invalidateRowChrome;
@property(nonatomic) _Bool invalidateColumnChrome; // @synthesize invalidateColumnChrome=_invalidateColumnChrome;
@property(nonatomic) _Bool invalidateAllChrome; // @synthesize invalidateAllChrome=_invalidateAllChrome;
@property(nonatomic) CDStruct_5f1f7aa9 dirtyStrokeRange; // @synthesize dirtyStrokeRange;
@property(nonatomic) CDStruct_5f1f7aa9 dirtyCellRange; // @synthesize dirtyCellRange;
- (id).cxx_construct;

@end

