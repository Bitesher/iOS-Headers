/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol AltMapDelegate
- (void)mapView:(id)arg1 willDrawInContext:(struct CGContext *)arg2;
- (void)mapView:(id)arg1 didResizeToWidth:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)mapViewDidFinishLoadingTiles:(id)arg1;
- (void)mapViewDidStartLoadingTiles:(id)arg1;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
@end
