/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDFPSCounter.h>

@class NSTimer;

// Not exported
@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int mCAFrameCount;
    NSTimer *mTimer;
}

- (void)stopLoggingFPS;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)reset;

@end
