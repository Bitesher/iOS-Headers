/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TPLayerDelegateProxy : NSObject
{
    id <TPLayerDelegateProxyDelegate> _delegate;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)displayLayer:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)clearDelegate;
- (id)initWithDelegate:(id)arg1;

@end

