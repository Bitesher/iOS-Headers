/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartGrowAnimationClip.h>

// Not exported
@interface TSCH3DChartAreaGrowAnimationClip : TSCH3DChartGrowAnimationClip
{
}

- (void)renderAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (void)p_updateClipEffectStatesForAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (id)makeClipEffectAtIndex:(const tvec2_3b141483 *)arg1 sceneObject:(id)arg2 scene:(id)arg3;

@end

