/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartSeriesSceneObject.h>

// Not exported
@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject
{
}

+ (struct MeshData)createMeshForSeries:(id)arg1;
+ (float)chartSeriesDepthOffsetFactor;
+ (float)chartSeriesDepth;
+ (id)chartSeriesType;
- (_Bool)shouldRenderSeries:(id)arg1;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(const tvec3_17f03ce0 *)arg4;

@end

