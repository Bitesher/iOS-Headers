/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface _UIPopoverLayoutInfo : NSObject <NSCopying>
{
    struct UIEdgeInsets _contentInset;
    float _arrowHeight;
    struct CGSize _preferredContentSize;
    unsigned int _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _targetRect;
    BOOL _constrainToTargetRect;
    struct CGRect _frame;
    float _offset;
    unsigned int _arrowDirection;
    BOOL _updatesEnabled;
    BOOL _preferLandscapeOrientations;
}

+ (id)_observationKeys;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(readonly, nonatomic) unsigned int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) float offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic) BOOL constrainToTargetRect; // @synthesize constrainToTargetRect=_constrainToTargetRect;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) unsigned int preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) float arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateOutputs;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned int)arg2;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

